# R2E Tutorial
## Setup Robot
### Upload KRL Code
1. Download KRL sources from [this Link](https://www.w.hs-karlsruhe.de/gitlab/iras/research-projects/ki5grob/kuka-eki/-/tree/driver/krl)  
   ![Download KRL](readme_imgs/krl_download.png)  
2. Unpack downloaded sources
3. Change IP in `src/kuka_eki/krl/EkiHWInterface.xml` and `src/kuka_eki/krl/EkiIOInterface.xml` to match the robot 
controller's IP <font size="1"> (should be found on the robot cell somewhere) </font>
4. Create new project on KUKA smartPAD (teach pedant) with KUKA smartHMI (user interface)
   - Open main menu <font size="1"> (key with small robot in the bottom right on smartPAD or top left in smartHMI) </font>
   - _Konfiguration_ &rarr; _Benutzergruppe_ &rarr; _Administrator_ (pass: kuka)
   - Open project management window <font size="1"> (blue WorkVisual icon (gear with robot in it) on smartHMI) </font>
   - Pin "Ready2Educate" project if not already pinned
   - _Aktivieren_ &rarr; type in new project name, e.g. "ros2_driver" &rarr; confirm with _OK_
   - Confirm _Wollen Sie die Aktivierung des Projektes "ros2_driver" zulassen?_ with _Ja_
   - Confirm _Projektverwaltung_ panel _Wollen Sie fortfahren?_ with _Ja_  
   - Wait until project is activated
5. Insert downloaded KRL sources in new project  
   - On computer open WorkVisual
   - Navigate to "Dateien" tab in the left panel
   - Copy in step 3 modified `src/kuka_eki/krl/EkiHWInterface.xml` and `src/kuka_eki/krl/EkiIOInterface.xml` to `<KRC>/Config/User/Common/EthernetKRL`  
     ![EKI Interface XMLs](readme_imgs/xmls.png)
   - Create new folder `<KRC>/R1/Program/ros2_driver`
   - Copy extracted `src/krl/kuka_eki_hw_interface.dat` and `src/krl/kuka_eki_hw_interface.src` to `<KRC>/R1/Program/ros2_driver`  
     ![KRL Program Files](readme_imgs/krl_files.png)
6. Install program
   - Click _Installieren_ button  
     ![Install Button](readme_imgs/install_button.png)
   - _Weiter_ &rarr; _Weiter_ &rarr; switch to user group _Administrator_ on smartPAD <font size="1"> (see step 4) </font> &rarr; _Weiter_ &rarr; _Ja_ on smartPAD &rarr; 
     _Ja_ on smartPAD &rarr; _Fertigstellen_
### Start Hardware Interface on Robot
1. On smartHMI navigate to  `R1/Program/ros2_driver`
2. Select `kuka_eki_hw_interface.src` &rarr; _Anwählen_
3. Select operating mode, e.g. Aut
   - Turn the switch on the smartPAD clockwise <font size="1"> (keyswitch left to emergency stop button) </font>
   - Select the operating mode on the smartHMI
   - Turn the switch back to the original position
4. Start program
   - Press start key on the left side of the smartPAD so that the robot interpreter status indicator turns green 
     <font size="1"> (the area around the "R" in the status bar at the top of the smartHMI) </font>
   - If T1 or T2 operating mode is selected instead of Aut, one of the enabling switches on the rear of the smartPAD has 
     to be held in center position to start the program and the start key has to be held constantly to continue running 
     the program
### Setup ROS2 environment
1. Clone and build repository "R2E Tutorial"
   - Open a terminal
   - Clone repo  
     ```
     git clone -b dev https://www.w.hs-karlsruhe.de/gitlab/iras/common/instructions/iras_robots/r2e_tutorial.git
     ```
   - Navigate to cloned repo  
     ``` 
     cd r2e_tutorial
     ```
   - Build container  
     ```
     ./start_docker.sh
     ```
     If everything went well, you should be in the container like this: `robot@IRAS-IRL0-LIN:~/rosws$`
   - In the container, build workspace:
     ```
     colcon build
     ```
   - Source workspace
     ```
     source install/setup.bash
     ```
2. Start robot driver
   - I not already in container, attach to running container
     ```
     docker exec -it r2e_cell /bin/bash
     ```
   - Source workspace
     ```
     source install/setup.bash
     ```
   - Launch robot driver with MoveIt2 wrapper
     ```
     ros2 launch kuka_kr3_cell_description cell.launch.py
     ```
     This will open up a simulated hardware with visualisation.  
     To launch the real robot:
     - Make sure that you are in our local network (Wi-Fi or LAN)
     - Execute
       ```
       ros2 launch kuka_kr3_cell_description cell.launch.py use_fake_hardware:=false robot_ip:="<robot-ip>"
       ```
3. Move robot
   - Open up a new terminal and attach to running container
     ```
     docker exec -it r2e_cell /bin/bash
     ```
   - Source workspace
     ```
     source install/setup.bash
     ```
   - Run sample application
     ```
     ros2 run r2e_demos test_ros_env
     ```
     
   