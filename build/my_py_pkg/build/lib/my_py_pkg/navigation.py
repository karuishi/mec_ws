#!/usr/bin/env python3
import rclpy
import time
from rclpy.node import Node
from bill_interfaces.srv import ExecuteSpin

class NavigationNode(Node): 
    def __init__(self):
        super().__init__("navigation") 
        self._executeSpinService=self.create_service(ExecuteSpin,"execute_spin",self.callback_execute_spin) 
        self.get_logger().info("Navigation Node has started")

    def callback_execute_spin(self, request, response):
        angle=request.angle
        response.done=self.execute_spin(angle)     
        return response
    
    def execute_spin(self, angle):
        # TO-DO
        # colque aqui seu código para girar o robô do angulo informado
        time.sleep(10.0)
        return True



def main(args=None):
    rclpy.init(args=args)
    node = NavigationNode()
    rclpy.spin(node)
    rclpy.shutdown()