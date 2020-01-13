# Install script for directory: /home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/gui/looknfeel

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
   "/usr/share/gazebo-10/media/gui/looknfeel/Falagard.xsd;/usr/share/gazebo-10/media/gui/looknfeel/OgreTray.looknfeel;/usr/share/gazebo-10/media/gui/looknfeel/TaharezLook.looknfeel;/usr/share/gazebo-10/media/gui/looknfeel/Vanilla.looknfeel;/usr/share/gazebo-10/media/gui/looknfeel/WindowsLook.looknfeel;/usr/share/gazebo-10/media/gui/looknfeel/Gazebo.looknfeel")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/share/gazebo-10/media/gui/looknfeel" TYPE FILE FILES
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/gui/looknfeel/Falagard.xsd"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/gui/looknfeel/OgreTray.looknfeel"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/gui/looknfeel/TaharezLook.looknfeel"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/gui/looknfeel/Vanilla.looknfeel"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/gui/looknfeel/WindowsLook.looknfeel"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/gui/looknfeel/Gazebo.looknfeel"
    )
endif()

