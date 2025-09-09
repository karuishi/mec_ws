// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bill_interfaces:msg/MissionStatus.idl
// generated code does not contain a copyright notice

#ifndef BILL_INTERFACES__MSG__DETAIL__MISSION_STATUS__BUILDER_HPP_
#define BILL_INTERFACES__MSG__DETAIL__MISSION_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bill_interfaces/msg/detail/mission_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bill_interfaces
{

namespace msg
{

namespace builder
{

class Init_MissionStatus_status
{
public:
  Init_MissionStatus_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::bill_interfaces::msg::MissionStatus status(::bill_interfaces::msg::MissionStatus::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bill_interfaces::msg::MissionStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bill_interfaces::msg::MissionStatus>()
{
  return bill_interfaces::msg::builder::Init_MissionStatus_status();
}

}  // namespace bill_interfaces

#endif  // BILL_INTERFACES__MSG__DETAIL__MISSION_STATUS__BUILDER_HPP_
