# Install script for directory: /home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/gui/imagesets

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
   "/usr/share/gazebo-10/media/gui/imagesets/Imageset.xsd;/usr/share/gazebo-10/media/gui/imagesets/DriveIcons.imageset;/usr/share/gazebo-10/media/gui/imagesets/DriveIcons.png;/usr/share/gazebo-10/media/gui/imagesets/FairChar.imageset;/usr/share/gazebo-10/media/gui/imagesets/FairChar.tga;/usr/share/gazebo-10/media/gui/imagesets/GPN-2000-001437.tga;/usr/share/gazebo-10/media/gui/imagesets/logo.png;/usr/share/gazebo-10/media/gui/imagesets/OgreTray.imageset;/usr/share/gazebo-10/media/gui/imagesets/OgreTrayImages.png;/usr/share/gazebo-10/media/gui/imagesets/ReadMe.txt;/usr/share/gazebo-10/media/gui/imagesets/TaharezLook.imageset;/usr/share/gazebo-10/media/gui/imagesets/TaharezLook.tga;/usr/share/gazebo-10/media/gui/imagesets/Vanilla.imageset;/usr/share/gazebo-10/media/gui/imagesets/vanilla.tga;/usr/share/gazebo-10/media/gui/imagesets/WindowsLook.imageset;/usr/share/gazebo-10/media/gui/imagesets/WindowsLook.tga;/usr/share/gazebo-10/media/gui/imagesets/gazebo.tga;/usr/share/gazebo-10/media/gui/imagesets/Gazebo.imageset")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/share/gazebo-10/media/gui/imagesets" TYPE FILE FILES
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/gui/imagesets/Imageset.xsd"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/gui/imagesets/DriveIcons.imageset"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/gui/imagesets/DriveIcons.png"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/gui/imagesets/FairChar.imageset"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/gui/imagesets/FairChar.tga"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/gui/imagesets/GPN-2000-001437.tga"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/gui/imagesets/logo.png"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/gui/imagesets/OgreTray.imageset"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/gui/imagesets/OgreTrayImages.png"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/gui/imagesets/ReadMe.txt"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/gui/imagesets/TaharezLook.imageset"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/gui/imagesets/TaharezLook.tga"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/gui/imagesets/Vanilla.imageset"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/gui/imagesets/vanilla.tga"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/gui/imagesets/WindowsLook.imageset"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/gui/imagesets/WindowsLook.tga"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/gui/imagesets/gazebo.tga"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/gui/imagesets/Gazebo.imageset"
    )
endif()

