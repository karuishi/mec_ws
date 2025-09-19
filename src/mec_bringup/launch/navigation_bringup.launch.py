from launch import LaunchDescription
from launch_ros.parameter_descriptions import ParameterValue
from launch.substitutions import Command
from launch_ros.actions import Node
import os
from ament_index_python.packages import get_package_share_path
from launch.actions import IncludeLaunchDescription, TimerAction
from launch.launch_description_sources import PythonLaunchDescriptionSource

def generate_launch_description():

    #localization_launch = IncludeLaunchDescription(
    #    PythonLaunchDescriptionSource(nav2_localization_launch_path),
    #    launch_arguments={
    #            'use_sim_time': LaunchConfiguration('use_sim_time'),
    #            'params_file': localization_params_path,
    #            'map': map_file_path,
    #    }.items()
    #)
    
    
    
    return LaunchDescription([
    ])  