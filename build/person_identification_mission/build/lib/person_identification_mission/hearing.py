#!/usr/bin/env python3
import rclpy
import time
from rclpy.node import Node
from bill_interfaces.srv import ListenSomething

class HearingNode(Node): 
    def __init__(self):
        super().__init__("hearing") 
        self._executeHearingService=self.create_service(ListenSomething,"listen_something",self.callback_listen_something) 
        self.get_logger().info("Hearing Node has started")

    def callback_listen_something(self, request, response):
        default_text_listened=request.default_text_listened
        response.text_listened=self.listen(default_text_listened)     
        return response
    
    def listen(self, default_text_listened):
        # TO-DO
        # colque aqui seu código para falar o texto passado como argumento
        text_listened="Eu ouvi alguma coisa"
        self.get_logger().info("Quando eu estiver implementado irei retornar o texto do que foi ouvido: "+text_listened)
        time.sleep(10.0)
        return text_listened



def main(args=None):
    rclpy.init(args=args)
    node = HearingNode()
    rclpy.spin(node)
    rclpy.shutdown()