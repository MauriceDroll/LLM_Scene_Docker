##############################################################################
##                                 Base Image                               ##
##############################################################################
FROM hkairas/ros-kuka-eki:humble

##############################################################################
##                                  User                                    ##
##############################################################################
ARG USER=robot
ARG PASSWORD=robot
ARG UID=1000
ARG GID=1000
ARG DOMAIN_ID=66
ENV UID=${UID}
ENV GID=${GID}
ENV USER=${USER}
RUN groupadd -g "$GID" "$USER"  && \
    useradd -m -u "$UID" -g "$GID" --shell $(which bash) "$USER" -G sudo && \
    echo "$USER:$PASSWORD" | chpasswd && \
    echo "%sudo ALL=(ALL) NOPASSWD: ALL" > /etc/sudoers.d/sudogrp

RUN echo "export ROS_DOMAIN_ID=66" >> /etc/bash.bashrc

RUN sudo apt-get update && \
    sudo apt-get install -y python3-pip nano 


RUN curl https://ollama.ai/install.sh | sh

RUN pip3 install ollama
RUN pip3 install pydantic lm-format-enforcer 
RUN pip install ollama flask





USER $USER 
RUN rosdep update

RUN mkdir -p /home/$USER/ros_ws/src


WORKDIR /home/$USER/ros_ws
RUN colcon build --symlink-install

RUN git clone -b humble https://github.com/eshan-savla/object_detector_tensorflow.git
RUN mv ./object_detector_tensorflow/ros/object_detector_tensorflow_interfaces . && \
    rm -rf ./object_detector_tensorflow
    
COPY --chown=$USER:$USER --chmod=0755 ./startOllama.sh /home/$USER/ros_ws/startOllama.sh
RUN srv="ollama serve" && $srv& sleep 5 && ollama pull mistral

CMD ["/bin/bash"]

#ENTRYPOINT [ "cd src ls" ]
ENTRYPOINT [ "./startOllama.sh" ]


