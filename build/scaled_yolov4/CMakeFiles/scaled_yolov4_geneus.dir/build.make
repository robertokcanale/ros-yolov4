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
CMAKE_SOURCE_DIR = /home/maclab/Documents/RCanale/ros-yolov4/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/maclab/Documents/RCanale/ros-yolov4/build

# Utility rule file for scaled_yolov4_geneus.

# Include the progress variables for this target.
include scaled_yolov4/CMakeFiles/scaled_yolov4_geneus.dir/progress.make

scaled_yolov4_geneus: scaled_yolov4/CMakeFiles/scaled_yolov4_geneus.dir/build.make

.PHONY : scaled_yolov4_geneus

# Rule to build all files generated by this target.
scaled_yolov4/CMakeFiles/scaled_yolov4_geneus.dir/build: scaled_yolov4_geneus

.PHONY : scaled_yolov4/CMakeFiles/scaled_yolov4_geneus.dir/build

scaled_yolov4/CMakeFiles/scaled_yolov4_geneus.dir/clean:
	cd /home/maclab/Documents/RCanale/ros-yolov4/build/scaled_yolov4 && $(CMAKE_COMMAND) -P CMakeFiles/scaled_yolov4_geneus.dir/cmake_clean.cmake
.PHONY : scaled_yolov4/CMakeFiles/scaled_yolov4_geneus.dir/clean

scaled_yolov4/CMakeFiles/scaled_yolov4_geneus.dir/depend:
	cd /home/maclab/Documents/RCanale/ros-yolov4/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/maclab/Documents/RCanale/ros-yolov4/src /home/maclab/Documents/RCanale/ros-yolov4/src/scaled_yolov4 /home/maclab/Documents/RCanale/ros-yolov4/build /home/maclab/Documents/RCanale/ros-yolov4/build/scaled_yolov4 /home/maclab/Documents/RCanale/ros-yolov4/build/scaled_yolov4/CMakeFiles/scaled_yolov4_geneus.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : scaled_yolov4/CMakeFiles/scaled_yolov4_geneus.dir/depend

