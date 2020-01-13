# Install script for directory: /home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/physics

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
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgazebo_physics.so.10.1.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgazebo_physics.so.10"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/physics/libgazebo_physics.so.10.1.0"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/physics/libgazebo_physics.so.10"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgazebo_physics.so.10.1.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgazebo_physics.so.10"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHANGE
           FILE "${file}"
           OLD_RPATH "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/test:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/util:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/OPCODE:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/transport:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/msgs:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/common:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/GIMPACT:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/ou:"
           NEW_RPATH "")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/usr/bin/strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xshlibx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgazebo_physics.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgazebo_physics.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgazebo_physics.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/physics/libgazebo_physics.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgazebo_physics.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgazebo_physics.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgazebo_physics.so"
         OLD_RPATH "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/test:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/util:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/OPCODE:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/transport:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/msgs:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/common:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/GIMPACT:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/deps/opende/ou:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgazebo_physics.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xheadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gazebo-10/gazebo/physics" TYPE FILE FILES
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/physics/Actor.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/physics/AdiabaticAtmosphere.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/physics/Atmosphere.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/physics/AtmosphereFactory.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/physics/BallJoint.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/physics/Base.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/physics/BoxShape.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/physics/Collision.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/physics/CollisionState.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/physics/Contact.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/physics/ContactManager.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/physics/CylinderShape.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/physics/Entity.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/physics/FixedJoint.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/physics/HeightmapShape.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/physics/Hinge2Joint.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/physics/HingeJoint.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/physics/GearboxJoint.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/physics/Inertial.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/physics/Gripper.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/physics/Joint.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/physics/JointController.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/physics/JointWrench.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/physics/JointState.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/physics/Light.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/physics/LightState.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/physics/Link.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/physics/LinkState.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/physics/MapShape.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/physics/MeshShape.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/physics/Model.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/physics/ModelState.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/physics/MultiRayShape.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/physics/PhysicsIface.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/physics/PhysicsEngine.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/physics/PhysicsFactory.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/physics/PhysicsTypes.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/physics/PlaneShape.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/physics/PolylineShape.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/physics/Population.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/physics/PresetManager.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/physics/RayShape.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/physics/Road.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/physics/Shape.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/physics/ScrewJoint.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/physics/SliderJoint.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/physics/SphereShape.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/physics/State.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/physics/SurfaceParams.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/physics/UniversalJoint.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/physics/UserCmdManager.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/physics/Wind.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/physics/World.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/physics/WorldState.hh"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/physics/physics.hh"
    )
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/physics/ode/cmake_install.cmake")

endif()

