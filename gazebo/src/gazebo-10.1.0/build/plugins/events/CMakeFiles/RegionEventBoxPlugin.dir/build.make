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
include plugins/events/CMakeFiles/RegionEventBoxPlugin.dir/depend.make

# Include the progress variables for this target.
include plugins/events/CMakeFiles/RegionEventBoxPlugin.dir/progress.make

# Include the compile flags for this target's objects.
include plugins/events/CMakeFiles/RegionEventBoxPlugin.dir/flags.make

plugins/events/CMakeFiles/RegionEventBoxPlugin.dir/RegionEventBoxPlugin_autogen/mocs_compilation.cpp.o: plugins/events/CMakeFiles/RegionEventBoxPlugin.dir/flags.make
plugins/events/CMakeFiles/RegionEventBoxPlugin.dir/RegionEventBoxPlugin_autogen/mocs_compilation.cpp.o: plugins/events/RegionEventBoxPlugin_autogen/mocs_compilation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object plugins/events/CMakeFiles/RegionEventBoxPlugin.dir/RegionEventBoxPlugin_autogen/mocs_compilation.cpp.o"
	cd /home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins/events && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RegionEventBoxPlugin.dir/RegionEventBoxPlugin_autogen/mocs_compilation.cpp.o -c /home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins/events/RegionEventBoxPlugin_autogen/mocs_compilation.cpp

plugins/events/CMakeFiles/RegionEventBoxPlugin.dir/RegionEventBoxPlugin_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RegionEventBoxPlugin.dir/RegionEventBoxPlugin_autogen/mocs_compilation.cpp.i"
	cd /home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins/events && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins/events/RegionEventBoxPlugin_autogen/mocs_compilation.cpp > CMakeFiles/RegionEventBoxPlugin.dir/RegionEventBoxPlugin_autogen/mocs_compilation.cpp.i

plugins/events/CMakeFiles/RegionEventBoxPlugin.dir/RegionEventBoxPlugin_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RegionEventBoxPlugin.dir/RegionEventBoxPlugin_autogen/mocs_compilation.cpp.s"
	cd /home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins/events && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins/events/RegionEventBoxPlugin_autogen/mocs_compilation.cpp -o CMakeFiles/RegionEventBoxPlugin.dir/RegionEventBoxPlugin_autogen/mocs_compilation.cpp.s

plugins/events/CMakeFiles/RegionEventBoxPlugin.dir/EventSource.cc.o: plugins/events/CMakeFiles/RegionEventBoxPlugin.dir/flags.make
plugins/events/CMakeFiles/RegionEventBoxPlugin.dir/EventSource.cc.o: ../plugins/events/EventSource.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object plugins/events/CMakeFiles/RegionEventBoxPlugin.dir/EventSource.cc.o"
	cd /home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins/events && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RegionEventBoxPlugin.dir/EventSource.cc.o -c /home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/plugins/events/EventSource.cc

plugins/events/CMakeFiles/RegionEventBoxPlugin.dir/EventSource.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RegionEventBoxPlugin.dir/EventSource.cc.i"
	cd /home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins/events && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/plugins/events/EventSource.cc > CMakeFiles/RegionEventBoxPlugin.dir/EventSource.cc.i

plugins/events/CMakeFiles/RegionEventBoxPlugin.dir/EventSource.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RegionEventBoxPlugin.dir/EventSource.cc.s"
	cd /home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins/events && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/plugins/events/EventSource.cc -o CMakeFiles/RegionEventBoxPlugin.dir/EventSource.cc.s

plugins/events/CMakeFiles/RegionEventBoxPlugin.dir/RegionEventBoxPlugin.cc.o: plugins/events/CMakeFiles/RegionEventBoxPlugin.dir/flags.make
plugins/events/CMakeFiles/RegionEventBoxPlugin.dir/RegionEventBoxPlugin.cc.o: ../plugins/events/RegionEventBoxPlugin.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object plugins/events/CMakeFiles/RegionEventBoxPlugin.dir/RegionEventBoxPlugin.cc.o"
	cd /home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins/events && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RegionEventBoxPlugin.dir/RegionEventBoxPlugin.cc.o -c /home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/plugins/events/RegionEventBoxPlugin.cc

plugins/events/CMakeFiles/RegionEventBoxPlugin.dir/RegionEventBoxPlugin.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RegionEventBoxPlugin.dir/RegionEventBoxPlugin.cc.i"
	cd /home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins/events && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/plugins/events/RegionEventBoxPlugin.cc > CMakeFiles/RegionEventBoxPlugin.dir/RegionEventBoxPlugin.cc.i

plugins/events/CMakeFiles/RegionEventBoxPlugin.dir/RegionEventBoxPlugin.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RegionEventBoxPlugin.dir/RegionEventBoxPlugin.cc.s"
	cd /home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins/events && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/plugins/events/RegionEventBoxPlugin.cc -o CMakeFiles/RegionEventBoxPlugin.dir/RegionEventBoxPlugin.cc.s

# Object files for target RegionEventBoxPlugin
RegionEventBoxPlugin_OBJECTS = \
"CMakeFiles/RegionEventBoxPlugin.dir/RegionEventBoxPlugin_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/RegionEventBoxPlugin.dir/EventSource.cc.o" \
"CMakeFiles/RegionEventBoxPlugin.dir/RegionEventBoxPlugin.cc.o"

