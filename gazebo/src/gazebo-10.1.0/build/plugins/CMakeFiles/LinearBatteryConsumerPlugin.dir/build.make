# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build

# Include any dependencies generated for this target.
include plugins/CMakeFiles/LinearBatteryConsumerPlugin.dir/depend.make

# Include the progress variables for this target.
include plugins/CMakeFiles/LinearBatteryConsumerPlugin.dir/progress.make

# Include the compile flags for this target's objects.
include plugins/CMakeFiles/LinearBatteryConsumerPlugin.dir/flags.make

plugins/CMakeFiles/LinearBatteryConsumerPlugin.dir/LinearBatteryConsumerPlugin_autogen/mocs_compilation.cpp.o: plugins/CMakeFiles/LinearBatteryConsumerPlugin.dir/flags.make
plugins/CMakeFiles/LinearBatteryConsumerPlugin.dir/LinearBatteryConsumerPlugin_autogen/mocs_compilation.cpp.o: plugins/LinearBatteryConsumerPlugin_autogen/mocs_compilation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object plugins/CMakeFiles/LinearBatteryConsumerPlugin.dir/LinearBatteryConsumerPlugin_autogen/mocs_compilation.cpp.o"
	cd /home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LinearBatteryConsumerPlugin.dir/LinearBatteryConsumerPlugin_autogen/mocs_compilation.cpp.o -c /home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins/LinearBatteryConsumerPlugin_autogen/mocs_compilation.cpp

plugins/CMakeFiles/LinearBatteryConsumerPlugin.dir/LinearBatteryConsumerPlugin_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LinearBatteryConsumerPlugin.dir/LinearBatteryConsumerPlugin_autogen/mocs_compilation.cpp.i"
	cd /home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins/LinearBatteryConsumerPlugin_autogen/mocs_compilation.cpp > CMakeFiles/LinearBatteryConsumerPlugin.dir/LinearBatteryConsumerPlugin_autogen/mocs_compilation.cpp.i

plugins/CMakeFiles/LinearBatteryConsumerPlugin.dir/LinearBatteryConsumerPlugin_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LinearBatteryConsumerPlugin.dir/LinearBatteryConsumerPlugin_autogen/mocs_compilation.cpp.s"
	cd /home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins/LinearBatteryConsumerPlugin_autogen/mocs_compilation.cpp -o CMakeFiles/LinearBatteryConsumerPlugin.dir/LinearBatteryConsumerPlugin_autogen/mocs_compilation.cpp.s

plugins/CMakeFiles/LinearBatteryConsumerPlugin.dir/LinearBatteryConsumerPlugin.cc.o: plugins/CMakeFiles/LinearBatteryConsumerPlugin.dir/flags.make
plugins/CMakeFiles/LinearBatteryConsumerPlugin.dir/LinearBatteryConsumerPlugin.cc.o: ../plugins/LinearBatteryConsumerPlugin.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object plugins/CMakeFiles/LinearBatteryConsumerPlugin.dir/LinearBatteryConsumerPlugin.cc.o"
	cd /home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LinearBatteryConsumerPlugin.dir/LinearBatteryConsumerPlugin.cc.o -c /home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/plugins/LinearBatteryConsumerPlugin.cc

plugins/CMakeFiles/LinearBatteryConsumerPlugin.dir/LinearBatteryConsumerPlugin.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LinearBatteryConsumerPlugin.dir/LinearBatteryConsumerPlugin.cc.i"
	cd /home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/plugins/LinearBatteryConsumerPlugin.cc > CMakeFiles/LinearBatteryConsumerPlugin.dir/LinearBatteryConsumerPlugin.cc.i

plugins/CMakeFiles/LinearBatteryConsumerPlugin.dir/LinearBatteryConsumerPlugin.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LinearBatteryConsumerPlugin.dir/LinearBatteryConsumerPlugin.cc.s"
	cd /home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/plugins/LinearBatteryConsumerPlugin.cc -o CMakeFiles/LinearBatteryConsumerPlugin.dir/LinearBatteryConsumerPlugin.cc.s

# Object files for target LinearBatteryConsumerPlugin
LinearBatteryConsumerPlugin_OBJECTS = \
"CMakeFiles/LinearBatteryConsumerPlugin.dir/LinearBatteryConsumerPlugin_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/LinearBatteryConsumerPlugin.dir/LinearBatteryConsumerPlugin.cc.o"

# External object files for target LinearBatteryConsumerPlugin
LinearBatteryConsumerPlugin_EXTERNAL_OBJECTS =

