#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from example_interfaces.msg import String
 
class RadioReceiverNode(Node): 
    def __init__(self):
        super().__init__("radioreceiver") 
        self._subscriber = self.create_subscription(
            String,"FM1075",self.callback_radioreceiver,10)
        self.get_logger().info("O rádio receptor foi ligado")   

    def callback_radioreceiver(self,msg):
        self.get_logger().info("Estou escutando: "+str(msg.data))

def main(args=None):
    rclpy.init(args=args)
    node = RadioReceiverNode() 
    rclpy.spin(node)
    rclpy.shutdown()