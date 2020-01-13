# Install script for directory: /home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/programs/deferred_rendering

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
   "/usr/share/gazebo-10/media/materials/programs/deferred_rendering/ssao_blurx.glsl;/usr/share/gazebo-10/media/materials/programs/deferred_rendering/ssao_blury.glsl;/usr/share/gazebo-10/media/materials/programs/deferred_rendering/ssao_fp.glsl;/usr/share/gazebo-10/media/materials/programs/deferred_rendering/ssao_vp.glsl;/usr/share/gazebo-10/media/materials/programs/deferred_rendering/vpl_fp.glsl;/usr/share/gazebo-10/media/materials/programs/deferred_rendering/vpl_lbuffer_fp.glsl;/usr/share/gazebo-10/media/materials/programs/deferred_rendering/vpl_vp.glsl;/usr/share/gazebo-10/media/materials/programs/deferred_rendering/RSM_vp.glsl;/usr/share/gazebo-10/media/materials/programs/deferred_rendering/RSM_fp.glsl")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/share/gazebo-10/media/materials/programs/deferred_rendering" TYPE FILE FILES
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/programs/deferred_rendering/ssao_blurx.glsl"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/programs/deferred_rendering/ssao_blury.glsl"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/programs/deferred_rendering/ssao_fp.glsl"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/programs/deferred_rendering/ssao_vp.glsl"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/programs/deferred_rendering/vpl_fp.glsl"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/programs/deferred_rendering/vpl_lbuffer_fp.glsl"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/programs/deferred_rendering/vpl_vp.glsl"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/programs/deferred_rendering/RSM_vp.glsl"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/programs/deferred_rendering/RSM_fp.glsl"
    )
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/media/materials/programs/deferred_rendering/deferred_shading/cmake_install.cmake")
  include("/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/media/materials/programs/deferred_rendering/deferred_lighting/cmake_install.cmake")

endif()

