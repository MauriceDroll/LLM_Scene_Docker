from setuptools import find_packages
from setuptools import setup

setup(
    name='object_detector_tensorflow_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('object_detector_tensorflow_interfaces', 'object_detector_tensorflow_interfaces.*')),
)
