#!/bin/sh
uid=$(eval "id -u")
gid=$(eval "id -g")
docker build --build-arg UID="$uid" --build-arg GID="$gid" --build-arg DOMAIN_ID=0 -t llm_docker .

SRC_CONTAINER=/home/robot/ros_ws/src
SRC_HOST=./src

SRC_CONTAINER_2=/home/robot/ros_ws/src/object_detector_tensorflow_interfaces
SRC_HOST_2=./src/object_detector_tensorflow_interfaces

docker run \
    -it \
    --cpus=4 \
    --memory=8g \
    --name llm_docker \
    --privileged \
    --rm \
    -e DISPLAY=$DISPLAY \
    --volume=/dev:/dev \
    --volume=$SRC_HOST:$SRC_CONTAINER:rw \
    --volume $SRC_HOST_2:$SRC_CONTAINER_2:rw \
    --network=host \
    llm_docker

    #      
