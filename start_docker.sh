#!/bin/sh
uid=$(eval "id -u")
gid=$(eval "id -g")
docker build --build-arg UID="$uid" --build-arg GID="$gid" --build-arg DOMAIN_ID=0 -t llm_docker .

SRC_CONTAINER=/home/robot/ros_ws/src
SRC_HOST=./src

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
    --network=host \
    llm_docker

    #
