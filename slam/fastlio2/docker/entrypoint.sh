#!/bin/bash

set -e

export ROS2_INSTALL_PATH="/opt/ros/humble"
export ROS_NAMESPACE="leo05"
export ROS_DOMAIN_ID=0

# Configure RMW
export RWM_IMPLEMENTATION=rwm_fastrtps_cpp
export FASTRTPS_DEFAULT_PROFILES_FILE=/root/config/fastrtps-profile.xml


# setup ros2 environment
# Setup SDK
cd /root/Livox-SDK2/
cd build
cmake .. && make -j
sudo make install


# Build livox ros driver
cd /root/driver/src/livox_ros_driver2/
source "${ROS2_INSTALL_PATH}/setup.bash"
bash build.sh humble
source "/root/driver/install/setup.bash"
export LD_LIBRARY_PATH=${LD_LIBRARY_PATH}:/usr/local/lib


# Build FastLIO2 package
cd /root/ros_ws/
rosdep install --from-paths src --ignore-src -y
colcon build --symlink-install
source "/root/ros_ws/install/setup.bash"


exec "$@"
