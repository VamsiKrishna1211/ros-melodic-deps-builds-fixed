# Install script for directory: /home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/skyx

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
   "/usr/share/gazebo-10/media/skyx/CloudsNormal.png;/usr/share/gazebo-10/media/skyx/Clouds.png;/usr/share/gazebo-10/media/skyx/CloudsTile.png;/usr/share/gazebo-10/media/skyx/CMakeLists.txt;/usr/share/gazebo-10/media/skyx/Noise.jpg;/usr/share/gazebo-10/media/skyx/SkyX_Clouds.fragment;/usr/share/gazebo-10/media/skyx/SkyX_Clouds.hlsl;/usr/share/gazebo-10/media/skyx/SkyX_Clouds.vertex;/usr/share/gazebo-10/media/skyx/SkyX_Ground.fragment;/usr/share/gazebo-10/media/skyx/SkyX_Ground.hlsl;/usr/share/gazebo-10/media/skyx/SkyX_Ground.vertex;/usr/share/gazebo-10/media/skyx/SkyX_Lightning.fragment;/usr/share/gazebo-10/media/skyx/SkyX_Lightning.hlsl;/usr/share/gazebo-10/media/skyx/SkyX_Lightning.vertex;/usr/share/gazebo-10/media/skyx/SkyX.material;/usr/share/gazebo-10/media/skyx/SkyX_Moon.fragment;/usr/share/gazebo-10/media/skyx/SkyX_MoonHalo.png;/usr/share/gazebo-10/media/skyx/SkyX_Moon.hlsl;/usr/share/gazebo-10/media/skyx/SkyX_Moon.png;/usr/share/gazebo-10/media/skyx/SkyX_Moon.vertex;/usr/share/gazebo-10/media/skyx/SkyX_Skydome.fragment;/usr/share/gazebo-10/media/skyx/SkyX_Skydome.hlsl;/usr/share/gazebo-10/media/skyx/SkyX_Skydome.vertex;/usr/share/gazebo-10/media/skyx/SkyX_Starfield.png;/usr/share/gazebo-10/media/skyx/SkyX_VolClouds.fragment;/usr/share/gazebo-10/media/skyx/SkyX_VolClouds.hlsl;/usr/share/gazebo-10/media/skyx/SkyX_VolClouds_Lightning.fragment;/usr/share/gazebo-10/media/skyx/SkyX_VolClouds_Lightning.hlsl;/usr/share/gazebo-10/media/skyx/SkyX_VolClouds_Lightning.vertex;/usr/share/gazebo-10/media/skyx/SkyX_VolClouds.vertex")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/share/gazebo-10/media/skyx" TYPE FILE FILES
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/skyx/CloudsNormal.png"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/skyx/Clouds.png"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/skyx/CloudsTile.png"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/skyx/CMakeLists.txt"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/skyx/Noise.jpg"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/skyx/SkyX_Clouds.fragment"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/skyx/SkyX_Clouds.hlsl"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/skyx/SkyX_Clouds.vertex"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/skyx/SkyX_Ground.fragment"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/skyx/SkyX_Ground.hlsl"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/skyx/SkyX_Ground.vertex"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/skyx/SkyX_Lightning.fragment"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/skyx/SkyX_Lightning.hlsl"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/skyx/SkyX_Lightning.vertex"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/skyx/SkyX.material"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/skyx/SkyX_Moon.fragment"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/skyx/SkyX_MoonHalo.png"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/skyx/SkyX_Moon.hlsl"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/skyx/SkyX_Moon.png"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/skyx/SkyX_Moon.vertex"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/skyx/SkyX_Skydome.fragment"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/skyx/SkyX_Skydome.hlsl"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/skyx/SkyX_Skydome.vertex"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/skyx/SkyX_Starfield.png"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/skyx/SkyX_VolClouds.fragment"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/skyx/SkyX_VolClouds.hlsl"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/skyx/SkyX_VolClouds_Lightning.fragment"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/skyx/SkyX_VolClouds_Lightning.hlsl"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/skyx/SkyX_VolClouds_Lightning.vertex"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/skyx/SkyX_VolClouds.vertex"
    )
endif()

