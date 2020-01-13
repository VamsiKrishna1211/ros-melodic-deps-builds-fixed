# Install script for directory: /home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/deps/opende

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
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgazebo_ode.so.10.1.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgazebo_ode.so.10"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/libgazebo_ode.so.10.1.0"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/libgazebo_ode.so.10"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgazebo_ode.so.10.1.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgazebo_ode.so.10"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHANGE
           FILE "${file}"
           OLD_RPATH "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/test:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/OPCODE:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/GIMPACT:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/ou:"
           NEW_RPATH "")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/usr/bin/strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xshlibx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgazebo_ode.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgazebo_ode.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgazebo_ode.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/libgazebo_ode.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgazebo_ode.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgazebo_ode.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgazebo_ode.so"
         OLD_RPATH "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/test:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/OPCODE:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/GIMPACT:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/ou:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgazebo_ode.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xheadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gazebo-10/gazebo/ode" TYPE FILE FILES
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/deps/opende/include/gazebo/ode/collision.h"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/deps/opende/include/gazebo/ode/collision_space.h"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/deps/opende/include/gazebo/ode/collision_trimesh.h"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/deps/opende/include/gazebo/ode/common.h"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/deps/opende/include/gazebo/ode/compatibility.h"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/deps/opende/include/gazebo/ode/contact.h"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/deps/opende/include/gazebo/ode/error.h"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/deps/opende/include/gazebo/ode/export-dif.h"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/deps/opende/include/gazebo/ode/h5dump.h"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/deps/opende/include/gazebo/ode/mass.h"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/deps/opende/include/gazebo/ode/matrix.h"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/deps/opende/include/gazebo/ode/memory.h"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/deps/opende/include/gazebo/ode/misc.h"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/deps/opende/include/gazebo/ode/objects.h"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/deps/opende/include/gazebo/ode/odeconfig.h"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/deps/opende/include/gazebo/ode/odecpp_collision.h"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/deps/opende/include/gazebo/ode/odecpp.h"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/deps/opende/include/gazebo/ode/ode.h"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/deps/opende/include/gazebo/ode/odeinit.h"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/deps/opende/include/gazebo/ode/odemath.h"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/deps/opende/include/gazebo/ode/odemath_legacy.h"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/deps/opende/include/gazebo/ode/rotation.h"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/deps/opende/include/gazebo/ode/timer.h"
    )
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/OPCODE/cmake_install.cmake")
  include("/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/GIMPACT/cmake_install.cmake")
  include("/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/ou/cmake_install.cmake")

endif()

