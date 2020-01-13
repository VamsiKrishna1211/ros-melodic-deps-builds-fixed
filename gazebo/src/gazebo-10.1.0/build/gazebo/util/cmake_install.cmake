# Install script for directory: /home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/util

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
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgazebo_util.so.10.1.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgazebo_util.so.10"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/util/libgazebo_util.so.10.1.0"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/util/libgazebo_util.so.10"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgazebo_util.so.10.1.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgazebo_util.so.10"
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
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgazebo_util.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgazebo_util.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgazebo_util.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/util/libgazebo_util.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgazebo_util.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgazebo_util.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgazebo_util.so"
         OLD_RPATH "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/test:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/transport:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/msgs:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/common:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgazebo_util.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xheadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gazebo-10/gazebo/util" TYPE FILE FILES
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/util/Diagnostics.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/util/IgnMsgSdf.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/util/IntrospectionClient.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/util/IntrospectionManager.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/util/LogPlay.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/util/LogRecord.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/util/OpenAL.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/util/UtilTypes.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/util/system.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/util/util.hh"
    )
endif()

