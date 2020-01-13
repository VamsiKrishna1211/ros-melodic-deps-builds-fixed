# Install script for directory: /home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo

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
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/gzserver-10.1.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/gzserver"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/gzserver-10.1.0"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/gzserver"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/gzserver-10.1.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/gzserver"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHANGE
           FILE "${file}"
           OLD_RPATH "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/test:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/sensors:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/rendering:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/physics:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/util:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/GIMPACT:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/ou:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/OPCODE:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/transport:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/msgs:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/common:"
           NEW_RPATH "")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/usr/bin/strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/man1" TYPE FILE FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/gzserver.1.gz")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/gazebo-10.1.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/gazebo"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/gazebo-10.1.0"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/gazebo"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/gazebo-10.1.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/gazebo"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHANGE
           FILE "${file}"
           OLD_RPATH "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/test:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/sensors:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/gui:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/physics:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/GIMPACT:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/ou:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/OPCODE:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/util:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/rendering:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/transport:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/msgs:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/common:"
           NEW_RPATH "")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/usr/bin/strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/man1" TYPE FILE FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/gazebo.1.gz")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xshlibx" OR NOT CMAKE_INSTALL_COMPONENT)
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgazebo.so.10.1.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgazebo.so.10"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/libgazebo.so.10.1.0"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/libgazebo.so.10"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgazebo.so.10.1.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgazebo.so.10"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHANGE
           FILE "${file}"
           OLD_RPATH "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/test:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/sensors:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/rendering:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/physics:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/util:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/GIMPACT:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/ou:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/OPCODE:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/transport:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/msgs:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/common:"
           NEW_RPATH "")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/usr/bin/strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xshlibx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgazebo.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgazebo.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgazebo.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/libgazebo.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgazebo.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgazebo.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgazebo.so"
         OLD_RPATH "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/test:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/sensors:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/rendering:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/physics:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/util:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/GIMPACT:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/ou:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/OPCODE:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/transport:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/msgs:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/common:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgazebo.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xshlibx" OR NOT CMAKE_INSTALL_COMPONENT)
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgazebo_client.so.10.1.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgazebo_client.so.10"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/libgazebo_client.so.10.1.0"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/libgazebo_client.so.10"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgazebo_client.so.10.1.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgazebo_client.so.10"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHANGE
           FILE "${file}"
           OLD_RPATH "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/test:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/util:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/transport:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/msgs:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/common:"
           NEW_RPATH "")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/usr/bin/strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xshlibx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgazebo_client.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgazebo_client.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgazebo_client.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/libgazebo_client.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgazebo_client.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgazebo_client.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgazebo_client.so"
         OLD_RPATH "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/test:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/util:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/transport:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/msgs:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/common:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgazebo_client.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xheadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gazebo-10/gazebo" TYPE FILE FILES
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/gazebo_client.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/gazebo_core.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/gazebo.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/Master.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/Server.hh"
    )
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/msgs/cmake_install.cmake")
  include("/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/transport/cmake_install.cmake")
  include("/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/common/cmake_install.cmake")
  include("/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/rendering/cmake_install.cmake")
  include("/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/gui/cmake_install.cmake")
  include("/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/physics/cmake_install.cmake")
  include("/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/sensors/cmake_install.cmake")
  include("/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/util/cmake_install.cmake")
  include("/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/test/cmake_install.cmake")

endif()

