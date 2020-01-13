# Install script for directory: /home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/plugins

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
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libActorPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libActorPlugin.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libActorPlugin.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/lib/gazebo-10/plugins/libActorPlugin.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/lib/gazebo-10/plugins" TYPE SHARED_LIBRARY FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins/libActorPlugin.so")
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libActorPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libActorPlugin.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libActorPlugin.so"
         OLD_RPATH "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/test:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/sensors:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/physics:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/util:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/GIMPACT:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/ou:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/OPCODE:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/rendering:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/transport:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/msgs:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/common:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libActorPlugin.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xheadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gazebo-10/gazebo/plugins" TYPE FILE FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/plugins/ActorPlugin.hh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libActuatorPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libActuatorPlugin.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libActuatorPlugin.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/lib/gazebo-10/plugins/libActuatorPlugin.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/lib/gazebo-10/plugins" TYPE SHARED_LIBRARY FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins/libActuatorPlugin.so")
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libActuatorPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libActuatorPlugin.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libActuatorPlugin.so"
         OLD_RPATH "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/test:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/sensors:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/physics:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/util:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/GIMPACT:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/ou:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/OPCODE:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/rendering:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/transport:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/msgs:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/common:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libActuatorPlugin.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xheadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gazebo-10/gazebo/plugins" TYPE FILE FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/plugins/ActuatorPlugin.hh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libAmbientOcclusionVisualPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libAmbientOcclusionVisualPlugin.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libAmbientOcclusionVisualPlugin.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/lib/gazebo-10/plugins/libAmbientOcclusionVisualPlugin.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/lib/gazebo-10/plugins" TYPE SHARED_LIBRARY FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins/libAmbientOcclusionVisualPlugin.so")
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libAmbientOcclusionVisualPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libAmbientOcclusionVisualPlugin.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libAmbientOcclusionVisualPlugin.so"
         OLD_RPATH "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/test:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/sensors:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/physics:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/util:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/GIMPACT:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/ou:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/OPCODE:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/rendering:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/transport:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/msgs:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/common:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libAmbientOcclusionVisualPlugin.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xheadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gazebo-10/gazebo/plugins" TYPE FILE FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/plugins/AmbientOcclusionVisualPlugin.hh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libArduCopterPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libArduCopterPlugin.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libArduCopterPlugin.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/lib/gazebo-10/plugins/libArduCopterPlugin.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/lib/gazebo-10/plugins" TYPE SHARED_LIBRARY FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins/libArduCopterPlugin.so")
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libArduCopterPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libArduCopterPlugin.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libArduCopterPlugin.so"
         OLD_RPATH "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/test:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/sensors:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/physics:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/util:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/GIMPACT:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/ou:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/OPCODE:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/rendering:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/transport:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/msgs:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/common:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libArduCopterPlugin.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xheadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gazebo-10/gazebo/plugins" TYPE FILE FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/plugins/ArduCopterPlugin.hh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libArrangePlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libArrangePlugin.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libArrangePlugin.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/lib/gazebo-10/plugins/libArrangePlugin.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/lib/gazebo-10/plugins" TYPE SHARED_LIBRARY FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins/libArrangePlugin.so")
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libArrangePlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libArrangePlugin.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libArrangePlugin.so"
         OLD_RPATH "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/test:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/sensors:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/physics:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/util:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/GIMPACT:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/ou:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/OPCODE:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/rendering:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/transport:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/msgs:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/common:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libArrangePlugin.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xheadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gazebo-10/gazebo/plugins" TYPE FILE FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/plugins/ArrangePlugin.hh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libAttachLightPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libAttachLightPlugin.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libAttachLightPlugin.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/lib/gazebo-10/plugins/libAttachLightPlugin.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/lib/gazebo-10/plugins" TYPE SHARED_LIBRARY FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins/libAttachLightPlugin.so")
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libAttachLightPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libAttachLightPlugin.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libAttachLightPlugin.so"
         OLD_RPATH "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/test:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/sensors:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/physics:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/util:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/GIMPACT:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/ou:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/OPCODE:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/rendering:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/transport:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/msgs:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/common:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libAttachLightPlugin.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xheadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gazebo-10/gazebo/plugins" TYPE FILE FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/plugins/AttachLightPlugin.hh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libBlinkVisualPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libBlinkVisualPlugin.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libBlinkVisualPlugin.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/lib/gazebo-10/plugins/libBlinkVisualPlugin.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/lib/gazebo-10/plugins" TYPE SHARED_LIBRARY FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins/libBlinkVisualPlugin.so")
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libBlinkVisualPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libBlinkVisualPlugin.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libBlinkVisualPlugin.so"
         OLD_RPATH "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/test:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/sensors:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/physics:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/util:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/GIMPACT:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/ou:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/OPCODE:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/rendering:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/transport:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/msgs:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/common:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libBlinkVisualPlugin.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xheadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gazebo-10/gazebo/plugins" TYPE FILE FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/plugins/BlinkVisualPlugin.hh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libBreakableJointPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libBreakableJointPlugin.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libBreakableJointPlugin.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/lib/gazebo-10/plugins/libBreakableJointPlugin.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/lib/gazebo-10/plugins" TYPE SHARED_LIBRARY FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins/libBreakableJointPlugin.so")
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libBreakableJointPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libBreakableJointPlugin.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libBreakableJointPlugin.so"
         OLD_RPATH "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/test:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/sensors:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/physics:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/util:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/GIMPACT:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/ou:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/OPCODE:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/rendering:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/transport:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/msgs:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/common:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libBreakableJointPlugin.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xheadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gazebo-10/gazebo/plugins" TYPE FILE FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/plugins/BreakableJointPlugin.hh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libBuoyancyPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libBuoyancyPlugin.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libBuoyancyPlugin.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/lib/gazebo-10/plugins/libBuoyancyPlugin.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/lib/gazebo-10/plugins" TYPE SHARED_LIBRARY FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins/libBuoyancyPlugin.so")
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libBuoyancyPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libBuoyancyPlugin.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libBuoyancyPlugin.so"
         OLD_RPATH "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/test:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/sensors:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/physics:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/util:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/GIMPACT:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/ou:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/OPCODE:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/rendering:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/transport:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/msgs:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/common:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libBuoyancyPlugin.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xheadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gazebo-10/gazebo/plugins" TYPE FILE FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/plugins/BuoyancyPlugin.hh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libCameraPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libCameraPlugin.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libCameraPlugin.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/lib/gazebo-10/plugins/libCameraPlugin.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/lib/gazebo-10/plugins" TYPE SHARED_LIBRARY FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins/libCameraPlugin.so")
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libCameraPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libCameraPlugin.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libCameraPlugin.so"
         OLD_RPATH "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/test:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/sensors:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/physics:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/util:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/GIMPACT:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/ou:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/OPCODE:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/rendering:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/transport:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/msgs:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/common:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libCameraPlugin.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xheadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gazebo-10/gazebo/plugins" TYPE FILE FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/plugins/CameraPlugin.hh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libCartDemoPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libCartDemoPlugin.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libCartDemoPlugin.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/lib/gazebo-10/plugins/libCartDemoPlugin.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/lib/gazebo-10/plugins" TYPE SHARED_LIBRARY FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins/libCartDemoPlugin.so")
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libCartDemoPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libCartDemoPlugin.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libCartDemoPlugin.so"
         OLD_RPATH "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/test:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/sensors:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/physics:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/util:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/GIMPACT:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/ou:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/OPCODE:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/rendering:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/transport:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/msgs:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/common:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libCartDemoPlugin.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xheadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gazebo-10/gazebo/plugins" TYPE FILE FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/plugins/CartDemoPlugin.hh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libCessnaPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libCessnaPlugin.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libCessnaPlugin.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/lib/gazebo-10/plugins/libCessnaPlugin.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/lib/gazebo-10/plugins" TYPE SHARED_LIBRARY FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins/libCessnaPlugin.so")
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libCessnaPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libCessnaPlugin.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libCessnaPlugin.so"
         OLD_RPATH "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/test:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/sensors:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/physics:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/util:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/GIMPACT:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/ou:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/OPCODE:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/rendering:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/transport:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/msgs:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/common:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libCessnaPlugin.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xheadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gazebo-10/gazebo/plugins" TYPE FILE FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/plugins/CessnaPlugin.hh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libContactPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libContactPlugin.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libContactPlugin.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/lib/gazebo-10/plugins/libContactPlugin.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/lib/gazebo-10/plugins" TYPE SHARED_LIBRARY FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins/libContactPlugin.so")
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libContactPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libContactPlugin.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libContactPlugin.so"
         OLD_RPATH "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/test:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/sensors:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/physics:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/util:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/GIMPACT:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/ou:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/OPCODE:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/rendering:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/transport:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/msgs:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/common:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libContactPlugin.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xheadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gazebo-10/gazebo/plugins" TYPE FILE FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/plugins/ContactPlugin.hh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libContainPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libContainPlugin.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libContainPlugin.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/lib/gazebo-10/plugins/libContainPlugin.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/lib/gazebo-10/plugins" TYPE SHARED_LIBRARY FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins/libContainPlugin.so")
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libContainPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libContainPlugin.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libContainPlugin.so"
         OLD_RPATH "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/test:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/sensors:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/physics:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/util:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/GIMPACT:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/ou:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/OPCODE:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/rendering:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/transport:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/msgs:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/common:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libContainPlugin.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xheadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gazebo-10/gazebo/plugins" TYPE FILE FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/plugins/ContainPlugin.hh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libDepthCameraPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libDepthCameraPlugin.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libDepthCameraPlugin.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/lib/gazebo-10/plugins/libDepthCameraPlugin.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/lib/gazebo-10/plugins" TYPE SHARED_LIBRARY FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins/libDepthCameraPlugin.so")
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libDepthCameraPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libDepthCameraPlugin.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libDepthCameraPlugin.so"
         OLD_RPATH "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/test:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/sensors:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/physics:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/util:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/GIMPACT:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/ou:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/OPCODE:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/rendering:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/transport:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/msgs:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/common:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libDepthCameraPlugin.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xheadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gazebo-10/gazebo/plugins" TYPE FILE FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/plugins/DepthCameraPlugin.hh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libDiffDrivePlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libDiffDrivePlugin.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libDiffDrivePlugin.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/lib/gazebo-10/plugins/libDiffDrivePlugin.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/lib/gazebo-10/plugins" TYPE SHARED_LIBRARY FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins/libDiffDrivePlugin.so")
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libDiffDrivePlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libDiffDrivePlugin.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libDiffDrivePlugin.so"
         OLD_RPATH "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/test:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/sensors:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/physics:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/util:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/GIMPACT:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/ou:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/OPCODE:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/rendering:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/transport:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/msgs:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/common:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libDiffDrivePlugin.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xheadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gazebo-10/gazebo/plugins" TYPE FILE FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/plugins/DiffDrivePlugin.hh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libFiducialCameraPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libFiducialCameraPlugin.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libFiducialCameraPlugin.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/lib/gazebo-10/plugins/libFiducialCameraPlugin.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/lib/gazebo-10/plugins" TYPE SHARED_LIBRARY FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins/libFiducialCameraPlugin.so")
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libFiducialCameraPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libFiducialCameraPlugin.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libFiducialCameraPlugin.so"
         OLD_RPATH "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/test:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/sensors:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/physics:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/util:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/GIMPACT:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/ou:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/OPCODE:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/rendering:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/transport:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/msgs:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/common:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libFiducialCameraPlugin.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xheadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gazebo-10/gazebo/plugins" TYPE FILE FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/plugins/FiducialCameraPlugin.hh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libFlashLightPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libFlashLightPlugin.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libFlashLightPlugin.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/lib/gazebo-10/plugins/libFlashLightPlugin.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/lib/gazebo-10/plugins" TYPE SHARED_LIBRARY FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins/libFlashLightPlugin.so")
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libFlashLightPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libFlashLightPlugin.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libFlashLightPlugin.so"
         OLD_RPATH "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/test:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/sensors:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/physics:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/util:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/GIMPACT:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/ou:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/OPCODE:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/rendering:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/transport:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/msgs:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/common:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libFlashLightPlugin.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xheadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gazebo-10/gazebo/plugins" TYPE FILE FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/plugins/FlashLightPlugin.hh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libFollowerPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libFollowerPlugin.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libFollowerPlugin.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/lib/gazebo-10/plugins/libFollowerPlugin.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/lib/gazebo-10/plugins" TYPE SHARED_LIBRARY FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins/libFollowerPlugin.so")
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libFollowerPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libFollowerPlugin.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libFollowerPlugin.so"
         OLD_RPATH "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/test:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/sensors:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/physics:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/util:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/GIMPACT:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/ou:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/OPCODE:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/rendering:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/transport:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/msgs:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/common:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libFollowerPlugin.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xheadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gazebo-10/gazebo/plugins" TYPE FILE FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/plugins/FollowerPlugin.hh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libForceTorquePlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libForceTorquePlugin.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libForceTorquePlugin.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/lib/gazebo-10/plugins/libForceTorquePlugin.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/lib/gazebo-10/plugins" TYPE SHARED_LIBRARY FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins/libForceTorquePlugin.so")
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libForceTorquePlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libForceTorquePlugin.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libForceTorquePlugin.so"
         OLD_RPATH "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/test:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/sensors:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/physics:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/util:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/GIMPACT:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/ou:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/OPCODE:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/rendering:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/transport:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/msgs:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/common:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libForceTorquePlugin.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xheadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gazebo-10/gazebo/plugins" TYPE FILE FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/plugins/ForceTorquePlugin.hh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libGimbalSmall2dPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libGimbalSmall2dPlugin.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libGimbalSmall2dPlugin.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/lib/gazebo-10/plugins/libGimbalSmall2dPlugin.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/lib/gazebo-10/plugins" TYPE SHARED_LIBRARY FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins/libGimbalSmall2dPlugin.so")
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libGimbalSmall2dPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libGimbalSmall2dPlugin.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libGimbalSmall2dPlugin.so"
         OLD_RPATH "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/test:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/sensors:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/physics:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/util:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/GIMPACT:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/ou:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/OPCODE:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/rendering:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/transport:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/msgs:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/common:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libGimbalSmall2dPlugin.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xheadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gazebo-10/gazebo/plugins" TYPE FILE FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/plugins/GimbalSmall2dPlugin.hh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libGpuRayPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libGpuRayPlugin.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libGpuRayPlugin.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/lib/gazebo-10/plugins/libGpuRayPlugin.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/lib/gazebo-10/plugins" TYPE SHARED_LIBRARY FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins/libGpuRayPlugin.so")
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libGpuRayPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libGpuRayPlugin.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libGpuRayPlugin.so"
         OLD_RPATH "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/test:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/sensors:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/physics:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/util:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/GIMPACT:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/ou:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/OPCODE:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/rendering:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/transport:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/msgs:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/common:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libGpuRayPlugin.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xheadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gazebo-10/gazebo/plugins" TYPE FILE FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/plugins/GpuRayPlugin.hh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libHarnessPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libHarnessPlugin.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libHarnessPlugin.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/lib/gazebo-10/plugins/libHarnessPlugin.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/lib/gazebo-10/plugins" TYPE SHARED_LIBRARY FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins/libHarnessPlugin.so")
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libHarnessPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libHarnessPlugin.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libHarnessPlugin.so"
         OLD_RPATH "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/test:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/sensors:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/physics:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/util:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/GIMPACT:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/ou:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/OPCODE:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/rendering:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/transport:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/msgs:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/common:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libHarnessPlugin.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xheadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gazebo-10/gazebo/plugins" TYPE FILE FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/plugins/HarnessPlugin.hh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libHeightmapLODPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libHeightmapLODPlugin.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libHeightmapLODPlugin.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/lib/gazebo-10/plugins/libHeightmapLODPlugin.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/lib/gazebo-10/plugins" TYPE SHARED_LIBRARY FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins/libHeightmapLODPlugin.so")
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libHeightmapLODPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libHeightmapLODPlugin.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libHeightmapLODPlugin.so"
         OLD_RPATH "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/test:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/sensors:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/physics:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/util:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/GIMPACT:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/ou:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/OPCODE:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/rendering:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/transport:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/msgs:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/common:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libHeightmapLODPlugin.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xheadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gazebo-10/gazebo/plugins" TYPE FILE FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/plugins/HeightmapLODPlugin.hh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libImuSensorPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libImuSensorPlugin.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libImuSensorPlugin.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/lib/gazebo-10/plugins/libImuSensorPlugin.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/lib/gazebo-10/plugins" TYPE SHARED_LIBRARY FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins/libImuSensorPlugin.so")
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libImuSensorPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libImuSensorPlugin.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libImuSensorPlugin.so"
         OLD_RPATH "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/test:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/sensors:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/physics:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/util:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/GIMPACT:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/ou:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/OPCODE:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/rendering:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/transport:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/msgs:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/common:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libImuSensorPlugin.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xheadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gazebo-10/gazebo/plugins" TYPE FILE FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/plugins/ImuSensorPlugin.hh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libInitialVelocityPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libInitialVelocityPlugin.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libInitialVelocityPlugin.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/lib/gazebo-10/plugins/libInitialVelocityPlugin.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/lib/gazebo-10/plugins" TYPE SHARED_LIBRARY FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins/libInitialVelocityPlugin.so")
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libInitialVelocityPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libInitialVelocityPlugin.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libInitialVelocityPlugin.so"
         OLD_RPATH "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/test:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/sensors:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/physics:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/util:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/GIMPACT:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/ou:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/OPCODE:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/rendering:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/transport:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/msgs:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/common:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libInitialVelocityPlugin.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xheadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gazebo-10/gazebo/plugins" TYPE FILE FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/plugins/InitialVelocityPlugin.hh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libJointControlPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libJointControlPlugin.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libJointControlPlugin.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/lib/gazebo-10/plugins/libJointControlPlugin.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/lib/gazebo-10/plugins" TYPE SHARED_LIBRARY FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins/libJointControlPlugin.so")
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libJointControlPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libJointControlPlugin.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libJointControlPlugin.so"
         OLD_RPATH "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/test:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/sensors:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/physics:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/util:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/GIMPACT:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/ou:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/OPCODE:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/rendering:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/transport:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/msgs:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/common:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libJointControlPlugin.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xheadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gazebo-10/gazebo/plugins" TYPE FILE FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/plugins/JointControlPlugin.hh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libJointTrajectoryPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libJointTrajectoryPlugin.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libJointTrajectoryPlugin.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/lib/gazebo-10/plugins/libJointTrajectoryPlugin.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/lib/gazebo-10/plugins" TYPE SHARED_LIBRARY FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins/libJointTrajectoryPlugin.so")
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libJointTrajectoryPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libJointTrajectoryPlugin.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libJointTrajectoryPlugin.so"
         OLD_RPATH "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/test:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/sensors:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/physics:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/util:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/GIMPACT:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/ou:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/OPCODE:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/rendering:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/transport:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/msgs:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/common:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libJointTrajectoryPlugin.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xheadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gazebo-10/gazebo/plugins" TYPE FILE FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/plugins/JointTrajectoryPlugin.hh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libKeysToCmdVelPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libKeysToCmdVelPlugin.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libKeysToCmdVelPlugin.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/lib/gazebo-10/plugins/libKeysToCmdVelPlugin.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/lib/gazebo-10/plugins" TYPE SHARED_LIBRARY FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins/libKeysToCmdVelPlugin.so")
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libKeysToCmdVelPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libKeysToCmdVelPlugin.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libKeysToCmdVelPlugin.so"
         OLD_RPATH "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/test:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/sensors:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/physics:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/util:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/GIMPACT:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/ou:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/OPCODE:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/rendering:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/transport:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/msgs:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/common:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libKeysToCmdVelPlugin.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xheadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gazebo-10/gazebo/plugins" TYPE FILE FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/plugins/KeysToCmdVelPlugin.hh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libKeysToJointsPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libKeysToJointsPlugin.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libKeysToJointsPlugin.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/lib/gazebo-10/plugins/libKeysToJointsPlugin.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/lib/gazebo-10/plugins" TYPE SHARED_LIBRARY FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins/libKeysToJointsPlugin.so")
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libKeysToJointsPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libKeysToJointsPlugin.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libKeysToJointsPlugin.so"
         OLD_RPATH "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/test:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/sensors:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/physics:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/util:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/GIMPACT:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/ou:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/OPCODE:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/rendering:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/transport:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/msgs:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/common:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libKeysToJointsPlugin.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xheadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gazebo-10/gazebo/plugins" TYPE FILE FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/plugins/KeysToJointsPlugin.hh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libLedPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libLedPlugin.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libLedPlugin.so"
         RPATH "/usr/lib/gazebo-10/plugins/")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/lib/gazebo-10/plugins/libLedPlugin.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/lib/gazebo-10/plugins" TYPE SHARED_LIBRARY FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins/libLedPlugin.so")
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libLedPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libLedPlugin.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libLedPlugin.so"
         OLD_RPATH "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/test:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/sensors:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/physics:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/util:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/GIMPACT:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/ou:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/OPCODE:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/rendering:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/transport:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/msgs:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/common:"
         NEW_RPATH "/usr/lib/gazebo-10/plugins/")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libLedPlugin.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xheadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gazebo-10/gazebo/plugins" TYPE FILE FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/plugins/LedPlugin.hh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libLensFlareSensorPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libLensFlareSensorPlugin.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libLensFlareSensorPlugin.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/lib/gazebo-10/plugins/libLensFlareSensorPlugin.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/lib/gazebo-10/plugins" TYPE SHARED_LIBRARY FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins/libLensFlareSensorPlugin.so")
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libLensFlareSensorPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libLensFlareSensorPlugin.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libLensFlareSensorPlugin.so"
         OLD_RPATH "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/test:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/sensors:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/physics:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/util:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/GIMPACT:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/ou:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/OPCODE:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/rendering:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/transport:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/msgs:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/common:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libLensFlareSensorPlugin.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xheadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gazebo-10/gazebo/plugins" TYPE FILE FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/plugins/LensFlareSensorPlugin.hh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libLiftDragPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libLiftDragPlugin.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libLiftDragPlugin.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/lib/gazebo-10/plugins/libLiftDragPlugin.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/lib/gazebo-10/plugins" TYPE SHARED_LIBRARY FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins/libLiftDragPlugin.so")
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libLiftDragPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libLiftDragPlugin.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libLiftDragPlugin.so"
         OLD_RPATH "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/test:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/sensors:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/physics:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/util:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/GIMPACT:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/ou:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/OPCODE:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/rendering:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/transport:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/msgs:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/common:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libLiftDragPlugin.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xheadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gazebo-10/gazebo/plugins" TYPE FILE FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/plugins/LiftDragPlugin.hh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libLinearBatteryConsumerPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libLinearBatteryConsumerPlugin.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libLinearBatteryConsumerPlugin.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/lib/gazebo-10/plugins/libLinearBatteryConsumerPlugin.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/lib/gazebo-10/plugins" TYPE SHARED_LIBRARY FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins/libLinearBatteryConsumerPlugin.so")
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libLinearBatteryConsumerPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libLinearBatteryConsumerPlugin.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libLinearBatteryConsumerPlugin.so"
         OLD_RPATH "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/test:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/sensors:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/physics:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/util:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/GIMPACT:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/ou:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/OPCODE:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/rendering:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/transport:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/msgs:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/common:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libLinearBatteryConsumerPlugin.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xheadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gazebo-10/gazebo/plugins" TYPE FILE FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/plugins/LinearBatteryConsumerPlugin.hh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libLinearBatteryPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libLinearBatteryPlugin.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libLinearBatteryPlugin.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/lib/gazebo-10/plugins/libLinearBatteryPlugin.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/lib/gazebo-10/plugins" TYPE SHARED_LIBRARY FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins/libLinearBatteryPlugin.so")
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libLinearBatteryPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libLinearBatteryPlugin.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libLinearBatteryPlugin.so"
         OLD_RPATH "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/test:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/sensors:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/physics:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/util:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/GIMPACT:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/ou:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/OPCODE:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/rendering:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/transport:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/msgs:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/common:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libLinearBatteryPlugin.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xheadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gazebo-10/gazebo/plugins" TYPE FILE FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/plugins/LinearBatteryPlugin.hh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libLinkPlot3DPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libLinkPlot3DPlugin.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libLinkPlot3DPlugin.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/lib/gazebo-10/plugins/libLinkPlot3DPlugin.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/lib/gazebo-10/plugins" TYPE SHARED_LIBRARY FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins/libLinkPlot3DPlugin.so")
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libLinkPlot3DPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libLinkPlot3DPlugin.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libLinkPlot3DPlugin.so"
         OLD_RPATH "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/test:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/sensors:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/physics:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/util:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/GIMPACT:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/ou:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/OPCODE:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/rendering:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/transport:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/msgs:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/common:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libLinkPlot3DPlugin.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xheadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gazebo-10/gazebo/plugins" TYPE FILE FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/plugins/LinkPlot3DPlugin.hh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libMisalignmentPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libMisalignmentPlugin.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libMisalignmentPlugin.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/lib/gazebo-10/plugins/libMisalignmentPlugin.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/lib/gazebo-10/plugins" TYPE SHARED_LIBRARY FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins/libMisalignmentPlugin.so")
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libMisalignmentPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libMisalignmentPlugin.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libMisalignmentPlugin.so"
         OLD_RPATH "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/test:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/sensors:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/physics:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/util:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/GIMPACT:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/ou:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/OPCODE:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/rendering:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/transport:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/msgs:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/common:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libMisalignmentPlugin.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xheadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gazebo-10/gazebo/plugins" TYPE FILE FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/plugins/MisalignmentPlugin.hh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libModelPropShop.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libModelPropShop.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libModelPropShop.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/lib/gazebo-10/plugins/libModelPropShop.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/lib/gazebo-10/plugins" TYPE SHARED_LIBRARY FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins/libModelPropShop.so")
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libModelPropShop.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libModelPropShop.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libModelPropShop.so"
         OLD_RPATH "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/test:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/sensors:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/physics:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/util:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/GIMPACT:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/ou:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/OPCODE:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/rendering:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/transport:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/msgs:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/common:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libModelPropShop.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xheadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gazebo-10/gazebo/plugins" TYPE FILE FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/plugins/ModelPropShop.hh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libMudPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libMudPlugin.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libMudPlugin.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/lib/gazebo-10/plugins/libMudPlugin.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/lib/gazebo-10/plugins" TYPE SHARED_LIBRARY FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins/libMudPlugin.so")
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libMudPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libMudPlugin.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libMudPlugin.so"
         OLD_RPATH "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/test:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/sensors:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/physics:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/util:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/GIMPACT:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/ou:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/OPCODE:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/rendering:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/transport:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/msgs:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/common:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libMudPlugin.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xheadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gazebo-10/gazebo/plugins" TYPE FILE FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/plugins/MudPlugin.hh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libPlaneDemoPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libPlaneDemoPlugin.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libPlaneDemoPlugin.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/lib/gazebo-10/plugins/libPlaneDemoPlugin.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/lib/gazebo-10/plugins" TYPE SHARED_LIBRARY FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins/libPlaneDemoPlugin.so")
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libPlaneDemoPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libPlaneDemoPlugin.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libPlaneDemoPlugin.so"
         OLD_RPATH "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/test:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/sensors:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/physics:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/util:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/GIMPACT:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/ou:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/OPCODE:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/rendering:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/transport:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/msgs:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/common:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libPlaneDemoPlugin.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xheadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gazebo-10/gazebo/plugins" TYPE FILE FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/plugins/PlaneDemoPlugin.hh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libPressurePlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libPressurePlugin.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libPressurePlugin.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/lib/gazebo-10/plugins/libPressurePlugin.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/lib/gazebo-10/plugins" TYPE SHARED_LIBRARY FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins/libPressurePlugin.so")
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libPressurePlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libPressurePlugin.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libPressurePlugin.so"
         OLD_RPATH "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/test:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/sensors:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/physics:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/util:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/GIMPACT:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/ou:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/OPCODE:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/rendering:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/transport:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/msgs:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/common:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libPressurePlugin.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xheadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gazebo-10/gazebo/plugins" TYPE FILE FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/plugins/PressurePlugin.hh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libRayPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libRayPlugin.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libRayPlugin.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/lib/gazebo-10/plugins/libRayPlugin.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/lib/gazebo-10/plugins" TYPE SHARED_LIBRARY FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins/libRayPlugin.so")
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libRayPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libRayPlugin.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libRayPlugin.so"
         OLD_RPATH "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/test:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/sensors:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/physics:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/util:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/GIMPACT:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/ou:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/OPCODE:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/rendering:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/transport:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/msgs:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/common:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libRayPlugin.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xheadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gazebo-10/gazebo/plugins" TYPE FILE FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/plugins/RayPlugin.hh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libRaySensorNoisePlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libRaySensorNoisePlugin.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libRaySensorNoisePlugin.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/lib/gazebo-10/plugins/libRaySensorNoisePlugin.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/lib/gazebo-10/plugins" TYPE SHARED_LIBRARY FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins/libRaySensorNoisePlugin.so")
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libRaySensorNoisePlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libRaySensorNoisePlugin.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libRaySensorNoisePlugin.so"
         OLD_RPATH "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/test:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/sensors:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/physics:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/util:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/GIMPACT:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/ou:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/OPCODE:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/rendering:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/transport:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/msgs:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/common:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libRaySensorNoisePlugin.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xheadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gazebo-10/gazebo/plugins" TYPE FILE FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/plugins/RaySensorNoisePlugin.hh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libRubblePlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libRubblePlugin.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libRubblePlugin.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/lib/gazebo-10/plugins/libRubblePlugin.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/lib/gazebo-10/plugins" TYPE SHARED_LIBRARY FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins/libRubblePlugin.so")
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libRubblePlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libRubblePlugin.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libRubblePlugin.so"
         OLD_RPATH "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/test:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/sensors:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/physics:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/util:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/GIMPACT:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/ou:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/OPCODE:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/rendering:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/transport:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/msgs:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/common:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libRubblePlugin.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xheadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gazebo-10/gazebo/plugins" TYPE FILE FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/plugins/RubblePlugin.hh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libShaderParamVisualPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libShaderParamVisualPlugin.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libShaderParamVisualPlugin.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/lib/gazebo-10/plugins/libShaderParamVisualPlugin.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/lib/gazebo-10/plugins" TYPE SHARED_LIBRARY FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins/libShaderParamVisualPlugin.so")
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libShaderParamVisualPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libShaderParamVisualPlugin.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libShaderParamVisualPlugin.so"
         OLD_RPATH "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/test:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/sensors:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/physics:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/util:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/GIMPACT:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/ou:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/OPCODE:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/rendering:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/transport:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/msgs:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/common:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libShaderParamVisualPlugin.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xheadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gazebo-10/gazebo/plugins" TYPE FILE FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/plugins/ShaderParamVisualPlugin.hh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libSkidSteerDrivePlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libSkidSteerDrivePlugin.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libSkidSteerDrivePlugin.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/lib/gazebo-10/plugins/libSkidSteerDrivePlugin.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/lib/gazebo-10/plugins" TYPE SHARED_LIBRARY FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins/libSkidSteerDrivePlugin.so")
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libSkidSteerDrivePlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libSkidSteerDrivePlugin.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libSkidSteerDrivePlugin.so"
         OLD_RPATH "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/test:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/sensors:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/physics:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/util:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/GIMPACT:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/ou:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/OPCODE:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/rendering:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/transport:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/msgs:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/common:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libSkidSteerDrivePlugin.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xheadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gazebo-10/gazebo/plugins" TYPE FILE FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/plugins/SkidSteerDrivePlugin.hh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libSonarPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libSonarPlugin.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libSonarPlugin.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/lib/gazebo-10/plugins/libSonarPlugin.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/lib/gazebo-10/plugins" TYPE SHARED_LIBRARY FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins/libSonarPlugin.so")
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libSonarPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libSonarPlugin.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libSonarPlugin.so"
         OLD_RPATH "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/test:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/sensors:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/physics:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/util:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/GIMPACT:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/ou:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/OPCODE:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/rendering:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/transport:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/msgs:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/common:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libSonarPlugin.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xheadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gazebo-10/gazebo/plugins" TYPE FILE FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/plugins/SonarPlugin.hh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libSphereAtlasDemoPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libSphereAtlasDemoPlugin.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libSphereAtlasDemoPlugin.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/lib/gazebo-10/plugins/libSphereAtlasDemoPlugin.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/lib/gazebo-10/plugins" TYPE SHARED_LIBRARY FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins/libSphereAtlasDemoPlugin.so")
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libSphereAtlasDemoPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libSphereAtlasDemoPlugin.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libSphereAtlasDemoPlugin.so"
         OLD_RPATH "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/test:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/sensors:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/physics:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/util:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/GIMPACT:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/ou:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/OPCODE:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/rendering:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/transport:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/msgs:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/common:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libSphereAtlasDemoPlugin.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xheadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gazebo-10/gazebo/plugins" TYPE FILE FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/plugins/SphereAtlasDemoPlugin.hh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libStaticMapPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libStaticMapPlugin.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libStaticMapPlugin.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/lib/gazebo-10/plugins/libStaticMapPlugin.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/lib/gazebo-10/plugins" TYPE SHARED_LIBRARY FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins/libStaticMapPlugin.so")
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libStaticMapPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libStaticMapPlugin.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libStaticMapPlugin.so"
         OLD_RPATH "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/test:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/sensors:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/physics:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/util:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/GIMPACT:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/ou:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/OPCODE:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/rendering:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/transport:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/msgs:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/common:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libStaticMapPlugin.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xheadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gazebo-10/gazebo/plugins" TYPE FILE FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/plugins/StaticMapPlugin.hh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libStopWorldPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libStopWorldPlugin.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libStopWorldPlugin.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/lib/gazebo-10/plugins/libStopWorldPlugin.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/lib/gazebo-10/plugins" TYPE SHARED_LIBRARY FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins/libStopWorldPlugin.so")
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libStopWorldPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libStopWorldPlugin.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libStopWorldPlugin.so"
         OLD_RPATH "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/test:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/sensors:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/physics:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/util:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/GIMPACT:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/ou:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/OPCODE:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/rendering:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/transport:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/msgs:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/common:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libStopWorldPlugin.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xheadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gazebo-10/gazebo/plugins" TYPE FILE FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/plugins/StopWorldPlugin.hh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libTouchPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libTouchPlugin.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libTouchPlugin.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/lib/gazebo-10/plugins/libTouchPlugin.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/lib/gazebo-10/plugins" TYPE SHARED_LIBRARY FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins/libTouchPlugin.so")
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libTouchPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libTouchPlugin.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libTouchPlugin.so"
         OLD_RPATH "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/test:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/sensors:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/physics:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/util:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/GIMPACT:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/ou:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/OPCODE:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/rendering:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/transport:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/msgs:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/common:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libTouchPlugin.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xheadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gazebo-10/gazebo/plugins" TYPE FILE FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/plugins/TouchPlugin.hh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libVehiclePlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libVehiclePlugin.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libVehiclePlugin.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/lib/gazebo-10/plugins/libVehiclePlugin.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/lib/gazebo-10/plugins" TYPE SHARED_LIBRARY FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins/libVehiclePlugin.so")
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libVehiclePlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libVehiclePlugin.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libVehiclePlugin.so"
         OLD_RPATH "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/test:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/sensors:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/physics:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/util:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/GIMPACT:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/ou:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/OPCODE:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/rendering:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/transport:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/msgs:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/common:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libVehiclePlugin.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xheadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gazebo-10/gazebo/plugins" TYPE FILE FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/plugins/VehiclePlugin.hh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libWheelSlipPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libWheelSlipPlugin.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libWheelSlipPlugin.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/lib/gazebo-10/plugins/libWheelSlipPlugin.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/lib/gazebo-10/plugins" TYPE SHARED_LIBRARY FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins/libWheelSlipPlugin.so")
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libWheelSlipPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libWheelSlipPlugin.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libWheelSlipPlugin.so"
         OLD_RPATH "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/test:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/sensors:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/physics:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/util:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/GIMPACT:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/ou:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/OPCODE:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/rendering:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/transport:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/msgs:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/common:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libWheelSlipPlugin.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xheadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gazebo-10/gazebo/plugins" TYPE FILE FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/plugins/WheelSlipPlugin.hh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libWindPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libWindPlugin.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libWindPlugin.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/lib/gazebo-10/plugins/libWindPlugin.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/lib/gazebo-10/plugins" TYPE SHARED_LIBRARY FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins/libWindPlugin.so")
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libWindPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libWindPlugin.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libWindPlugin.so"
         OLD_RPATH "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/test:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/sensors:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/physics:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/util:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/GIMPACT:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/ou:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/OPCODE:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/rendering:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/transport:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/msgs:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/common:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libWindPlugin.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xheadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gazebo-10/gazebo/plugins" TYPE FILE FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/plugins/WindPlugin.hh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libHydraPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libHydraPlugin.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libHydraPlugin.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/lib/gazebo-10/plugins/libHydraPlugin.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/lib/gazebo-10/plugins" TYPE SHARED_LIBRARY FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins/libHydraPlugin.so")
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libHydraPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libHydraPlugin.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libHydraPlugin.so"
         OLD_RPATH "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/test:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/sensors:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/physics:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/util:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/GIMPACT:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/ou:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/OPCODE:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/rendering:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/transport:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/msgs:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/common:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libHydraPlugin.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xheadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gazebo-10/gazebo/plugins" TYPE FILE FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/plugins/HydraPlugin.hh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libHydraDemoPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libHydraDemoPlugin.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libHydraDemoPlugin.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/lib/gazebo-10/plugins/libHydraDemoPlugin.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/lib/gazebo-10/plugins" TYPE SHARED_LIBRARY FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins/libHydraDemoPlugin.so")
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libHydraDemoPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libHydraDemoPlugin.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libHydraDemoPlugin.so"
         OLD_RPATH "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/test:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/sensors:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/physics:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/util:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/GIMPACT:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/ou:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/OPCODE:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/rendering:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/transport:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/msgs:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/common:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libHydraDemoPlugin.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xheadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gazebo-10/gazebo/plugins" TYPE FILE FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/plugins/HydraDemoPlugin.hh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libJoyPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libJoyPlugin.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libJoyPlugin.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/lib/gazebo-10/plugins/libJoyPlugin.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/lib/gazebo-10/plugins" TYPE SHARED_LIBRARY FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins/libJoyPlugin.so")
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libJoyPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libJoyPlugin.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libJoyPlugin.so"
         OLD_RPATH "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/test:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/sensors:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/physics:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/util:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/GIMPACT:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/ou:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/OPCODE:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/rendering:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/transport:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/msgs:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/common:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libJoyPlugin.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xheadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gazebo-10/gazebo/plugins" TYPE FILE FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/plugins/JoyPlugin.hh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libElevatorPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libElevatorPlugin.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libElevatorPlugin.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/lib/gazebo-10/plugins/libElevatorPlugin.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/lib/gazebo-10/plugins" TYPE SHARED_LIBRARY FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins/libElevatorPlugin.so")
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libElevatorPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libElevatorPlugin.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libElevatorPlugin.so"
         OLD_RPATH "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/test:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/sensors:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/physics:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/util:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/GIMPACT:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/ou:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/OPCODE:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/rendering:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/transport:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/msgs:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/common:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libElevatorPlugin.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xheadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gazebo-10/gazebo/plugins" TYPE FILE FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/plugins/ElevatorPlugin.hh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xheadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gazebo-10/gazebo/plugins" TYPE FILE FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/plugins/ElevatorPluginPrivate.hh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libRandomVelocityPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libRandomVelocityPlugin.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libRandomVelocityPlugin.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/lib/gazebo-10/plugins/libRandomVelocityPlugin.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/lib/gazebo-10/plugins" TYPE SHARED_LIBRARY FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins/libRandomVelocityPlugin.so")
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libRandomVelocityPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libRandomVelocityPlugin.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libRandomVelocityPlugin.so"
         OLD_RPATH "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/test:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/sensors:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/physics:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/util:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/GIMPACT:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/ou:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/OPCODE:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/rendering:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/transport:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/msgs:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/common:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libRandomVelocityPlugin.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xheadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gazebo-10/gazebo/plugins" TYPE FILE FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/plugins/RandomVelocityPlugin.hh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xheadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gazebo-10/gazebo/plugins" TYPE FILE FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/plugins/RandomVelocityPluginPrivate.hh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libTransporterPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libTransporterPlugin.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libTransporterPlugin.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/lib/gazebo-10/plugins/libTransporterPlugin.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/lib/gazebo-10/plugins" TYPE SHARED_LIBRARY FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins/libTransporterPlugin.so")
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libTransporterPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libTransporterPlugin.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libTransporterPlugin.so"
         OLD_RPATH "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/test:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/sensors:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/physics:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/util:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/GIMPACT:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/ou:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/OPCODE:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/rendering:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/transport:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/msgs:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/common:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libTransporterPlugin.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xheadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gazebo-10/gazebo/plugins" TYPE FILE FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/plugins/TransporterPlugin.hh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xheadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gazebo-10/gazebo/plugins" TYPE FILE FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/plugins/TransporterPluginPrivate.hh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libCessnaGUIPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libCessnaGUIPlugin.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libCessnaGUIPlugin.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/lib/gazebo-10/plugins/libCessnaGUIPlugin.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/lib/gazebo-10/plugins" TYPE SHARED_LIBRARY FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins/libCessnaGUIPlugin.so")
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libCessnaGUIPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libCessnaGUIPlugin.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libCessnaGUIPlugin.so"
         OLD_RPATH "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/test:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/gui:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/sensors:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/physics:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/GIMPACT:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/ou:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/OPCODE:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/rendering:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/util:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/transport:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/msgs:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/common:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libCessnaGUIPlugin.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xheadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gazebo-10/gazebo/plugins" TYPE FILE FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/plugins/CessnaGUIPlugin.hh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libKeyboardGUIPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libKeyboardGUIPlugin.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libKeyboardGUIPlugin.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/lib/gazebo-10/plugins/libKeyboardGUIPlugin.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/lib/gazebo-10/plugins" TYPE SHARED_LIBRARY FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins/libKeyboardGUIPlugin.so")
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libKeyboardGUIPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libKeyboardGUIPlugin.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libKeyboardGUIPlugin.so"
         OLD_RPATH "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/test:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/gui:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/sensors:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/physics:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/GIMPACT:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/ou:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/OPCODE:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/rendering:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/util:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/transport:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/msgs:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/common:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libKeyboardGUIPlugin.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xheadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gazebo-10/gazebo/plugins" TYPE FILE FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/plugins/KeyboardGUIPlugin.hh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libLookAtDemoPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libLookAtDemoPlugin.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libLookAtDemoPlugin.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/lib/gazebo-10/plugins/libLookAtDemoPlugin.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/lib/gazebo-10/plugins" TYPE SHARED_LIBRARY FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins/libLookAtDemoPlugin.so")
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libLookAtDemoPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libLookAtDemoPlugin.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libLookAtDemoPlugin.so"
         OLD_RPATH "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/test:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/gui:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/sensors:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/physics:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/GIMPACT:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/ou:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/OPCODE:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/rendering:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/util:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/transport:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/msgs:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/common:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libLookAtDemoPlugin.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xheadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gazebo-10/gazebo/plugins" TYPE FILE FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/plugins/LookAtDemoPlugin.hh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libTimerGUIPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libTimerGUIPlugin.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libTimerGUIPlugin.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/lib/gazebo-10/plugins/libTimerGUIPlugin.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/lib/gazebo-10/plugins" TYPE SHARED_LIBRARY FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins/libTimerGUIPlugin.so")
  if(EXISTS "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libTimerGUIPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libTimerGUIPlugin.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libTimerGUIPlugin.so"
         OLD_RPATH "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/test:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/gui:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/sensors:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/physics:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/GIMPACT:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/ou:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/OPCODE:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/rendering:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/util:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/transport:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/msgs:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/common:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/lib/gazebo-10/plugins/libTimerGUIPlugin.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xheadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gazebo-10/gazebo/plugins" TYPE FILE FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/plugins/TimerGUIPlugin.hh")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins/events/cmake_install.cmake")
  include("/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins/rest_web/cmake_install.cmake")

endif()

