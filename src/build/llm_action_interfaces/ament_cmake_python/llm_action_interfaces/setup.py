from setuptools import find_packages
from setuptools import setup

setup(
    name='llm_action_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('llm_action_interfaces', 'llm_action_interfaces.*')),
)
