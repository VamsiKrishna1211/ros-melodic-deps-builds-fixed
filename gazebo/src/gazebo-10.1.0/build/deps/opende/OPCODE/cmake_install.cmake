# Install script for directory: /home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/deps/opende/OPCODE

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
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgazebo_opcode.so.10.1.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgazebo_opcode.so.10"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/OPCODE/libgazebo_opcode.so.10.1.0"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/OPCODE/libgazebo_opcode.so.10"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgazebo_opcode.so.10.1.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgazebo_opcode.so.10"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/usr/bin/strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xshlibx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgazebo_opcode.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgazebo_opcode.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgazebo_opcode.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/OPCODE/libgazebo_opcode.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgazebo_opcode.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgazebo_opcode.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgazebo_opcode.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xheadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gazebo-10/gazebo/opcode" TYPE FILE FILES
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/deps/opende/OPCODE/OPC_AABBCollider.h"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/deps/opende/OPCODE/OPC_AABBTree.h"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/deps/opende/OPCODE/OPC_BaseModel.h"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/deps/opende/OPCODE/OPC_BoxBoxOverlap.h"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/deps/opende/OPCODE/OPC_Collider.h"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/deps/opende/OPCODE/OPC_Common.h"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/deps/opende/OPCODE/OPC_HybridModel.h"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/deps/opende/OPCODE/OPC_IceHook.h"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/deps/opende/OPCODE/OPC_LSSAABBOverlap.h"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/deps/opende/OPCODE/OPC_LSSCollider.h"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/deps/opende/OPCODE/OPC_LSSTriOverlap.h"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/deps/opende/OPCODE/OPC_MeshInterface.h"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/deps/opende/OPCODE/OPC_Model.h"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/deps/opende/OPCODE/OPC_OBBCollider.h"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/deps/opende/OPCODE/Opcode.h"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/deps/opende/OPCODE/OPC_OptimizedTree.h"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/deps/opende/OPCODE/OPC_Picking.h"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/deps/opende/OPCODE/OPC_PlanesAABBOverlap.h"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/deps/opende/OPCODE/OPC_PlanesCollider.h"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/deps/opende/OPCODE/OPC_PlanesTriOverlap.h"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/deps/opende/OPCODE/OPC_RayAABBOverlap.h"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/deps/opende/OPCODE/OPC_RayCollider.h"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/deps/opende/OPCODE/OPC_RayTriOverlap.h"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/deps/opende/OPCODE/OPC_Settings.h"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/deps/opende/OPCODE/OPC_SphereAABBOverlap.h"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/deps/opende/OPCODE/OPC_SphereCollider.h"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/deps/opende/OPCODE/OPC_SphereTriOverlap.h"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/deps/opende/OPCODE/OPC_TreeBuilders.h"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/deps/opende/OPCODE/OPC_TreeCollider.h"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/deps/opende/OPCODE/OPC_TriBoxOverlap.h"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/deps/opende/OPCODE/OPC_TriTriOverlap.h"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/deps/opende/OPCODE/OPC_VolumeCollider.h"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/deps/opende/OPCODE/Stdafx.h"
    )
endif()

