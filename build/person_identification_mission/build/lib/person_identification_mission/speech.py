#!/usr/bin/env python3
import rclpy
import time
from rclpy.node import Node
from bill_interfaces.srv import SaySomething

class SpeechNode(Node): 
    def __init__(self):
        super().__init__("speech") 
        self._executeSpeechService=self.create_service(SaySomething,"say_something",self.callback_say_something) 
        self.get_logger().info("Speech Node has started")

    def callback_say_something(self, request, response):
        text_to_speak=request.something
        response.said=self.speak(text_to_speak)     
        return response
    
    def speak(self, text_to_speak):
        # TO-DO
        # colque aqui seu código para falar o texto passado como argumento
        self.get_logger().info("Quando eu estiver implementado irei falar: "+text_to_speak)
        time.sleep(10.0)
        return True



def main(args=None):
    rclpy.init(args=args)
    node = SpeechNode()
    rclpy.spin(node)
    rclpy.shutdown()