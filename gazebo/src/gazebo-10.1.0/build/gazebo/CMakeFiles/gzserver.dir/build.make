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
include gazebo/CMakeFiles/gzserver.dir/depend.make

# Include the progress variables for this target.
include gazebo/CMakeFiles/gzserver.dir/progress.make

# Include the compile flags for this target's objects.
include gazebo/CMakeFiles/gzserver.dir/flags.make

gazebo/CMakeFiles/gzserver.dir/server_main.cc.o: gazebo/CMakeFiles/gzserver.dir/flags.make
gazebo/CMakeFiles/gzserver.dir/server_main.cc.o: ../gazebo/server_main.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object gazebo/CMakeFiles/gzserver.dir/server_main.cc.o"
	cd /home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/gzserver.dir/server_main.cc.o -c /home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/server_main.cc

gazebo/CMakeFiles/gzserver.dir/server_main.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gzserver.dir/server_main.cc.i"
	cd /home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/server_main.cc > CMakeFiles/gzserver.dir/server_main.cc.i

gazebo/CMakeFiles/gzserver.dir/server_main.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gzserver.dir/server_main.cc.s"
	cd /home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo/server_main.cc -o CMakeFiles/gzserver.dir/server_main.cc.s

# Object files for target gzserver
gzserver_OBJECTS = \
"CMakeFiles/gzserver.dir/server_main.cc.o"

# External object files for target gzserver
gzserver_EXTERNAL_OBJECTS =

gazebo/gzserver-10.1.0: gazebo/CMakeFiles/gzserver.dir/server_main.cc.o
gazebo/gzserver-10.1.0: gazebo/CMakeFiles/gzserver.dir/build.make
gazebo/gzserver-10.1.0: gazebo/libgazebo.so.10.1.0
gazebo/gzserver-10.1.0: gazebo/sensors/libgazebo_sensors.so.10.1.0
gazebo/gzserver-10.1.0: gazebo/rendering/libgazebo_rendering.so.10.1.0
gazebo/gzserver-10.1.0: /usr/lib/libfreeimage.so
gazebo/gzserver-10.1.0: /usr/lib/libtbb.so
gazebo/gzserver-10.1.0: gazebo/physics/libgazebo_physics.so.10.1.0
gazebo/gzserver-10.1.0: gazebo/util/libgazebo_util.so.10.1.0
gazebo/gzserver-10.1.0: deps/opende/libgazebo_ode.so.10.1.0
gazebo/gzserver-10.1.0: deps/opende/GIMPACT/libgazebo_gimpact.so.10.1.0
gazebo/gzserver-10.1.0: deps/opende/ou/libgazebo_opende_ou.so.10.1.0
gazebo/gzserver-10.1.0: deps/opende/OPCODE/libgazebo_opcode.so.10.1.0
gazebo/gzserver-10.1.0: gazebo/transport/libgazebo_transport.so.10.1.0
gazebo/gzserver-10.1.0: /usr/lib/libignition-transport4.so.4.0.0
gazebo/gzserver-10.1.0: /usr/lib/libGL.so
gazebo/gzserver-10.1.0: /usr/lib/libGLU.so
gazebo/gzserver-10.1.0: gazebo/msgs/libgazebo_msgs.so.10.1.0
gazebo/gzserver-10.1.0: gazebo/common/libgazebo_common.so.10.1.0
gazebo/gzserver-10.1.0: /usr/lib/libdl.so
gazebo/gzserver-10.1.0: /usr/lib/libfreeimage.so
gazebo/gzserver-10.1.0: /usr/lib64/libboost_thread.so.1.71.0
gazebo/gzserver-10.1.0: /usr/lib64/libboost_system.so.1.71.0
gazebo/gzserver-10.1.0: /usr/lib64/libboost_filesystem.so.1.71.0
gazebo/gzserver-10.1.0: /usr/lib64/libboost_program_options.so.1.71.0
gazebo/gzserver-10.1.0: /usr/lib64/libboost_regex.so.1.71.0
gazebo/gzserver-10.1.0: /usr/lib64/libboost_iostreams.so.1.71.0
gazebo/gzserver-10.1.0: /usr/lib64/libboost_date_time.so.1.71.0
gazebo/gzserver-10.1.0: /usr/lib/libcurl.so
gazebo/gzserver-10.1.0: /usr/lib/libtar.so
gazebo/gzserver-10.1.0: /usr/lib/libtbb.so
gazebo/gzserver-10.1.0: /usr/lib/libsdformat.so
gazebo/gzserver-10.1.0: /usr/lib/libignition-fuel_tools1.so.1.2.0
gazebo/gzserver-10.1.0: /usr/lib/libuuid.so
gazebo/gzserver-10.1.0: /usr/lib/libuuid.so
gazebo/gzserver-10.1.0: /usr/lib/libopenal.so
gazebo/gzserver-10.1.0: /usr/lib/libignition-msgs1.so.1.0.0
gazebo/gzserver-10.1.0: /usr/lib/libignition-math4.so.4.0.0
gazebo/gzserver-10.1.0: /usr/lib/libprotobuf.so
gazebo/gzserver-10.1.0: /usr/lib/libprotobuf.so
gazebo/gzserver-10.1.0: gazebo/CMakeFiles/gzserver.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable gzserver"
	cd /home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/gzserver.dir/link.txt --verbose=$(VERBOSE)
	cd /home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo && $(CMAKE_COMMAND) -E cmake_symlink_executable gzserver-10.1.0 gzserver

gazebo/gzserver: gazebo/gzserver-10.1.0


# Rule to build all files generated by this target.
gazebo/CMakeFiles/gzserver.dir/build: gazebo/gzserver

.PHONY : gazebo/CMakeFiles/gzserver.dir/build

gazebo/CMakeFiles/gzserver.dir/clean:
	cd /home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo && $(CMAKE_COMMAND) -P CMakeFiles/gzserver.dir/cmake_clean.cmake
.PHONY : gazebo/CMakeFiles/gzserver.dir/clean

gazebo/CMakeFiles/gzserver.dir/depend:
	cd /home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0 /home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/gazebo /home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build /home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo /home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/gazebo/CMakeFiles/gzserver.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : gazebo/CMakeFiles/gzserver.dir/depend
