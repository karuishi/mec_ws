#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from bill_interfaces.msg import MissionStatus  
from bill_interfaces.srv import GetName
from bill_interfaces.srv import GetTrained
from bill_interfaces.srv import ExecuteSpin
from bill_interfaces.srv import SearchFor
from bill_interfaces.srv import SaySomething

from functools import partial
class MissionControlNode(Node): 
    STARTING = 0
    STARTED = 1
    WAITING_FOR_NAME = 2
    IDENTIFIED = 3
    WAITING_FOR_TRAINING = 4
    TRAINED = 5
    WAITING_FOR_SPIN = 6
    TURNED = 7
    WAITING_FOR_RECOGNITION = 8
    FOUND = 9
    WAITING_FOR_FINAL_REMARKS = 10
    MISSION_ACCOMPLISHED = 11
    def __init__(self):
        super().__init__("mission_control") 
        self._nameOfPOI="John Doe" # name of the person to find
        # create the publishers
        self._publisher = self.create_publisher(MissionStatus, 'status', 10)
        # create the clients
        self._getNameClient = self.create_client(GetName,"get_name")
        self._getTrainedClient = self.create_client(GetTrained,"get_trained")
        self._executeSpinClient = self.create_client(ExecuteSpin,"execute_spin")
        self._searchForClient = self.create_client(SearchFor,"search_for")
        self._saySomethingClient = self.create_client(SaySomething,"say_something")

        self._status = MissionControlNode.STARTING
        self.get_logger().info("Mission Control Node has started")
        self.mission_control_loop_timer = self.create_timer(1,self.mission_control_loop)

    def mission_control_loop(self):
        match (self._status):
            case MissionControlNode.STARTING:
                # Checking dependencies
                self.publish_status('Starting...')
                self._status=MissionControlNode.STARTED
            case MissionControlNode.STARTED:
                self.publish_status('Mission started')
                self.call_getName_service()
                self._status=MissionControlNode.WAITING_FOR_NAME
            case MissionControlNode.WAITING_FOR_NAME:
                self.publish_status('Waiting for Name...')            
            case MissionControlNode.IDENTIFIED:
                self.publish_status('Identified '+self._nameOfPOI+'. Lets start the training')  
                self.call_getTrained_service() 
                self._status=MissionControlNode.WAITING_FOR_TRAINING
            case MissionControlNode.WAITING_FOR_TRAINING:
                self.publish_status('Waiting for Training...')    
            case MissionControlNode.TRAINED:
                self.publish_status('Trained for '+self._nameOfPOI+'. Bill will start the spin')  
                self.call_executeSpin_service() 
                self._status=MissionControlNode.WAITING_FOR_SPIN            
            case MissionControlNode.WAITING_FOR_SPIN:
                self.publish_status('Waiting for spin to finish...')   
            case MissionControlNode.TURNED:
                self.publish_status('Turned. Lets start looking for '+self._nameOfPOI)
                self.call_searchFor_service() 
                self._status=MissionControlNode.WAITING_FOR_RECOGNITION       
            case MissionControlNode.WAITING_FOR_RECOGNITION:
                self.publish_status('Waiting for Recognition...')   
            case MissionControlNode.FOUND:
                self.publish_status('Found '+self._nameOfPOI)
                self.call_saySomething_service() 
                self._status=MissionControlNode.WAITING_FOR_FINAL_REMARKS      
            case MissionControlNode.WAITING_FOR_FINAL_REMARKS:
                self.publish_status('Waiting for Final Remarks...')                  
            case MissionControlNode.MISSION_ACCOMPLISHED:   
                self.publish_status('Mission Accomplisded. Bye.')     
                exit()

    def publish_status(self, message):
        msg=MissionStatus()
        msg.status=message
        self._publisher.publish(msg)  
        # self.get_logger().info(message)   
    
    def call_getName_service(self):
        while not self._getNameClient.wait_for_service(1.0):
            self.get_logger().warn("Waiting for the service GetName")
        # the server is on, make a request         
        request = GetName.Request()
        request.default_name = self._nameOfPOI
        future = self._getNameClient.call_async(request)
        future.add_done_callback(partial(self.callback_call_getName_service,request=request))
    
    def callback_call_getName_service(self,future,request):
        try:
            response=future.result()
            self._nameOfPOI=response.name_listened
            self._status=MissionControlNode.IDENTIFIED
        except Exception as e:
            self.getLogger().error("Call to GetName service failed:"+str(e))

    def call_getTrained_service(self):
        while not self._getTrainedClient.wait_for_service(1.0):
            self.get_logger().warn("Waiting for the service GetTrained")
        # the server is on, make a request         
        request = GetTrained.Request()
        request.name = self._nameOfPOI
        future = self._getTrainedClient.call_async(request)
        future.add_done_callback(partial(self.callback_call_getTrained_service,request=request))

    def callback_call_getTrained_service(self,future,request):
        try:
            response=future.result()
            if response.trained:
                self._status=MissionControlNode.TRAINED
        except Exception as e:
            self.getLogger().error("Call to GetTrained service failed:"+str(e))

    def call_executeSpin_service(self):
        while not self._executeSpinClient.wait_for_service(1.0):
            self.get_logger().warn("Waiting for the service ExecuteSpin")
        # the server is on, make a request         
        request = ExecuteSpin.Request()
        request.angle = 180.0
        future = self._executeSpinClient.call_async(request)
        future.add_done_callback(partial(self.callback_call_executeSpin_service,request=request))

    def callback_call_executeSpin_service(self,future,request):
        try:
            response=future.result()
            if response.done:
                self._status=MissionControlNode.TURNED
        except Exception as e:
            self.getLogger().error("Call to ExecuteSpin service failed:"+str(e))

    def call_searchFor_service(self):
        while not self._searchForClient.wait_for_service(1.0):
            self.get_logger().warn("Waiting for the service SearchFor")
        # the server is on, make a request         
        request = SearchFor.Request()
        request.name = self._nameOfPOI
        future = self._searchForClient.call_async(request)
        future.add_done_callback(partial(self.callback_call_searchFor_service,request=request))   

    def callback_call_searchFor_service(self,future,request):
        try:
            response=future.result()
            if response.found:
                self._status=MissionControlNode.FOUND
        except Exception as e:
            self.getLogger().error("Call to SearchFor service failed:"+str(e))

    def call_saySomething_service(self):
        while not self._saySomethingClient.wait_for_service(1.0):
            self.get_logger().warn("Waiting for the service SaySomething")
        # the server is on, make a request         
        request = SaySomething.Request()
        request.something = 'I have found' + self._nameOfPOI
        future = self._saySomethingClient.call_async(request)
        future.add_done_callback(partial(self.callback_call_saySomething_service,request=request))   

    def callback_call_saySomething_service(self,future,request):
        try:
            response=future.result()
            if response.said:
                self._status=MissionControlNode.MISSION_ACCOMPLISHED
        except Exception as e:
            self.getLogger().error("Call to SaySomething service failed:"+str(e))

def main(args=None):
    rclpy.init(args=args)
    node = MissionControlNode()
    rclpy.spin(node)
    rclpy.shutdown()