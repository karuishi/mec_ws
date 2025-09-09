#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from example_interfaces.srv import AddTwoInts
from functools import partial

class CalculatorClientNode(Node): 
    def __init__(self):
        super().__init__("calculator_client") 
        self.get_logger().info("O cliente da calculadora está rodando")
        self.call_calculator_server(3,4)

    def call_calculator_server(self,a,b):
        client=self.create_client(AddTwoInts,"add_two_ints")
        while not client.wait_for_service(1.0):
            self.get_logger().warning("Estou aguardando que o serviço add_two_ints seja oferecido")    
        self.get_logger().info("Opa! Ligaram a calculadora") 

        request =AddTwoInts.Request()
        request.a = a
        request.b = b
     
        future = client.call_async(request)
        future.add_done_callback(partial(self.callback_call_add_two_ints,request=request))
    
    def callback_call_add_two_ints(self,future,request):
        try:
            response=future.result()
            self.get_logger().info(str(
                request.a)+"+"+str(request.b)+"="+str(response.sum)) 
        except Exception as e:
            self.get_logger().error("Chamada ao serviço falhou:"+str(e)) 

def main(args=None):
    rclpy.init(args=args)
    node = CalculatorClientNode() 
    rclpy.spin(node)
    rclpy.shutdown()