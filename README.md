# Purpose of the Docker

This container is running as a ROS2 Node and contains a Ollama installation with Mistral as a LLM.

It also contains the website which is used to get the user input.


## Usage

Once the container is started, the entry point is directly on the cli of ollama.

## Call Ollama Python API test

navigate to llm_scene_docker/llm_files/

execute: 

```python3  ```
python3 MainLLM.py

## Start the website

ros2 run pkg_website_llm website_llm 


## to do

- fix the website background -> css somehow not visible
- fix imports in website_llm.py since files are again not visible



## How to mock (bypass the LLM) 

1. Connect to Docker
2. enter on the terminal:

ros2 run pkg_pack_item_server pack_item_server

3. Result is hard coded:

['Box_Gluehlampe', 'Box_Wischblatt','Keilriemen_gross', 'Box_Bremsbacke', 'Keilriemen_klein', 'Tuete']