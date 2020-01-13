# Install script for directory: /home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/programs

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
   "/usr/share/gazebo-10/media/materials/programs/ambient_one_texture_vp.glsl;/usr/share/gazebo-10/media/materials/programs/blur.glsl;/usr/share/gazebo-10/media/materials/programs/camera_distortion_map_fs.glsl;/usr/share/gazebo-10/media/materials/programs/camera_distortion_map_vs.glsl;/usr/share/gazebo-10/media/materials/programs/camera_lens_flare_fs.glsl;/usr/share/gazebo-10/media/materials/programs/camera_lens_flare_vs.glsl;/usr/share/gazebo-10/media/materials/programs/camera_noise_gaussian_fs.glsl;/usr/share/gazebo-10/media/materials/programs/camera_noise_gaussian_vs.glsl;/usr/share/gazebo-10/media/materials/programs/CreaseShadingFP.glsl;/usr/share/gazebo-10/media/materials/programs/deform_fp.glsl;/usr/share/gazebo-10/media/materials/programs/deform_vp.glsl;/usr/share/gazebo-10/media/materials/programs/depth_map.frag;/usr/share/gazebo-10/media/materials/programs/depth_map.vert;/usr/share/gazebo-10/media/materials/programs/depth_points_map.frag;/usr/share/gazebo-10/media/materials/programs/depth_points_map.vert;/usr/share/gazebo-10/media/materials/programs/directional_shadow_receiver_fp.glsl;/usr/share/gazebo-10/media/materials/programs/directional_shadow_receiver_vp.glsl;/usr/share/gazebo-10/media/materials/programs/GBufferFP.glsl;/usr/share/gazebo-10/media/materials/programs/GBufferVP.glsl;/usr/share/gazebo-10/media/materials/programs/grid_fp.glsl;/usr/share/gazebo-10/media/materials/programs/grid_vp.glsl;/usr/share/gazebo-10/media/materials/programs/laser_1st_pass_dbg.frag;/usr/share/gazebo-10/media/materials/programs/laser_1st_pass.frag;/usr/share/gazebo-10/media/materials/programs/laser_1st_pass.vert;/usr/share/gazebo-10/media/materials/programs/laser_2nd_pass.frag;/usr/share/gazebo-10/media/materials/programs/laser_2nd_pass.vert;/usr/share/gazebo-10/media/materials/programs/ModulateFP.glsl;/usr/share/gazebo-10/media/materials/programs/NoFilterFP.glsl;/usr/share/gazebo-10/media/materials/programs/oculus.cg;/usr/share/gazebo-10/media/materials/programs/OculusDistortionFragment.glsl;/usr/share/gazebo-10/media/materials/programs/OculusDistortionVertex.glsl;/usr/share/gazebo-10/media/materials/programs/perpixel_fp.glsl;/usr/share/gazebo-10/media/materials/programs/perpixel_vp.glsl;/usr/share/gazebo-10/media/materials/programs/plain_color_fs.glsl;/usr/share/gazebo-10/media/materials/programs/plain_color_vs.glsl;/usr/share/gazebo-10/media/materials/programs/point_receiver_fp.glsl;/usr/share/gazebo-10/media/materials/programs/point_receiver_vp.glsl;/usr/share/gazebo-10/media/materials/programs/projector.frag;/usr/share/gazebo-10/media/materials/programs/projector.vert;/usr/share/gazebo-10/media/materials/programs/shadow_caster_fp.glsl;/usr/share/gazebo-10/media/materials/programs/shadow_caster_vp.glsl;/usr/share/gazebo-10/media/materials/programs/StdQuad_vp.glsl;/usr/share/gazebo-10/media/materials/programs/spot_shadow_receiver_fp.glsl;/usr/share/gazebo-10/media/materials/programs/spot_shadow_receiver_vp.glsl;/usr/share/gazebo-10/media/materials/programs/wide_lens_map_fp.glsl;/usr/share/gazebo-10/media/materials/programs/wide_lens_map_vs.glsl")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/share/gazebo-10/media/materials/programs" TYPE FILE FILES
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/programs/ambient_one_texture_vp.glsl"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/programs/blur.glsl"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/programs/camera_distortion_map_fs.glsl"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/programs/camera_distortion_map_vs.glsl"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/programs/camera_lens_flare_fs.glsl"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/programs/camera_lens_flare_vs.glsl"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/programs/camera_noise_gaussian_fs.glsl"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/programs/camera_noise_gaussian_vs.glsl"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/programs/CreaseShadingFP.glsl"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/programs/deform_fp.glsl"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/programs/deform_vp.glsl"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/programs/depth_map.frag"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/programs/depth_map.vert"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/programs/depth_points_map.frag"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/programs/depth_points_map.vert"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/programs/directional_shadow_receiver_fp.glsl"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/programs/directional_shadow_receiver_vp.glsl"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/programs/GBufferFP.glsl"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/programs/GBufferVP.glsl"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/programs/grid_fp.glsl"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/programs/grid_vp.glsl"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/programs/laser_1st_pass_dbg.frag"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/programs/laser_1st_pass.frag"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/programs/laser_1st_pass.vert"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/programs/laser_2nd_pass.frag"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/programs/laser_2nd_pass.vert"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/programs/ModulateFP.glsl"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/programs/NoFilterFP.glsl"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/programs/oculus.cg"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/programs/OculusDistortionFragment.glsl"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/programs/OculusDistortionVertex.glsl"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/programs/perpixel_fp.glsl"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/programs/perpixel_vp.glsl"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/programs/plain_color_fs.glsl"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/programs/plain_color_vs.glsl"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/programs/point_receiver_fp.glsl"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/programs/point_receiver_vp.glsl"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/programs/projector.frag"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/programs/projector.vert"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/programs/shadow_caster_fp.glsl"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/programs/shadow_caster_vp.glsl"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/programs/StdQuad_vp.glsl"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/programs/spot_shadow_receiver_fp.glsl"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/programs/spot_shadow_receiver_vp.glsl"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/programs/wide_lens_map_fp.glsl"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/programs/wide_lens_map_vs.glsl"
    )
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/media/materials/programs/deferred_rendering/cmake_install.cmake")

endif()

