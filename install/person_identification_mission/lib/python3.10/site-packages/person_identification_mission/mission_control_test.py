#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from bill_interfaces.msg import MissionStatus  
from bill_interfaces.srv import SaySomething
from bill_interfaces.srv import ListenSomething

from functools import partial

class MissionControlTestNode(Node): 
    STARTING = 0
    STARTED = 1
    WAITING_FOR_SPEECH = 2
    WAITING_FOR_NAME = 3
    IDENTIFIED = 4
    MISSION_ACCOMPLISHED = 5
    def __init__(self):
        super().__init__("mission_control_test") 
        # create the publishers
        self._publisher = self.create_publisher(MissionStatus, 'status', 10)
        # create the clients
        self._saySomethingClient = self.create_client(SaySomething,"say_something")
        self._listenSomethingClient=self.create_client(ListenSomething,"listen_something")

        self._textListened=None
        self._status = MissionControlTestNode.STARTING
        
        self._speechRequested=False
        self._hearingRequested=False
        self._speechListened=""

        self.get_logger().info("Mission Control Node has started")
        self.mission_control_loop_timer = self.create_timer(1,self.mission_control_loop)


    def mission_control_loop(self):
        match (self._status):
            case MissionControlTestNode.STARTING:
                # Checking dependencies
                self.publish_status('Starting...')
                self._status=MissionControlTestNode.STARTED
            case MissionControlTestNode.STARTED:
                self.publish_status('Mission started')
                # Chama o serviço para falar 
                self.call_saySomething_service("Olá, meu nome é Bill. Qual o seu nome?")
                self._speechRequested=True # indica que um comando de voz está em andamento
                self._status=MissionControlTestNode.WAITING_FOR_SPEECH
            case MissionControlTestNode.WAITING_FOR_SPEECH:
                if (self._speechRequested):
                    self.publish_status('Waiting for speech to fininish...')   
                else:
                    self._speechRequested=False # indica que o comando de voz finalizou
                    # chama o serviço para escutar alguma 
                    # Nome Padrão é a string que será retornada se o serviço falhar
                    self.call_listenSomething_service("Nome Padrão")
                    self._hearingRequested=True
                    self._status=MissionControlTestNode.WAITING_FOR_NAME       
            case MissionControlTestNode.WAITING_FOR_NAME:
                if (self._hearingRequested):
                     self.publish_status('Waiting for the hearing to fininish...')    
                else:  
                    self._status=MissionControlTestNode.IDENTIFIED            
            case MissionControlTestNode.IDENTIFIED:
                self.publish_status('I Heard '+self._speechListened)  
                self._status=MissionControlTestNode.MISSION_ACCOMPLISHED              
            case MissionControlTestNode.MISSION_ACCOMPLISHED:   
                self.publish_status('Mission Accomplisded. Bye.')     
                exit()

    def publish_status(self, message):
        msg=MissionStatus()
        msg.status=message
        self._publisher.publish(msg)  
        # self.get_logger().info(message)   
    
    def call_saySomething_service(self,textoToSpeech):
        while not self._saySomethingClient.wait_for_service(1.0):
            self.get_logger().warn("Waiting for the service SaySomething")
        # the server is on, make a request         
        self._speechRequested=True
        request = SaySomething.Request()
        request.something = textoToSpeech
        future = self._saySomethingClient.call_async(request)
        future.add_done_callback(partial(self.callback_call_saySomething_service,request=request))   

    def callback_call_saySomething_service(self,future,request):
        try:
            response=future.result()
            if response.said:
                self._speechRequested=False
        except Exception as e:
            self.getLogger().error("Call to SaySomething service failed:"+str(e))

    def call_listenSomething_service(self,defaultTextToListen):
        while not self._listenSomethingClient.wait_for_service(1.0):
            self.get_logger().warn("Waiting for the service ListenSomething")
        # the server is on, make a request         
        self._speechListened=defaultTextToListen
        request = ListenSomething.Request()
        request.default_text_listened = defaultTextToListen
        future = self._listenSomethingClient.call_async(request)
        future.add_done_callback(partial(self.callback_call_listenSomething_service,request=request))   

    def callback_call_listenSomething_service(self,future,request):
        try:
            response=future.result()
            self._speechListened=response.text_listened
            self._hearingRequested=False
        except Exception as e:
            self.getLogger().error("Call to ListenSomething service failed:"+str(e))

def main(args=None):
    rclpy.init(args=args)
    node = MissionControlTestNode()
    rclpy.spin(node)
    rclpy.shutdown()