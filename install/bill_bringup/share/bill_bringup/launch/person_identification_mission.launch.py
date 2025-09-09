from launch import LaunchDescription 
from launch_ros.actions import Node

def generate_launch_description():
    ld = LaunchDescription()
    control_panel_node = Node(
        package="person_identification_mission",
        executable="control_panel"
    )
    voice_speech_recognition_node = Node(
        package="person_identification_mission",
        executable="voice_speech_recognition"
    )
    face_recognition_node = Node(
        package="person_identification_mission",
        executable="face_recognition"
    )
    navigation_node = Node(
        package="person_identification_mission",
        executable="navigation"
    )
    mission_control_node = Node(
        package="person_identification_mission",
        executable="mission_control"
    )   
    ld.add_action(control_panel_node)
    ld.add_action(voice_speech_recognition_node)
    ld.add_action(face_recognition_node)
    ld.add_action(navigation_node)
    ld.add_action(mission_control_node)
    return ld