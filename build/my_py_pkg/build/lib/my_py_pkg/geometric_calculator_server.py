#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from my_interfaces.srv import ComputeRectangleArea

class GeometricCalculatorServerNode(Node):
    def __init__(self):
        super().__init__("geometric_calculator_server") 
        self._server = self.create_service(
            ComputeRectangleArea,"compute_rectangle_area",self.callback_compute_rectangle_area)
        self.get_logger().info("A calculadora geométrica está on")
    
    def callback_compute_rectangle_area(self, request, response):
        response.area = request.width * request.height
        self.get_logger().info(
            "Recebi os números "+str(request.width)+" e "+str(request.height)+
            " para base e altura e estou retornando a área de "+str(response.area))
        return response
def main(args=None):
    rclpy.init(args=args)
    node = GeometricCalculatorServerNode() 
    rclpy.spin(node)
    rclpy.shutdown()