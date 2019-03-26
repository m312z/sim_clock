cmake_minimum_required(VERSION 2.8.3)
project(sim_clock)

add_compile_options(-std=c++11)

## Find catkin macros and libraries
find_package(catkin REQUIRED COMPONENTS
  roscpp
  rospy
  std_msgs
  rosgraph_msgs
  std_srvs
  rosplan_knowledge_msgs
)

###################################
## catkin specific configuration ##
###################################

## Declare things to be passed to dependent projects
catkin_package(
  LIBRARIES ${PROJECT_NAME}
  CATKIN_DEPENDS roscpp rospy std_msgs std_srvs rosgraph_msgs rosplan_knowledge_msgs
  DEPENDS
)

###########
## Build ##
###########

## include_directories(include)
include_directories(
  ${catkin_INCLUDE_DIRS}
  include
)

## Declare cpp executables
add_executable(simclock src/SimClock.cpp)
add_dependencies(simclock ${catkin_EXPORTED_TARGETS})
target_link_libraries(simclock ${catkin_LIBRARIES})

#############
## Install ##
#############

install(TARGETS simclock
  ARCHIVE DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
  LIBRARY DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
  RUNTIME DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION}
)