# External object files for target RegionEventBoxPlugin
RegionEventBoxPlugin_EXTERNAL_OBJECTS =

plugins/events/libRegionEventBoxPlugin.so: plugins/events/CMakeFiles/RegionEventBoxPlugin.dir/RegionEventBoxPlugin_autogen/mocs_compilation.cpp.o
plugins/events/libRegionEventBoxPlugin.so: plugins/events/CMakeFiles/RegionEventBoxPlugin.dir/EventSource.cc.o
plugins/events/libRegionEventBoxPlugin.so: plugins/events/CMakeFiles/RegionEventBoxPlugin.dir/RegionEventBoxPlugin.cc.o
plugins/events/libRegionEventBoxPlugin.so: plugins/events/CMakeFiles/RegionEventBoxPlugin.dir/build.make
plugins/events/libRegionEventBoxPlugin.so: gazebo/physics/libgazebo_physics.so.10.1.0
plugins/events/libRegionEventBoxPlugin.so: gazebo/util/libgazebo_util.so.10.1.0
plugins/events/libRegionEventBoxPlugin.so: gazebo/transport/libgazebo_transport.so.10.1.0
plugins/events/libRegionEventBoxPlugin.so: gazebo/msgs/libgazebo_msgs.so.10.1.0
plugins/events/libRegionEventBoxPlugin.so: /usr/lib/libprotobuf.so
plugins/events/libRegionEventBoxPlugin.so: gazebo/common/libgazebo_common.so.10.1.0
plugins/events/libRegionEventBoxPlugin.so: /usr/lib/libdl.so
plugins/events/libRegionEventBoxPlugin.so: /usr/lib/libfreeimage.so
plugins/events/libRegionEventBoxPlugin.so: /usr/lib/libcurl.so
plugins/events/libRegionEventBoxPlugin.so: /usr/lib/libtar.so
plugins/events/libRegionEventBoxPlugin.so: /usr/lib/libsdformat.so
plugins/events/libRegionEventBoxPlugin.so: /usr/lib/libignition-fuel_tools1.so.1.2.0
plugins/events/libRegionEventBoxPlugin.so: /usr/lib/libopenal.so
plugins/events/libRegionEventBoxPlugin.so: /usr/lib/libtbb.so
plugins/events/libRegionEventBoxPlugin.so: deps/opende/libgazebo_ode.so.10.1.0
plugins/events/libRegionEventBoxPlugin.so: deps/opende/GIMPACT/libgazebo_gimpact.so.10.1.0
plugins/events/libRegionEventBoxPlugin.so: deps/opende/ou/libgazebo_opende_ou.so.10.1.0
plugins/events/libRegionEventBoxPlugin.so: deps/opende/OPCODE/libgazebo_opcode.so.10.1.0
plugins/events/libRegionEventBoxPlugin.so: /usr/lib64/libboost_thread.so.1.71.0
plugins/events/libRegionEventBoxPlugin.so: /usr/lib64/libboost_system.so.1.71.0
plugins/events/libRegionEventBoxPlugin.so: /usr/lib64/libboost_filesystem.so.1.71.0
plugins/events/libRegionEventBoxPlugin.so: /usr/lib64/libboost_program_options.so.1.71.0
plugins/events/libRegionEventBoxPlugin.so: /usr/lib64/libboost_regex.so.1.71.0
plugins/events/libRegionEventBoxPlugin.so: /usr/lib64/libboost_iostreams.so.1.71.0
plugins/events/libRegionEventBoxPlugin.so: /usr/lib64/libboost_date_time.so.1.71.0
plugins/events/libRegionEventBoxPlugin.so: /usr/lib/libignition-transport4.so.4.0.0
plugins/events/libRegionEventBoxPlugin.so: /usr/lib/libignition-msgs1.so.1.0.0
plugins/events/libRegionEventBoxPlugin.so: /usr/lib/libignition-math4.so.4.0.0
plugins/events/libRegionEventBoxPlugin.so: /usr/lib/libprotobuf.so
plugins/events/libRegionEventBoxPlugin.so: /usr/lib/libuuid.so
plugins/events/libRegionEventBoxPlugin.so: /usr/lib/libuuid.so
plugins/events/libRegionEventBoxPlugin.so: plugins/events/CMakeFiles/RegionEventBoxPlugin.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX shared library libRegionEventBoxPlugin.so"
	cd /home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins/events && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/RegionEventBoxPlugin.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
plugins/events/CMakeFiles/RegionEventBoxPlugin.dir/build: plugins/events/libRegionEventBoxPlugin.so

.PHONY : plugins/events/CMakeFiles/RegionEventBoxPlugin.dir/build

plugins/events/CMakeFiles/RegionEventBoxPlugin.dir/clean:
	cd /home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins/events && $(CMAKE_COMMAND) -P CMakeFiles/RegionEventBoxPlugin.dir/cmake_clean.cmake
.PHONY : plugins/events/CMakeFiles/RegionEventBoxPlugin.dir/clean

plugins/events/CMakeFiles/RegionEventBoxPlugin.dir/depend:
	cd /home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0 /home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/plugins/events /home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build /home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins/events /home/vamsik1211/Downloads/gazebo/src/gazebo-10.1.0/build/plugins/events/CMakeFiles/RegionEventBoxPlugin.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : plugins/events/CMakeFiles/RegionEventBoxPlugin.dir/depend

