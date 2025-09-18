from ament_index_python.packages import get_package_share_path
from launch import LaunchDescription
from launch_ros.parameter_descriptions import ParameterValue
from launch.substitutions import Command
from launch_ros.actions import Node
import os

def generate_launch_description():
    robot_navigation_path = get_package_share_path('mec_navigation')
    ekf_file_path = os.path.join(robot_navigation_path, 'config', 'ekf.yaml')

    start_robot_localization_cmd = Node(
        package='robot_localization',
        executable='ekf_node',
        name='ekf_filter_node',
        output='screen',
        parameters=[ekf_file_path],
        remappings=[('/odometry/filtered', '/odom')]
    )

    return LaunchDescription([
        start_robot_localization_cmd
    ])