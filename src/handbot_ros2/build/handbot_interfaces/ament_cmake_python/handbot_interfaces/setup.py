from setuptools import find_packages
from setuptools import setup

setup(
    name='handbot_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('handbot_interfaces', 'handbot_interfaces.*')),
)
