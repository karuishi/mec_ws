from setuptools import find_packages
from setuptools import setup

setup(
    name='bill_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('bill_interfaces', 'bill_interfaces.*')),
)
