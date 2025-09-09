from setuptools import find_packages, setup

package_name = 'my_py_pkg'

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
            "py_node = my_py_pkg.my_first_node:main",
            "radiostation = my_py_pkg.radiostation:main",
            "radioreceiver = my_py_pkg.radioreceiver:main",
            "calculator_server = my_py_pkg.calculator_server:main",
            "calculator_client = my_py_pkg.calculator_client:main",
            "hw_status_publisher = my_py_pkg.hw_status_publisher:main",
            "geometric_calculator_server = my_py_pkg.geometric_calculator_server:main",
            "calculator_client_param = my_py_pkg.calculator_client_param:main"
        ],
    },
)
