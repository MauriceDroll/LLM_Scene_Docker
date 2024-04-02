# ready2educate cell tutorial

The goal of this tutorial is for you to become more familiar with ROS2 and the frameworks that we use at IRAS. 

## Exercise 1: setup your environment and run example

1. Clone this repository
```bash
git clone https://github.com/IRAS-HKA/r2e_tutorial.git
```
2. Navigate to the 'r2e_tutorial' directory

3. Build container
```bash
./start_docker.sh
```
You should now be inside the container and see following prompt:
```
robot@<pc_name>:~/ros2_ws$
```
5. Build workspace
```bash
colcon build
```
6. Source workspace
```bash
source install/setup.bash
```
7. Start robot driver and visualization
```bash
ros2 launch kuka_kr3_cell_description cell.launch.py
```
This should open up RViz and you should see the robot model. 
You can play around with MoveIt! and the robot should move in the visualization.

8. Open a new terminal and connect to running container
```bash
docker exec -it r2e bash
```
9. Source workspace
```bash
source install/setup.bash
```
10. Run example
```bash
ros2 run r2e_tutorial example
```

## Exercise 2: Haus vom Nikolaus
Write a program that draws the "Haus vom Nikolaus" with the robot in the air.

You can use the ```r2e_tutorial/src/example.py``` file as a starting point.

1. Create a new file ```r2e_tutorial/src/house.py```
2. Write a program that draws the "Haus vom Nikolaus" with the robot in the air. 
You can start by copying the example program and modifying it.
3. Before you can run your program, you need to add it to the ```r2e_tutorial/setup.py``` file. 
Add the following lines to the ```entry_points['console_scripts']``` section:
```python
'house = r2e_tutorial.house:main'
```
This is a list, don't forget the comma between the entries.

This way, you can test your code by running ```ros2 run r2e_tutorial house``` after building the workspace.

4. Build the workspace.  Make sure you are in the container and in the ```ros2_ws``` directory.
```bash
colcon build
```
5. Source the workspace
```bash
source install/setup.bash
```
6. Run your program
```bash
ros2 run r2e_tutorial house
```
7. Commit your changes and push them to the remote repository
```bash
git add --all
git commit -m "Added program to draw a house in the air with the robot"
git push
```

## Exercise 3: Implement methods for picking and placing objects
In this exercise, you will implement methods for picking and placing objects. 
You can use ```complex_movement_example(robot, pose)``` from ```r2e_tutorial/src/example.py``` as a starting point.

Consider what types of motion is required for picking and placing objects (pre-pick, post-pick poses, approach, etc.). 
Create a new file ```r2e_tutorial/src/pick_and_place.py``` and implement the following methods:
```python
pick_cartesian(robot, pose)
pick_joint_position(robot, joint_positions)
place_cartesian(robot, pose)
place_joint_position(robot, joint_positions)
```
Once you have implemented these methods, commit your changes and push them to the remote repository.

## Exercise 4: Implement a method for building a pyramid of 6 blocks
In this exercise, you will implement a program for building and disassembling a pyramid of 6 blocks 
(3 blocks in the first row, 2 blocks in the second row, 1 block in the third row).
Use the methods you implemented in the previous exercise.

Create a new file for your program, just like in exercise 2. Don't forget to add the program to the ```setup.py``` file.
Before testing your code, build the workspace and source it.

The goal is to run the code on the real robot. You will be able to pick up blocks from the slide and place them on the table.
The pick pose for the blocks on the slide will be provided as joint positions, as well as the place pose when disassembling.
Use cartesian poses for picking and placing the blocks on the table.

You will only receive these joint positions once we are in the lab. Neither the blocks nor the slide is available in the simulation.
Write your code in a way that you can easily specify and adapt these joint positions in the code.

After you have implemented the program, commit your changes and push them to the remote repository.

## Exercise 5: Test your code on the real robot
Once you are in the lab, you can test your code on the real robot.

### Start Hardware Interface on Robot

1. Switch to user group _Administrator_ on smartHMI
2. Activate project "ros2_driver" on smartHMI (if not already active)
    - Open project management window <font size="1"> (blue WorkVisual icon - gear with robot in it - on smartHMI) </font>
    - Select "ros2_driver" in _Verfügbare Projekte_ &rarr; _Entpinnen_
    - _Aktivieren_ &rarr; _Ja_
    - Wait until project is activated
3. On smartHMI navigate to  `R1/Program/ros2_driver`
4. Select `kuka_eki_hw_interface.src` &rarr; _Anwählen_
5. Select operating mode, e.g. Aut
    - Turn the switch on the smartPAD clockwise <font size="1"> (keyswitch left to emergency stop button) </font>
    - Select the operating mode on the smartHMI
    - Turn the switch back to the original position
6. Start program
    - Potentially change the robot's velocity <font size="1"> (start symbol on top of hand symbol in the status bar at
      the
      top of the smartHMI) </font> with the slider in the smartHMI or the +/- keys on the smartPAD
      <font size="1"> (penultimate buttons on the right side) </font>
    - Press start key (green play button) on the left side of the smartPAD multiple times, until the robot interpreter
      status indicator turns green
      <font size="1"> (the area around the "R" in the status bar at the top of the smartHMI) </font>
        - You potentially need to "Quitt" the robot by pressing the "Quitt" button on the robot cell
        - You need to activate the robot's drives if they are not active (grey "O" next to the "R" in the status bar at
          the top of the smartHMI)
            - click on the "O" in the status bar
            - click in "I" in the menu that pops up
    - If T1 or T2 operating mode is selected instead of Aut, one of the enabling switches on the rear of the smartPAD
      has
      to be held in center position and the start key has to be held constantly to continue running
      the program

### Run your code on the real robot

Use one of the PCs in the lab, clone your repository and set up the workspace as before, 
**EXCEPT!!!** before running ```./start_docker.sh```, edit it and set ```DOMAIN_ID``` in line 4 to the last 2 digits of the IP of the Roboter-Steuerung. 

Adapt your code: initialize ```RobotClient``` with ```is_simulation=True```.

To connect to the real robot run
```bash
ros2 launch kuka_kr3_cell_description cell.launch.py use_fake_hardware:=false robot_ip:=<robot_ip>
```
where ```<robot_ip>``` is the IP address of the Roboter-Steuerung.

Run your code as before.