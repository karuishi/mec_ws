from launch import LaunchDescription
from launch_ros.parameter_descriptions import ParameterValue
from launch.substitutions import Command
from launch_ros.actions import Node
import os
from ament_index_python.packages import get_package_share_path
from launch.actions import IncludeLaunchDescription, TimerAction
from launch.launch_description_sources import PythonLaunchDescriptionSource

def generate_launch_description():
    
    mec_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(os.path.join(
            get_package_share_path('mec_bringup'),
            'launch',
            'mec.launch.py'
        )),
    )

    lidar_driver_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(os.path.join(
            get_package_share_path('lslidar_driver'),
            'launch',
            'lslidar_launch.py'
        )),
    )
    
    rf2o_laser_odometry_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(os.path.join(
            get_package_share_path('rf2o_laser_odometry'),
            'launch',
            'rf2o_laser_odometry.launch.py'
        )),
    )

    robot_localization_launch = os.path.join(
        get_package_share_path('mec_navigation'),
        'launch',
        'robot_localization.launch.py'
    )

    mec_navigation_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(os.path.join(
            get_package_share_path('mec_navigation'),
            'launch',
            'mapping.launch.py'
        )),
    )
    
    return LaunchDescription([
        mec_launch,

        TimerAction(
            period=5.0,
            actions=[lidar_driver_launch]
        ),
        TimerAction(
            period=7.0,
            actions=[rf2o_laser_odometry_launch]
        ),

        TimerAction(
            period=8.5,
            actions=[robot_localization_launch]
        ),
            
        TimerAction(
            period=10.0,
            actions=[mec_navigation_launch]
        ),
    ])  