#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from bill_interfaces.msg import MissionStatus  # Tipo de mensagem usado no MissionControl

class ControlPanel(Node):
    def __init__(self):
        super().__init__("control_panel")
        # Inscrevendo-se no tópico 'control_panel'
        self.subscription = self.create_subscription(
            MissionStatus,  # Tipo de mensagem publicado pelo MissionControl
            'status',  # Nome do tópico
            self.listener_callback,  # Callback para processar as mensagens
            10  # Tamanho da fila
        )
        self.get_logger().info("Control Panel Node has started")
    # Subscriber    
    def listener_callback(self, msg): 
        # Exibe a mensagem recebida no log
        self.get_logger().info(f'Received status: {msg.status}')

def main(args=None):
    rclpy.init(args=args)
    control_panel = ControlPanel()
    rclpy.spin(control_panel)
    control_panel.destroy_node()
    rclpy.shutdown()
