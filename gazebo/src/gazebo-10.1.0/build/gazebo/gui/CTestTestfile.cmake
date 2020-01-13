# CMake generated Testfile for 
# Source directory: /home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/gui
# Build directory: /home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/gui
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(UNIT_Conversions_TEST "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/gui/UNIT_Conversions_TEST" "--gtest_output=xml:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/test_results/UNIT_Conversions_TEST.xml")
set_tests_properties(UNIT_Conversions_TEST PROPERTIES  ENVIRONMENT "CMAKE_PREFIX_PATH=/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build:;GAZEBO_PLUGIN_PATH=/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins/events:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins/rest_web;GAZEBO_RESOURCE_PATH=/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0;PATH=/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/tools:/home/vamsik1211/.local/bin:/usr/local/sbin:/usr/local/bin:/usr/bin:/opt/jdk-11.0.1/bin:/usr/bin/site_perl:/usr/bin/vendor_perl:/usr/bin/core_perl:/var/lib/snapd/snap/bin;PKG_CONFIG_PATH=/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/cmake/pkgconfig:" TIMEOUT "240" _BACKTRACE_TRIPLES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/cmake/GazeboTestUtils.cmake;58;add_test;/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/gui/CMakeLists.txt;243;gz_build_tests;/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/gui/CMakeLists.txt;0;")
add_test(check_UNIT_Conversions_TEST "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/tools/check_test_ran.py" "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/test_results/UNIT_Conversions_TEST.xml")
set_tests_properties(check_UNIT_Conversions_TEST PROPERTIES  _BACKTRACE_TRIPLES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/cmake/GazeboTestUtils.cmake;73;add_test;/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/gui/CMakeLists.txt;243;gz_build_tests;/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/gui/CMakeLists.txt;0;")
subdirs("qtpropertybrowser")
subdirs("viewers")
subdirs("terrain")
subdirs("building")
subdirs("model")
subdirs("plot")
subdirs("qgv")
