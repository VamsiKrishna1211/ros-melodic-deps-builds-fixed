# CMake generated Testfile for 
# Source directory: /home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/tools
# Build directory: /home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/tools
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(UNIT_gz_log_TEST "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/tools/UNIT_gz_log_TEST" "--gtest_output=xml:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/test_results/UNIT_gz_log_TEST.xml")
set_tests_properties(UNIT_gz_log_TEST PROPERTIES  ENVIRONMENT "CMAKE_PREFIX_PATH=/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build:;GAZEBO_PLUGIN_PATH=/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins/events:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins/rest_web;GAZEBO_RESOURCE_PATH=/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0;PATH=/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/tools:/home/vamsik1211/.local/bin:/usr/local/sbin:/usr/local/bin:/usr/bin:/opt/jdk-11.0.1/bin:/usr/bin/site_perl:/usr/bin/vendor_perl:/usr/bin/core_perl:/var/lib/snapd/snap/bin;PKG_CONFIG_PATH=/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/cmake/pkgconfig:" TIMEOUT "240" _BACKTRACE_TRIPLES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/cmake/GazeboTestUtils.cmake;58;add_test;/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/tools/CMakeLists.txt;42;gz_build_tests;/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/tools/CMakeLists.txt;0;")
add_test(check_UNIT_gz_log_TEST "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/tools/check_test_ran.py" "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/test_results/UNIT_gz_log_TEST.xml")
set_tests_properties(check_UNIT_gz_log_TEST PROPERTIES  _BACKTRACE_TRIPLES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/cmake/GazeboTestUtils.cmake;73;add_test;/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/tools/CMakeLists.txt;42;gz_build_tests;/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/tools/CMakeLists.txt;0;")
add_test(UNIT_gz_TEST "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/tools/UNIT_gz_TEST" "--gtest_output=xml:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/test_results/UNIT_gz_TEST.xml")
set_tests_properties(UNIT_gz_TEST PROPERTIES  ENVIRONMENT "CMAKE_PREFIX_PATH=/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build:;GAZEBO_PLUGIN_PATH=/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins/events:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins/rest_web;GAZEBO_RESOURCE_PATH=/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0;PATH=/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo:/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/tools:/home/vamsik1211/.local/bin:/usr/local/sbin:/usr/local/bin:/usr/bin:/opt/jdk-11.0.1/bin:/usr/bin/site_perl:/usr/bin/vendor_perl:/usr/bin/core_perl:/var/lib/snapd/snap/bin;PKG_CONFIG_PATH=/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/cmake/pkgconfig:" TIMEOUT "240" _BACKTRACE_TRIPLES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/cmake/GazeboTestUtils.cmake;58;add_test;/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/tools/CMakeLists.txt;42;gz_build_tests;/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/tools/CMakeLists.txt;0;")
add_test(check_UNIT_gz_TEST "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/tools/check_test_ran.py" "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/test_results/UNIT_gz_TEST.xml")
set_tests_properties(check_UNIT_gz_TEST PROPERTIES  _BACKTRACE_TRIPLES "/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/cmake/GazeboTestUtils.cmake;73;add_test;/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/tools/CMakeLists.txt;42;gz_build_tests;/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/tools/CMakeLists.txt;0;")
