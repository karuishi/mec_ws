from setuptools import find_packages, setup

package_name = 'person_identification_mission'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='jorge',
    maintainer_email='jorge@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            "mission_control = person_identification_mission.mission_control:main",
            "voice_speech_recognition = person_identification_mission.voice_speech_recognition:main",
            "face_recognition = person_identification_mission.face_recognition:main",
            "navigation = person_identification_mission.navigation:main",
            "control_panel = person_identification_mission.control_panel:main",
            "speech=person_identification_mission.speech:main",
            "hearing=person_identification_mission.hearing:main",
            "mission_control_test=person_identification_mission.mission_control_test:main"
        ],
    },
)
