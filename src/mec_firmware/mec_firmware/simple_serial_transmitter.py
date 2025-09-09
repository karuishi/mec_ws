#!/usr/bin/env python3
import rclpy
from rclpy.node import Node 
from std_msgs.msg import String
import serial

class SimpleSerialTransmitter(Node):
    def __init__(self):
        super().__init__("simple_serial_transmiter")

        self.declare_parameter("port","/dev/ttyUSB0")
        self.declare_parameter("baudrate",115200)
        self.port_=self.get_parameter("port").value
        self.baudrate_=self.get_parameter("baudrate").value
        self.esp32_=serial.Serial(port=self.port_,baudrate=self.baudrate_,timeout=0.1)

        self.sub_=self.create_subscription(String,"serial_transmitter",self.msgCallback,10)

    def msgCallback(self, msg):
        #self.esp32_.write((msg.data + "\n").encode("utf-8"))
        # Garante que só manda '0\n' ou '1\n'
        data = msg.data.strip()
        if data in ["0", "1"]:
            self.esp32_.write((data + "\n").encode("utf-8"))
            self.get_logger().info(f"Enviado para ESP32: {data}")
        else:
            self.get_logger().warn(f"Valor inválido recebido: '{data}'. Use '0' ou '1'.")

def main():
    rclpy.init();

    simple_serial_transmitter=SimpleSerialTransmitter()
    rclpy.spin(simple_serial_transmitter)

    simple_serial_transmitter.destroy_node()
    rclpy.shutdown()

if __name__=='__main__':
    main()
