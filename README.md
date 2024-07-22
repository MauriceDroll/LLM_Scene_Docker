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

![grafik](https://github.com/user-attachments/assets/576399b9-9e6e-4e6c-a981-a111ccab70f3)


## How to request the User Input

1. Connect to Docker
2. enter on the terminal
   
ros2 service call /user_interaction llm_interfaces/srv/UserInteraction {''}

ros2 service call scene_interpretation llm_interfaces/srv/SceneInterpretation "{user_input: 'TEST'}"


Please not in the {}-brackets should be the ObjectDetections, so that the Website can display them.

3. The terminal shows the user input.



## to do

- fix the website background -> css somehow not visible
- fix imports in website_llm.py since files are again not visible



## How to mock (bypass the LLM) 

1. Connect to Docker
2. enter on the terminal:

ros2 run pkg_pack_item_server pack_item_server

3. Result is hard coded:

['Box_Gluehlampe', 'Box_Wischblatt','Keilriemen_gross', 'Box_Bremsbacke', 'Keilriemen_klein', 'Tuete']
