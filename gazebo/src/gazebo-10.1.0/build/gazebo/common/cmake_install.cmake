# Install script for directory: /home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/common

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
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgazebo_common.so.10.1.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgazebo_common.so.10"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/common/libgazebo_common.so.10.1.0"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/common/libgazebo_common.so.10"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgazebo_common.so.10.1.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgazebo_common.so.10"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHANGE
           FILE "${file}"
           OLD_RPATH "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/test:"
           NEW_RPATH "")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/usr/bin/strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xshlibx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgazebo_common.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgazebo_common.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgazebo_common.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/common/libgazebo_common.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgazebo_common.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgazebo_common.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgazebo_common.so"
         OLD_RPATH "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/test:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgazebo_common.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xheadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gazebo-10/gazebo/common" TYPE FILE FILES
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/common/Animation.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/common/Assert.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/common/AudioDecoder.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/common/Battery.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/common/Base64.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/common/BVHLoader.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/common/ColladaLoader.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/common/CommonIface.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/common/CommonTypes.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/common/Console.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/common/Dem.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/common/EnumIface.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/common/Event.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/common/Events.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/common/Exception.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/common/MovingWindowFilter.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/common/HeightmapData.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/common/Image.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/common/ImageHeightmap.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/common/KeyEvent.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/common/KeyFrame.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/common/Material.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/common/MaterialDensity.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/common/Mesh.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/common/MeshLoader.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/common/MeshManager.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/common/ModelDatabase.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/common/MouseEvent.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/common/OBJLoader.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/common/PID.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/common/Plugin.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/common/SemanticVersion.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/common/SkeletonAnimation.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/common/Skeleton.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/common/SingletonT.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/common/SphericalCoordinates.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/common/STLLoader.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/common/SystemPaths.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/common/SVGLoader.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/common/Time.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/common/Timer.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/common/UpdateInfo.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/common/URI.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/common/Video.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/common/VideoEncoder.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/common/WeakBind.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/common/ffmpeg_inc.h"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/common/GTSMeshUtils.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/common/MeshCSG.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/common/common.hh"
    )
endif()

