#!/usr/bin/env python3
import rclpy
import time
from rclpy.node import Node
from bill_interfaces.srv import GetName
from bill_interfaces.srv import SaySomething

class VoiceSpeechRecognitionNode(Node): 
    def __init__(self):
        super().__init__("voice_speech_recognition") 
        self._getNameService=self.create_service(GetName,"get_name",self.callback_get_name) 
        self._saySomething=self.create_service(SaySomething,"say_something",self.callback_say_something)

        self.get_logger().info("Voice Speech Recognition Node has started")

    def callback_get_name(self, request, response):
        name_listened=self.listen_the_name()
        if name_listened==None:
            response.name_listended = request.default_name
        else:
            response.name_listened = name_listened        
        return response
    
    def listen_the_name(self):
        # TO-DO
        # colque aqui seu código para capturar um nome e retorne o nome capturado
        time.sleep(10.0)
        return 'Nome Qualquer'

    def callback_say_something(self, request, response):
        something=request.something
        response.said=self.say(something)     
        return response
    
    def say(self,something):
        # TO-DO
        # colque aqui seu código para falar o texto informado
        time.sleep(10.0)
        return True

def main(args=None):
    rclpy.init(args=args)
    node = VoiceSpeechRecognitionNode()
    rclpy.spin(node)
    rclpy.shutdown()