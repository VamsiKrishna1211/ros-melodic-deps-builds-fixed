# Install script for directory: /home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/scripts

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
   "/usr/share/gazebo-10/media/materials/scripts/blur.compositor;/usr/share/gazebo-10/media/materials/scripts/blur.material;/usr/share/gazebo-10/media/materials/scripts/CreaseShading.compositor;/usr/share/gazebo-10/media/materials/scripts/CreaseShading.material;/usr/share/gazebo-10/media/materials/scripts/deferred.compositor;/usr/share/gazebo-10/media/materials/scripts/deferred_post.material;/usr/share/gazebo-10/media/materials/scripts/deferred_post_minilight.material;/usr/share/gazebo-10/media/materials/scripts/deferred_post.program;/usr/share/gazebo-10/media/materials/scripts/distortion.compositor;/usr/share/gazebo-10/media/materials/scripts/gazebo.material;/usr/share/gazebo-10/media/materials/scripts/GBuffer.material;/usr/share/gazebo-10/media/materials/scripts/grid.material;/usr/share/gazebo-10/media/materials/scripts/kitchen.material;/usr/share/gazebo-10/media/materials/scripts/lens_flare.compositor;/usr/share/gazebo-10/media/materials/scripts/Modulate.material;/usr/share/gazebo-10/media/materials/scripts/noise.compositor;/usr/share/gazebo-10/media/materials/scripts/oculus.material;/usr/share/gazebo-10/media/materials/scripts/perpixel.program;/usr/share/gazebo-10/media/materials/scripts/picker.material;/usr/share/gazebo-10/media/materials/scripts/ShadowCaster.material;/usr/share/gazebo-10/media/materials/scripts/shadow_caster.program;/usr/share/gazebo-10/media/materials/scripts/ShadowCaster.program;/usr/share/gazebo-10/media/materials/scripts/ssao.compositor;/usr/share/gazebo-10/media/materials/scripts/ssao.material;/usr/share/gazebo-10/media/materials/scripts/SSAOPost.compositor;/usr/share/gazebo-10/media/materials/scripts/SSAOPost.material;/usr/share/gazebo-10/media/materials/scripts/StdQuad_vp.program;/usr/share/gazebo-10/media/materials/scripts/VPL.material;/usr/share/gazebo-10/media/materials/scripts/VPL.program;/usr/share/gazebo-10/media/materials/scripts/deform.material;/usr/share/gazebo-10/media/materials/scripts/WideCameraLensMap.compositor")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/share/gazebo-10/media/materials/scripts" TYPE FILE FILES
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/scripts/blur.compositor"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/scripts/blur.material"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/scripts/CreaseShading.compositor"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/scripts/CreaseShading.material"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/scripts/deferred.compositor"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/scripts/deferred_post.material"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/scripts/deferred_post_minilight.material"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/scripts/deferred_post.program"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/scripts/distortion.compositor"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/scripts/gazebo.material"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/scripts/GBuffer.material"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/scripts/grid.material"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/scripts/kitchen.material"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/scripts/lens_flare.compositor"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/scripts/Modulate.material"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/scripts/noise.compositor"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/scripts/oculus.material"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/scripts/perpixel.program"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/scripts/picker.material"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/scripts/ShadowCaster.material"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/scripts/shadow_caster.program"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/scripts/ShadowCaster.program"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/scripts/ssao.compositor"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/scripts/ssao.material"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/scripts/SSAOPost.compositor"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/scripts/SSAOPost.material"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/scripts/StdQuad_vp.program"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/scripts/VPL.material"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/scripts/VPL.program"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/scripts/deform.material"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/scripts/WideCameraLensMap.compositor"
    )
endif()

