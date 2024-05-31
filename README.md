# Purpose of the Docker

This container is running as a ROS2 Node and contains a Ollama installation with Mistral as a LLM.


## Usage

Once the container is started, the entry point is directly on the cli of ollama.

## Call Ollama Python API test

navigate to llm_scene_docker/llm_files/

execute: 

```python3   
python3 MainLLM.py
’’’

## Start the website

ros2 run pkg_website_llm website_llm 


## to do

- fix the website background -> css somehow not visible
- fix imports in website_llm.py since files are again not visible
- then start website again and test the service of /user_input by using the terminal
: ros2 service call user_input llm_interfaces/srv/UserInteraction "{}"



