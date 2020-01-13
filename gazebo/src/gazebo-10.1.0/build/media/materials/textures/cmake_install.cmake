# Install script for directory: /home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/textures

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
   "/usr/share/gazebo-10/media/materials/textures/beigeWall.jpg;/usr/share/gazebo-10/media/materials/textures/building_frame.png;/usr/share/gazebo-10/media/materials/textures/bricks.png;/usr/share/gazebo-10/media/materials/textures/ceiling_tiled.jpg;/usr/share/gazebo-10/media/materials/textures/clouds.jpg;/usr/share/gazebo-10/media/materials/textures/com.png;/usr/share/gazebo-10/media/materials/textures/dirt_diffusespecular.png;/usr/share/gazebo-10/media/materials/textures/dirt_normal.png;/usr/share/gazebo-10/media/materials/textures/flat_normal.png;/usr/share/gazebo-10/media/materials/textures/fungus_diffusespecular.png;/usr/share/gazebo-10/media/materials/textures/fungus_normal.png;/usr/share/gazebo-10/media/materials/textures/granite2.jpg;/usr/share/gazebo-10/media/materials/textures/granite.jpg;/usr/share/gazebo-10/media/materials/textures/grass_diffusespecular.png;/usr/share/gazebo-10/media/materials/textures/grass.jpg;/usr/share/gazebo-10/media/materials/textures/grass_normal.png;/usr/share/gazebo-10/media/materials/textures/hardwood_floor.jpg;/usr/share/gazebo-10/media/materials/textures/heightmap_bowl.png;/usr/share/gazebo-10/media/materials/textures/heightmap_valley.png;/usr/share/gazebo-10/media/materials/textures/motorway.jpg;/usr/share/gazebo-10/media/materials/textures/noise_rgba.png;/usr/share/gazebo-10/media/materials/textures/paintedWall.jpg;/usr/share/gazebo-10/media/materials/textures/pioneerBody.jpg;/usr/share/gazebo-10/media/materials/textures/primary.jpg;/usr/share/gazebo-10/media/materials/textures/projection_filter.png;/usr/share/gazebo-10/media/materials/textures/rand1x32.png;/usr/share/gazebo-10/media/materials/textures/random.png;/usr/share/gazebo-10/media/materials/textures/residential.jpg;/usr/share/gazebo-10/media/materials/textures/road1.jpg;/usr/share/gazebo-10/media/materials/textures/runway.png;/usr/share/gazebo-10/media/materials/textures/secondary.jpg;/usr/share/gazebo-10/media/materials/textures/sidewalk.jpg;/usr/share/gazebo-10/media/materials/textures/steps.jpeg;/usr/share/gazebo-10/media/materials/textures/stereo_projection_pattern_high_res.png;/usr/share/gazebo-10/media/materials/textures/stereo_projection_pattern_high_res_red.png;/usr/share/gazebo-10/media/materials/textures/terrain_detail.jpg;/usr/share/gazebo-10/media/materials/textures/terrain.png;/usr/share/gazebo-10/media/materials/textures/trunk.jpg;/usr/share/gazebo-10/media/materials/textures/white.bmp;/usr/share/gazebo-10/media/materials/textures/willowMap.png;/usr/share/gazebo-10/media/materials/textures/wood.jpg;/usr/share/gazebo-10/media/materials/textures/WoodPallet.png")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/share/gazebo-10/media/materials/textures" TYPE FILE FILES
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/textures/beigeWall.jpg"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/textures/building_frame.png"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/textures/bricks.png"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/textures/ceiling_tiled.jpg"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/textures/clouds.jpg"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/textures/com.png"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/textures/dirt_diffusespecular.png"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/textures/dirt_normal.png"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/textures/flat_normal.png"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/textures/fungus_diffusespecular.png"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/textures/fungus_normal.png"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/textures/granite2.jpg"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/textures/granite.jpg"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/textures/grass_diffusespecular.png"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/textures/grass.jpg"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/textures/grass_normal.png"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/textures/hardwood_floor.jpg"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/textures/heightmap_bowl.png"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/textures/heightmap_valley.png"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/textures/motorway.jpg"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/textures/noise_rgba.png"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/textures/paintedWall.jpg"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/textures/pioneerBody.jpg"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/textures/primary.jpg"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/textures/projection_filter.png"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/textures/rand1x32.png"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/textures/random.png"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/textures/residential.jpg"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/textures/road1.jpg"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/textures/runway.png"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/textures/secondary.jpg"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/textures/sidewalk.jpg"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/textures/steps.jpeg"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/textures/stereo_projection_pattern_high_res.png"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/textures/stereo_projection_pattern_high_res_red.png"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/textures/terrain_detail.jpg"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/textures/terrain.png"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/textures/trunk.jpg"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/textures/white.bmp"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/textures/willowMap.png"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/textures/wood.jpg"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/media/materials/textures/WoodPallet.png"
    )
endif()