plugins/libLinearBatteryConsumerPlugin.so: plugins/CMakeFiles/LinearBatteryConsumerPlugin.dir/LinearBatteryConsumerPlugin_autogen/mocs_compilation.cpp.o
plugins/libLinearBatteryConsumerPlugin.so: plugins/CMakeFiles/LinearBatteryConsumerPlugin.dir/LinearBatteryConsumerPlugin.cc.o
plugins/libLinearBatteryConsumerPlugin.so: plugins/CMakeFiles/LinearBatteryConsumerPlugin.dir/build.make
plugins/libLinearBatteryConsumerPlugin.so: gazebo/libgazebo.so.10.1.0
plugins/libLinearBatteryConsumerPlugin.so: gazebo/sensors/libgazebo_sensors.so.10.1.0
plugins/libLinearBatteryConsumerPlugin.so: gazebo/physics/libgazebo_physics.so.10.1.0
plugins/libLinearBatteryConsumerPlugin.so: gazebo/util/libgazebo_util.so.10.1.0
plugins/libLinearBatteryConsumerPlugin.so: deps/opende/libgazebo_ode.so.10.1.0
plugins/libLinearBatteryConsumerPlugin.so: deps/opende/GIMPACT/libgazebo_gimpact.so.10.1.0
plugins/libLinearBatteryConsumerPlugin.so: deps/opende/ou/libgazebo_opende_ou.so.10.1.0
plugins/libLinearBatteryConsumerPlugin.so: deps/opende/OPCODE/libgazebo_opcode.so.10.1.0
plugins/libLinearBatteryConsumerPlugin.so: gazebo/rendering/libgazebo_rendering.so.10.1.0
plugins/libLinearBatteryConsumerPlugin.so: /usr/lib/libignition-transport4.so.4.0.0
plugins/libLinearBatteryConsumerPlugin.so: gazebo/transport/libgazebo_transport.so.10.1.0
plugins/libLinearBatteryConsumerPlugin.so: /usr/lib/libGL.so
plugins/libLinearBatteryConsumerPlugin.so: /usr/lib/libGLU.so
plugins/libLinearBatteryConsumerPlugin.so: gazebo/msgs/libgazebo_msgs.so.10.1.0
plugins/libLinearBatteryConsumerPlugin.so: gazebo/common/libgazebo_common.so.10.1.0
plugins/libLinearBatteryConsumerPlugin.so: /usr/lib/libdl.so
plugins/libLinearBatteryConsumerPlugin.so: /usr/lib64/libboost_thread.so.1.71.0
plugins/libLinearBatteryConsumerPlugin.so: /usr/lib64/libboost_system.so.1.71.0
plugins/libLinearBatteryConsumerPlugin.so: /usr/lib64/libboost_filesystem.so.1.71.0
plugins/libLinearBatteryConsumerPlugin.so: /usr/lib64/libboost_program_options.so.1.71.0
plugins/libLinearBatteryConsumerPlugin.so: /usr/lib64/libboost_regex.so.1.71.0
plugins/libLinearBatteryConsumerPlugin.so: /usr/lib64/libboost_iostreams.so.1.71.0
plugins/libLinearBatteryConsumerPlugin.so: /usr/lib64/libboost_date_time.so.1.71.0
plugins/libLinearBatteryConsumerPlugin.so: /usr/lib/libfreeimage.so
plugins/libLinearBatteryConsumerPlugin.so: /usr/lib/libcurl.so
plugins/libLinearBatteryConsumerPlugin.so: /usr/lib/libtar.so
plugins/libLinearBatteryConsumerPlugin.so: /usr/lib/libtbb.so
plugins/libLinearBatteryConsumerPlugin.so: /usr/lib/libsdformat.so
plugins/libLinearBatteryConsumerPlugin.so: /usr/lib/libignition-fuel_tools1.so.1.2.0
plugins/libLinearBatteryConsumerPlugin.so: /usr/lib/libuuid.so
plugins/libLinearBatteryConsumerPlugin.so: /usr/lib/libuuid.so
plugins/libLinearBatteryConsumerPlugin.so: /usr/lib/libopenal.so
plugins/libLinearBatteryConsumerPlugin.so: /usr/lib/libignition-msgs1.so.1.0.0
plugins/libLinearBatteryConsumerPlugin.so: /usr/lib/libignition-math4.so.4.0.0
plugins/libLinearBatteryConsumerPlugin.so: /usr/lib/libprotobuf.so
plugins/libLinearBatteryConsumerPlugin.so: /usr/lib/libprotobuf.so
plugins/libLinearBatteryConsumerPlugin.so: plugins/CMakeFiles/LinearBatteryConsumerPlugin.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX shared library libLinearBatteryConsumerPlugin.so"
	cd /home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/LinearBatteryConsumerPlugin.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
plugins/CMakeFiles/LinearBatteryConsumerPlugin.dir/build: plugins/libLinearBatteryConsumerPlugin.so

.PHONY : plugins/CMakeFiles/LinearBatteryConsumerPlugin.dir/build

plugins/CMakeFiles/LinearBatteryConsumerPlugin.dir/clean:
	cd /home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins && $(CMAKE_COMMAND) -P CMakeFiles/LinearBatteryConsumerPlugin.dir/cmake_clean.cmake
.PHONY : plugins/CMakeFiles/LinearBatteryConsumerPlugin.dir/clean

plugins/CMakeFiles/LinearBatteryConsumerPlugin.dir/depend:
	cd /home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0 /home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/plugins /home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build /home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins /home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins/CMakeFiles/LinearBatteryConsumerPlugin.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : plugins/CMakeFiles/LinearBatteryConsumerPlugin.dir/depend

