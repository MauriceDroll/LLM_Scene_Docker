##############################################################################
##                                 Base Image                               ##
##############################################################################
ARG ROS_DISTRO=foxy
FROM osrf/ros:$ROS_DISTRO-desktop
ENV TZ=Europe/Berlin
RUN ln -snf /usr/share/zoneinfo/$TZ /etc/localtime && echo $TZ > /etc/timezone

##############################################################################
##                                 Global Dependecies                       ##
##############################################################################
ENV LANG C.UTF-8
ENV LC_ALL C.UTF-8
ENV LC_ALL=C

RUN apt-get update && apt-get install --no-install-recommends -y \
    bash nano htop git sudo wget curl gedit pip && \
    rm -rf /var/lib/apt/lists/*

##############################################################################
##                                 Create User                              ##
##############################################################################
ARG USER=robot
ARG PASSWORD=robot
ARG UID=1000
ARG GID=1000
ARG DOMAIN_ID=0
ENV UID=${UID}
ENV GID=${GID}
ENV USER=${USER}
RUN groupadd -g "$GID" "$USER"  && \
    useradd -m -u "$UID" -g "$GID" --shell $(which bash) "$USER" -G sudo && \
    echo "$USER:$PASSWORD" | chpasswd && \
    echo "%sudo ALL=(ALL) NOPASSWD: ALL" > /etc/sudoers.d/sudogrp

RUN echo "source /opt/ros/$ROS_DISTRO/setup.bash" >> /etc/bash.bashrc
RUN echo "source /usr/share/colcon_cd/function/colcon_cd.sh" >> /etc/bash.bashrc
RUN echo "export _colcon_cd_root=~/ros2_install" >> /etc/bash.bashrc
RUN echo "export ROS_DOMAIN_ID=${DOMAIN_ID}" >> /etc/bash.bashrc

USER $USER 
RUN rosdep update

##############################################################################
##                                 General Dependencies                     ##
##############################################################################
USER root
RUN DEBIAN_FRONTEND=noninteractive \
	apt update && \
	apt install -y ros-$ROS_DISTRO-moveit  \
    ros-$ROS_DISTRO-moveit-common  \
    ros-$ROS_DISTRO-moveit-servo  \
    ros-$ROS_DISTRO-xacro  \
    ros-$ROS_DISTRO-joint-trajectory-controller  \
    ros-$ROS_DISTRO-joint-state-broadcaster  \
    ros-$ROS_DISTRO-controller-manager \
    ros-$ROS_DISTRO-sensor-msgs-py  \
    ros-$ROS_DISTRO-joy*  \
    ros-$ROS_DISTRO-cv-bridge

USER $USER
RUN pip install scipy

RUN mkdir -p /home/"$USER"/dependencies_ws/src

RUN cd /home/"$USER"/dependencies_ws && git clone https://project_377_bot:glpat-DxteEaE_sAxRBiYGXhya@www.w.hs-karlsruhe.de/gitlab/iras/common/ros_general/moveit_wrapper.git
RUN cd /home/"$USER"/dependencies_ws && git clone https://project_376_bot:glpat-4-ky62LJgxLzKMzJDzjU@www.w.hs-karlsruhe.de/gitlab/iras/common/ros_general/iras_interfaces.git
RUN cd /home/"$USER"/dependencies_ws && git clone https://project_436_bot:glpat-Px2zh52V7EPq1HzU9igi@www.w.hs-karlsruhe.de/gitlab/iras/research-projects/ki5grob/ros_environment.git

RUN cd /home/"$USER"/dependencies_ws && git clone -b driver https://project_223_bot:glpat-4BUf7DzgVe1EM6D46QBy@www.w.hs-karlsruhe.de/gitlab/iras/research-projects/ki5grob/kuka-eki.git
RUN cd /home/"$USER"/dependencies_ws && git clone https://project_437_bot:glpat-T9c6K71xc_2WKJVB7tmA@www.w.hs-karlsruhe.de/gitlab/iras/research-projects/ki5grob/ready2_educate.git

RUN . /opt/ros/$ROS_DISTRO/setup.sh && cd /home/"$USER"/dependencies_ws && colcon build
RUN echo "source /home/$USER/dependencies_ws/install/setup.bash" >> /home/$USER/.bashrc
##############################################################################
##                                 User Dependecies                         ##
##############################################################################


##############################################################################
##                                 Build ROS and run                        ##
##############################################################################
USER $USER 
RUN mkdir -p /home/"$USER"/ros_ws/src
RUN cd /home/"$USER"/ros_ws && colcon build
RUN echo "source /home/$USER/ros_ws/install/setup.bash" >> /home/$USER/.bashrc

WORKDIR /home/$USER/ros_ws

CMD /bin/bash
