# Install script for directory: /home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/worlds

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
   "/usr/share/gazebo-10/worlds/actor.world;/usr/share/gazebo-10/worlds/animated_box.world;/usr/share/gazebo-10/worlds/animation_tension.world;/usr/share/gazebo-10/worlds/attach_lights.world;/usr/share/gazebo-10/worlds/blank.world;/usr/share/gazebo-10/worlds/blink_visual.world;/usr/share/gazebo-10/worlds/cafe.world;/usr/share/gazebo-10/worlds/camera.world;/usr/share/gazebo-10/worlds/cart_demo.world;/usr/share/gazebo-10/worlds/cessna_demo.world;/usr/share/gazebo-10/worlds/contact.world;/usr/share/gazebo-10/worlds/contain_plugin_demo.world;/usr/share/gazebo-10/worlds/contain_plugin_moving_demo.world;/usr/share/gazebo-10/worlds/deform_visual.world;/usr/share/gazebo-10/worlds/depth_camera.world;/usr/share/gazebo-10/worlds/elevator.world;/usr/share/gazebo-10/worlds/empty.world;/usr/share/gazebo-10/worlds/empty_1_0.world;/usr/share/gazebo-10/worlds/empty_bullet.world;/usr/share/gazebo-10/worlds/empty_sky.world;/usr/share/gazebo-10/worlds/everything.world;/usr/share/gazebo-10/worlds/fiducial.world;/usr/share/gazebo-10/worlds/flash_light_plugin_demo.world;/usr/share/gazebo-10/worlds/flocking.world;/usr/share/gazebo-10/worlds/force_torque_demo.world;/usr/share/gazebo-10/worlds/friction_demo.world;/usr/share/gazebo-10/worlds/gravity_compensation.world;/usr/share/gazebo-10/worlds/gripper.world;/usr/share/gazebo-10/worlds/harness.world;/usr/share/gazebo-10/worlds/heightmap.world;/usr/share/gazebo-10/worlds/heightmap_dem.world;/usr/share/gazebo-10/worlds/hydra_demo.world;/usr/share/gazebo-10/worlds/imu_demo.world;/usr/share/gazebo-10/worlds/init_joint_control.world;/usr/share/gazebo-10/worlds/initial_velocity.world;/usr/share/gazebo-10/worlds/iris_arducopter_demo.world;/usr/share/gazebo-10/worlds/joint_damping_demo.world;/usr/share/gazebo-10/worlds/joint_friction_demo.world;/usr/share/gazebo-10/worlds/joints.world;/usr/share/gazebo-10/worlds/joy_demo.world;/usr/share/gazebo-10/worlds/keys_to_cmd_vel.world;/usr/share/gazebo-10/worlds/led_plugin_demo.world;/usr/share/gazebo-10/worlds/lensflare_plugin.world;/usr/share/gazebo-10/worlds/lift_drag_demo.world;/usr/share/gazebo-10/worlds/lights.world;/usr/share/gazebo-10/worlds/linear_battery_demo.world;/usr/share/gazebo-10/worlds/logical_camera.world;/usr/share/gazebo-10/worlds/lookat_demo.world;/usr/share/gazebo-10/worlds/magnetometer.world;/usr/share/gazebo-10/worlds/mass_on_rails.world;/usr/share/gazebo-10/worlds/misalignment_plugin_demo.world;/usr/share/gazebo-10/worlds/mud.world;/usr/share/gazebo-10/worlds/mud_bitmask.world;/usr/share/gazebo-10/worlds/multilink_shape.world;/usr/share/gazebo-10/worlds/nested_model.world;/usr/share/gazebo-10/worlds/openal.world;/usr/share/gazebo-10/worlds/ortho.world;/usr/share/gazebo-10/worlds/osrf_elevator.world;/usr/share/gazebo-10/worlds/pioneer2dx.world;/usr/share/gazebo-10/worlds/pioneer2dx_camera.world;/usr/share/gazebo-10/worlds/pioneer2dx_laser.world;/usr/share/gazebo-10/worlds/pioneer2dx_laser_camera.world;/usr/share/gazebo-10/worlds/plane_demo.world;/usr/share/gazebo-10/worlds/plane_propeller_demo.world;/usr/share/gazebo-10/worlds/plot3d.world;/usr/share/gazebo-10/worlds/plugin.world;/usr/share/gazebo-10/worlds/polyline.world;/usr/share/gazebo-10/worlds/population.world;/usr/share/gazebo-10/worlds/pr2.world;/usr/share/gazebo-10/worlds/presentation.world;/usr/share/gazebo-10/worlds/pressure_sensor.world;/usr/share/gazebo-10/worlds/projector.world;/usr/share/gazebo-10/worlds/random_velocity.world;/usr/share/gazebo-10/worlds/ray_cpu.world;/usr/share/gazebo-10/worlds/ray_noise_plugin.world;/usr/share/gazebo-10/worlds/road.world;/usr/share/gazebo-10/worlds/road_textures.world;/usr/share/gazebo-10/worlds/robocup09_spl_field.world;/usr/share/gazebo-10/worlds/robocup14_spl_field.world;/usr/share/gazebo-10/worlds/robocup_3Dsim.world;/usr/share/gazebo-10/worlds/rubble.world;/usr/share/gazebo-10/worlds/seesaw.world;/usr/share/gazebo-10/worlds/shapes.world;/usr/share/gazebo-10/worlds/shapes_bitmask.world;/usr/share/gazebo-10/worlds/shapes_layers.world;/usr/share/gazebo-10/worlds/sim_events.world;/usr/share/gazebo-10/worlds/simple_arm.world;/usr/share/gazebo-10/worlds/simple_arm_teleop.world;/usr/share/gazebo-10/worlds/simple_gripper.world;/usr/share/gazebo-10/worlds/single_rotor_demo.world;/usr/share/gazebo-10/worlds/sonar_demo.world;/usr/share/gazebo-10/worlds/sphere_atlas_demo.world;/usr/share/gazebo-10/worlds/ssao_plugin.world;/usr/share/gazebo-10/worlds/stacks.world;/usr/share/gazebo-10/worlds/static_map_plugin.world;/usr/share/gazebo-10/worlds/timer_gui.world;/usr/share/gazebo-10/worlds/torsional_friction_demo.world;/usr/share/gazebo-10/worlds/touch_plugin_demo.world;/usr/share/gazebo-10/worlds/transporter.world;/usr/share/gazebo-10/worlds/trigger.world;/usr/share/gazebo-10/worlds/twin_rotor_demo.world;/usr/share/gazebo-10/worlds/underwater.world;/usr/share/gazebo-10/worlds/willowgarage.world;/usr/share/gazebo-10/worlds/wind_demo.world;/usr/share/gazebo-10/worlds/wireless_sensors.world;/usr/share/gazebo-10/worlds/zephyr_demo.world")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/share/gazebo-10/worlds" TYPE FILE FILES
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/worlds/actor.world"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/worlds/animated_box.world"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/worlds/animation_tension.world"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/worlds/attach_lights.world"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/worlds/blank.world"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/worlds/blink_visual.world"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/worlds/cafe.world"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/worlds/camera.world"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/worlds/cart_demo.world"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/worlds/cessna_demo.world"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/worlds/contact.world"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/worlds/contain_plugin_demo.world"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/worlds/contain_plugin_moving_demo.world"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/worlds/deform_visual.world"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/worlds/depth_camera.world"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/worlds/elevator.world"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/worlds/empty.world"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/worlds/empty_1_0.world"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/worlds/empty_bullet.world"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/worlds/empty_sky.world"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/worlds/everything.world"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/worlds/fiducial.world"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/worlds/flash_light_plugin_demo.world"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/worlds/flocking.world"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/worlds/force_torque_demo.world"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/worlds/friction_demo.world"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/worlds/gravity_compensation.world"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/worlds/gripper.world"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/worlds/harness.world"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/worlds/heightmap.world"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/worlds/heightmap_dem.world"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/worlds/hydra_demo.world"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/worlds/imu_demo.world"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/worlds/init_joint_control.world"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/worlds/initial_velocity.world"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/worlds/iris_arducopter_demo.world"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/worlds/joint_damping_demo.world"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/worlds/joint_friction_demo.world"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/worlds/joints.world"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/worlds/joy_demo.world"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/worlds/keys_to_cmd_vel.world"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/worlds/led_plugin_demo.world"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/worlds/lensflare_plugin.world"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/worlds/lift_drag_demo.world"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/worlds/lights.world"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/worlds/linear_battery_demo.world"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/worlds/logical_camera.world"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/worlds/lookat_demo.world"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/worlds/magnetometer.world"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/worlds/mass_on_rails.world"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/worlds/misalignment_plugin_demo.world"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/worlds/mud.world"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/worlds/mud_bitmask.world"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/worlds/multilink_shape.world"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/worlds/nested_model.world"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/worlds/openal.world"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/worlds/ortho.world"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/worlds/osrf_elevator.world"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/worlds/pioneer2dx.world"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/worlds/pioneer2dx_camera.world"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/worlds/pioneer2dx_laser.world"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/worlds/pioneer2dx_laser_camera.world"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/worlds/plane_demo.world"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/worlds/plane_propeller_demo.world"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/worlds/plot3d.world"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/worlds/plugin.world"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/worlds/polyline.world"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/worlds/population.world"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/worlds/pr2.world"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/worlds/presentation.world"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/worlds/pressure_sensor.world"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/worlds/projector.world"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/worlds/random_velocity.world"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/worlds/ray_cpu.world"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/worlds/ray_noise_plugin.world"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/worlds/road.world"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/worlds/road_textures.world"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/worlds/robocup09_spl_field.world"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/worlds/robocup14_spl_field.world"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/worlds/robocup_3Dsim.world"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/worlds/rubble.world"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/worlds/seesaw.world"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/worlds/shapes.world"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/worlds/shapes_bitmask.world"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/worlds/shapes_layers.world"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/worlds/sim_events.world"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/worlds/simple_arm.world"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/worlds/simple_arm_teleop.world"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/worlds/simple_gripper.world"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/worlds/single_rotor_demo.world"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/worlds/sonar_demo.world"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/worlds/sphere_atlas_demo.world"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/worlds/ssao_plugin.world"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/worlds/stacks.world"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/worlds/static_map_plugin.world"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/worlds/timer_gui.world"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/worlds/torsional_friction_demo.world"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/worlds/touch_plugin_demo.world"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/worlds/transporter.world"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/worlds/trigger.world"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/worlds/twin_rotor_demo.world"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/worlds/underwater.world"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/worlds/willowgarage.world"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/worlds/wind_demo.world"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/worlds/wireless_sensors.world"
    "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/worlds/zephyr_demo.world"
    )
endif()

