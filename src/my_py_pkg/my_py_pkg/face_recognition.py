#!/usr/bin/env python3
import rclpy
import time
from rclpy.node import Node
from bill_interfaces.srv import GetTrained
from bill_interfaces.srv import SearchFor

class FaceRecognitionNode(Node): 
    def __init__(self):
        super().__init__("face_recognition") 
        self._getTrainedService=self.create_service(GetTrained,"get_trained",self.callback_get_trained) 
        self._searchForService=self.create_service(SearchFor,"search_for",self.callback_search_for) 
        self.get_logger().info("Face Recognition Node has started")

    def callback_get_trained(self, request, response):
        name_to_train=request.name
        response.trained=self.get_training(name_to_train)     
        return response
    
    def get_training(self,name_to_train):
        # TO-DO
        # colque aqui seu código para fazer o treinamento da pessoa informada
        time.sleep(10.0)
        return True

    def callback_search_for(self, request, response):
        person_to_search=request.name
        response.found=self.search_for(person_to_search)     
        return response
    
    def search_for(self,person_to_search):
        # TO-DO
        # colque aqui seu código para capturar um nome e retorne o nome capturado
        time.sleep(10.0)
        return True

def main(args=None):
    rclpy.init(args=args)
    node = FaceRecognitionNode()
    rclpy.spin(node)
    rclpy.shutdown()