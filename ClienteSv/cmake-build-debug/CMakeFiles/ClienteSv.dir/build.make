# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

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
CMAKE_COMMAND = /opt/clion-2018.3.4/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /opt/clion-2018.3.4/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/edgargonza/Desktop/ClienteSv

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/edgargonza/Desktop/ClienteSv/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ClienteSv.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ClienteSv.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ClienteSv.dir/flags.make

CMakeFiles/ClienteSv.dir/main.cpp.o: CMakeFiles/ClienteSv.dir/flags.make
CMakeFiles/ClienteSv.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/edgargonza/Desktop/ClienteSv/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ClienteSv.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ClienteSv.dir/main.cpp.o -c /home/edgargonza/Desktop/ClienteSv/main.cpp

CMakeFiles/ClienteSv.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ClienteSv.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/edgargonza/Desktop/ClienteSv/main.cpp > CMakeFiles/ClienteSv.dir/main.cpp.i

CMakeFiles/ClienteSv.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ClienteSv.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/edgargonza/Desktop/ClienteSv/main.cpp -o CMakeFiles/ClienteSv.dir/main.cpp.s

# Object files for target ClienteSv
ClienteSv_OBJECTS = \
"CMakeFiles/ClienteSv.dir/main.cpp.o"

# External object files for target ClienteSv
ClienteSv_EXTERNAL_OBJECTS =

ClienteSv: CMakeFiles/ClienteSv.dir/main.cpp.o
ClienteSv: CMakeFiles/ClienteSv.dir/build.make
ClienteSv: CMakeFiles/ClienteSv.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/edgargonza/Desktop/ClienteSv/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ClienteSv"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ClienteSv.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ClienteSv.dir/build: ClienteSv

.PHONY : CMakeFiles/ClienteSv.dir/build

CMakeFiles/ClienteSv.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ClienteSv.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ClienteSv.dir/clean

CMakeFiles/ClienteSv.dir/depend:
	cd /home/edgargonza/Desktop/ClienteSv/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/edgargonza/Desktop/ClienteSv /home/edgargonza/Desktop/ClienteSv /home/edgargonza/Desktop/ClienteSv/cmake-build-debug /home/edgargonza/Desktop/ClienteSv/cmake-build-debug /home/edgargonza/Desktop/ClienteSv/cmake-build-debug/CMakeFiles/ClienteSv.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ClienteSv.dir/depend
