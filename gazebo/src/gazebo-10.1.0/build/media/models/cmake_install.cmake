# Install script for directory: /home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/models

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "0")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/share/gazebo-10/media/models/moonwalk.dae;/usr/share/gazebo-10/media/models/run.dae;/usr/share/gazebo-10/media/models/sit_down.dae;/usr/share/gazebo-10/media/models/sitting.dae;/usr/share/gazebo-10/media/models/stand_up.dae;/usr/share/gazebo-10/media/models/stand.dae;/usr/share/gazebo-10/media/models/sub_16.dae;/usr/share/gazebo-10/media/models/talk_a.dae;/usr/share/gazebo-10/media/models/talk_b.dae;/usr/share/gazebo-10/media/models/walk.dae")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/share/gazebo-10/media/models" TYPE FILE FILES
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/models/moonwalk.dae"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/models/run.dae"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/models/sit_down.dae"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/models/sitting.dae"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/models/stand_up.dae"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/models/stand.dae"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/models/sub_16.dae"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/models/talk_a.dae"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/models/talk_b.dae"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/models/walk.dae"
    )
endif()

