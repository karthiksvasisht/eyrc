cmake_minimum_required(VERSION 3.0.2)
project(pkg_ros_iot_bridge)


find_package(catkin REQUIRED COMPONENTS
  actionlib_msgs
  roscpp
  rospy
  std_msgs
)

## Generate actions in the 'action' folder
add_action_files(
  FILES
  msgRosIot.action
)

## Generate messages in the 'msg' folder
add_message_files(
  FILES
  msgMqttSub.msg
)

## Generate added messages and services with any dependencies listed here
generate_messages(
  DEPENDENCIES
  actionlib_msgs
  std_msgs
)

catkin_package(
#  INCLUDE_DIRS include
#  LIBRARIES pkg_ros_iot_bridge
 CATKIN_DEPENDS actionlib_msgs roscpp rospy std_msgs
#  DEPENDS system_lib
)

###########
## Build ##
###########

## Specify additional locations of header files
## Your package locations should be listed before other locations
include_directories(
# include
  ${catkin_INCLUDE_DIRS}
)

