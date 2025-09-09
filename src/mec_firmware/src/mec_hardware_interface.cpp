#include "mec_firmware/mec_hardware_interface.hpp"
#include <hardware_interface/types/hardware_interface_type_values.hpp>

namespace mec_firmware
{
MecHardwareInterface::MecHardwareInterface() 
{

}    
MecHardwareInterface::~MecHardwareInterface() 
{
    if(esp32_.IsOpen())
    {
        try {
            esp32_.Close();
        }
        catch(...)
        {
            RCLCPP_FATAL_STREAM(rclcpp::get_logger("MecHardwareInterface"),"Something went wrong while closing the connection with port " <<port_);
        }
    }

}
CallbackReturn MecHardwareInterface::on_init(const hardware_interface::HardwareInfo &hardware_info) 
{
    CallbackReturn result = hardware_interface::SystemInterface::on_init(hardware_info);
    if (result != CallbackReturn::SUCCESS) {
        return result;
    }
    try 
    {
        port_ = info_.hardware_parameters.at("port");
    }
    catch (std::out_of_range &e)
    {
            RCLCPP_FATAL(rclcpp::get_logger("MecHardwareInterface"),"No Serial Port Provided! Aborting");
            return CallbackReturn::FAILURE;
    }
    velocity_commands_.resize(info_.joints.size(), 0.0);
    position_states_.resize(info_.joints.size(), 0.0);
    velocity_states_.resize(info_.joints.size(), 0.0);

    last_run_ = rclcpp::Clock().now();

    return CallbackReturn::SUCCESS;
}
std::vector<hardware_interface::StateInterface> MecHardwareInterface::export_state_interfaces() 
{
    std::vector<hardware_interface::StateInterface> state_interfaces;
    for (size_t i = 0; i< info_.joints.size(); i++) {
        state_interfaces.emplace_back(hardware_interface::StateInterface(info_.joints[i].name, 
            hardware_interface::HW_IF_POSITION, &position_states_[i]));
        state_interfaces.emplace_back(hardware_interface::StateInterface(info_.joints[i].name, 
            hardware_interface::HW_IF_VELOCITY, &velocity_states_[i]));
    }
    return state_interfaces;
}
std::vector<hardware_interface::CommandInterface> MecHardwareInterface::export_command_interfaces()
{
    std::vector<hardware_interface::CommandInterface> command_interfaces;
     for (size_t i = 0; i< info_.joints.size(); i++) {
        command_interfaces.emplace_back(hardware_interface::CommandInterface(info_.joints[i].name,
            hardware_interface::HW_IF_VELOCITY, &velocity_commands_[i]));
     }
     return command_interfaces;
}
CallbackReturn MecHardwareInterface::on_activate(const rclcpp_lifecycle::State &previous_state)
{
    (void)previous_state;
    RCLCPP_INFO(rclcpp::get_logger("MecHardwareInterface"), "Starting robot hardware...");
    velocity_commands_ = {0.0, 0.0, 0.0, 0.0};
    position_states_ = {0.0, 0.0, 0.0, 0.0}; 
    velocity_states_ = {0.0, 0.0, 0.0, 0.0}; 
    try 
    {
        esp32_.Open(port_);
        esp32_.SetBaudRate(LibSerial::BaudRate::BAUD_115200);
    }
    catch(...)
    {
        RCLCPP_FATAL_STREAM(rclcpp::get_logger("MecHardwareInterface"),"Something went wrong while interacting with port " << port_);
        return CallbackReturn::FAILURE;
    }
    RCLCPP_INFO(rclcpp::get_logger("MecHardwareInterface"), "Hardware started, ready to take commands");
    return CallbackReturn::SUCCESS;
}
CallbackReturn MecHardwareInterface::on_deactivate(const rclcpp_lifecycle::State &previous_state)
{
   (void)previous_state;

    RCLCPP_INFO(rclcpp::get_logger("MecHardwareInterface"), "Stopping robot hardware...");
  
    try 
    {
        esp32_.Close();
    }
    catch(...)
    {
        RCLCPP_FATAL_STREAM(rclcpp::get_logger("MecHardwareInterface"),"Something went wrong while closing the port " << port_);
        return CallbackReturn::FAILURE;
    }
    return CallbackReturn::SUCCESS;   
}
hardware_interface::return_type MecHardwareInterface::read(const rclcpp::Time &time, const rclcpp::Duration &period)
{
    /* joints definition order
    "front_left_wheel_joint"
    "front_right_wheel_joint"
    "rear_left_wheel_joint"
    "rear_right_wheel_joint"
    */

    /* message format "flp00.00,frp00.00,rlp00.00,rrp00.00,"
        fl, fr, rl, rr (front-left, front-right, rear-left, rear-right)
        ex:
        flp1.23 (front-left positive value 1.23)
        frn2.34 (front-right negative value 2.34)
    */
    (void)time;
    (void)period;
    if(esp32_.IsDataAvailable())
    {
        auto dt = (rclcpp::Clock().now() - last_run_).seconds();
        std::string message;
        esp32_.ReadLine(message);
        std::stringstream ss(message);
        std::string res;
        int multiplier=1;

      RCLCPP_WARN(rclcpp::get_logger("MecHardwareInterface"),"Reading: '%s'", message.c_str());
        while (std::getline(ss, res, ','))
        {
            if (res.size() < 3) {
               // RCLCPP_WARN(rclcpp::get_logger("MecHardwareInterface"),"Mensagem inválida recebida: '%s'", res.c_str());
                continue; // end of the message reached or message not well-formed  
            }   
            multiplier = res.at(2) == 'p' ? 1 : -1;  

            // Front Left (fl)
            if (res.rfind("fl", 0) == 0)
            {
                velocity_states_[0] = multiplier * std::stod(res.substr(3));
                position_states_[0] += velocity_states_[0] * dt;
            }
            // Front Right (fr)
            else if (res.rfind("fr", 0) == 0)
            {
                velocity_states_[1] = multiplier * std::stod(res.substr(3));
                position_states_[1] += velocity_states_[1] * dt;
            }
            // Rear Left (rl)
            else if (res.rfind("rl", 0) == 0)
            {
                velocity_states_[2] = multiplier * std::stod(res.substr(3));
                position_states_[2] += velocity_states_[2] * dt;
            }
            // Rear Right (rr)
            else if (res.rfind("rr", 0) == 0)
            {
                velocity_states_[3] = multiplier * std::stod(res.substr(3));
                position_states_[3] += velocity_states_[3] * dt;
            }
        }
        last_run_ = rclcpp::Clock().now();
    }
    return hardware_interface::return_type::OK;
}
hardware_interface::return_type MecHardwareInterface::write(const rclcpp::Time &time, const rclcpp::Duration &period)
{
    (void)time;
    (void)period;
    std::stringstream message_stream;
    char front_left_wheel_sign = velocity_commands_[0] >= 0 ? 'p' : 'n';
    char front_right_wheel_sign = velocity_commands_[1] >= 0 ? 'p' : 'n';
    char rear_left_wheel_sign = velocity_commands_[2] >= 0 ? 'p' : 'n';
    char rear_right_wheel_sign = velocity_commands_[3] >= 0 ? 'p' : 'n';

    std::string compensate_zeros_front_left = "";
    std::string compensate_zeros_front_right = "";
    std::string compensate_zeros_rear_left = "";
    std::string compensate_zeros_rear_right = "";

    if(std::abs(velocity_commands_[0])< 10.0) 
    {
        compensate_zeros_front_left = "0";
    }
    else {
        compensate_zeros_front_left = "";
    }
    if(std::abs(velocity_commands_[1])< 10.0) 
    {
        compensate_zeros_front_right = "0";
    }
    else {
        compensate_zeros_front_right = "";
    }
    if(std::abs(velocity_commands_[2])< 10.0) 
    {
        compensate_zeros_rear_left = "0";
    }
    else {
        compensate_zeros_rear_left = "";
    }
    if(std::abs(velocity_commands_[3])< 10.0) 
    {
        compensate_zeros_rear_right = "0";
    }
    else {
        compensate_zeros_rear_right = "";
    }    
    // message format "flp00.00,frp00.00,rlp00.00,rrp00.00,"
    message_stream << std::fixed << std::setprecision(2) 
    << "fl" << front_left_wheel_sign << compensate_zeros_front_left << std::abs(velocity_commands_[0])
    << ",fr" << front_right_wheel_sign << compensate_zeros_front_right << std::abs(velocity_commands_[1]) 
    << ",rl" << rear_left_wheel_sign << compensate_zeros_rear_left << std::abs(velocity_commands_[2])    
    << ",rr" << rear_right_wheel_sign << compensate_zeros_rear_right << std::abs(velocity_commands_[3]) << ",\n";

    RCLCPP_WARN(rclcpp::get_logger("MecHardwareInterface"),"Writing: '%s'", message_stream.str().c_str());

    try {
        esp32_.Write(message_stream.str());
    }
    catch(...) {
        RCLCPP_FATAL_STREAM(rclcpp::get_logger("MecHardwareInterface"),"Something went wrong while sending the message " 
            << message_stream.str() << "on the port " << port_);
        return hardware_interface::return_type::ERROR;
    }
    return hardware_interface::return_type::OK;
}
}
#include <pluginlib/class_list_macros.hpp>
PLUGINLIB_EXPORT_CLASS(mec_firmware::MecHardwareInterface, hardware_interface::SystemInterface);
