# Install script for directory: /home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/plugins/events

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
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libSimEventsPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libSimEventsPlugin.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libSimEventsPlugin.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/lib/gazebo-10/plugins/libSimEventsPlugin.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/lib/gazebo-10/plugins" TYPE SHARED_LIBRARY FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins/events/libSimEventsPlugin.so")
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libSimEventsPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libSimEventsPlugin.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libSimEventsPlugin.so"
         OLD_RPATH "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/test:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins/events:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/physics:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/util:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/transport:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/msgs:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/common:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/GIMPACT:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/ou:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/OPCODE:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libSimEventsPlugin.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xheadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gazebo-10/gazebo/plugins/events" TYPE FILE FILES
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/plugins/events/EventSource.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/plugins/events/ExistenceEventSource.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/plugins/events/InRegionEventSource.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/plugins/events/JointEventSource.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/plugins/events/OccupiedEventSource.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/plugins/events/Region.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/plugins/events/SimEventsException.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/plugins/events/SimEventsPlugin.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/plugins/events/SimStateEventSource.hh"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libRegionEventBoxPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libRegionEventBoxPlugin.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libRegionEventBoxPlugin.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/lib/gazebo-10/plugins/libRegionEventBoxPlugin.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/lib/gazebo-10/plugins" TYPE SHARED_LIBRARY FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins/events/libRegionEventBoxPlugin.so")
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libRegionEventBoxPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libRegionEventBoxPlugin.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libRegionEventBoxPlugin.so"
         OLD_RPATH "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/test:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins/events:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/physics:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/util:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/transport:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/msgs:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/common:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/GIMPACT:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/ou:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/OPCODE:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libRegionEventBoxPlugin.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xheadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gazebo-10/gazebo/plugins/events" TYPE FILE FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/plugins/events/RegionEventBoxPlugin.hh")
endif()

