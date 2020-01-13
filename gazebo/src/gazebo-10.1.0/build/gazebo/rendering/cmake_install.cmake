# Install script for directory: /home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/rendering

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

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xshlibx" OR NOT CMAKE_INSTALL_COMPONENT)
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgazebo_rendering.so.10.1.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgazebo_rendering.so.10"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/rendering/libgazebo_rendering.so.10.1.0"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/rendering/libgazebo_rendering.so.10"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgazebo_rendering.so.10.1.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgazebo_rendering.so.10"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHANGE
           FILE "${file}"
           OLD_RPATH "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/test:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/transport:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/msgs:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/common:"
           NEW_RPATH "")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/usr/bin/strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xshlibx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgazebo_rendering.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgazebo_rendering.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgazebo_rendering.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/rendering/libgazebo_rendering.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgazebo_rendering.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgazebo_rendering.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgazebo_rendering.so"
         OLD_RPATH "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/test:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/transport:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/msgs:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/common:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgazebo_rendering.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xheadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gazebo-10/gazebo/rendering" TYPE FILE FILES
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/rendering/ApplyWrenchVisual.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/rendering/ArrowVisual.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/rendering/AxisVisual.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/rendering/Camera.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/rendering/CameraVisual.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/rendering/COMVisual.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/rendering/ContactVisual.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/rendering/Conversions.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/rendering/CustomPSSMShadowCameraSetup.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/rendering/DepthCamera.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/rendering/Distortion.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/rendering/DynamicLines.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/rendering/DynamicRenderable.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/rendering/FPSViewController.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/rendering/GpuLaser.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/rendering/GpuLaserDataIterator.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/rendering/GpuLaserDataIteratorImpl.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/rendering/Grid.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/rendering/Heightmap.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/rendering/InertiaVisual.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/rendering/JointVisual.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/rendering/LaserVisual.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/rendering/LensFlare.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/rendering/LinkFrameVisual.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/rendering/LogicalCameraVisual.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/rendering/SonarVisual.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/rendering/Light.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/rendering/Material.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/rendering/MovableText.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/rendering/OrbitViewController.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/rendering/OriginVisual.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/rendering/OrthoViewController.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/rendering/Projector.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/rendering/RayQuery.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/rendering/RenderEngine.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/rendering/RenderEvents.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/rendering/RenderingIface.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/rendering/RenderTypes.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/rendering/Road2d.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/rendering/RFIDVisual.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/rendering/RFIDTagVisual.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/rendering/RTShaderSystem.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/rendering/Scene.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/rendering/SelectionObj.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/rendering/TransmitterVisual.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/rendering/UserCamera.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/rendering/VideoVisual.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/rendering/ViewController.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/rendering/Visual.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/rendering/WideAngleCamera.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/rendering/WireBox.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/rendering/WindowManager.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/rendering/WrenchVisual.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/rendering/ogre_gazebo.h"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/rendering/rendering.hh"
    )
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/rendering/deferred_shading/cmake_install.cmake")
  include("/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/rendering/selection_buffer/cmake_install.cmake")
  include("/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/rendering/skyx/cmake_install.cmake")

endif()

