# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.29

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
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
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/root/Processor Design/Lab2_SV"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/root/Processor Design/Lab2_SV"

# Utility rule file for UpdateVcpkgBaseline.

# Include any custom commands dependencies for this target.
include CMakeFiles/UpdateVcpkgBaseline.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/UpdateVcpkgBaseline.dir/progress.make

CMakeFiles/UpdateVcpkgBaseline:
	_deps/vcpkg-src/vcpkg x-update-baseline

UpdateVcpkgBaseline: CMakeFiles/UpdateVcpkgBaseline
UpdateVcpkgBaseline: CMakeFiles/UpdateVcpkgBaseline.dir/build.make
.PHONY : UpdateVcpkgBaseline

# Rule to build all files generated by this target.
CMakeFiles/UpdateVcpkgBaseline.dir/build: UpdateVcpkgBaseline
.PHONY : CMakeFiles/UpdateVcpkgBaseline.dir/build

CMakeFiles/UpdateVcpkgBaseline.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/UpdateVcpkgBaseline.dir/cmake_clean.cmake
.PHONY : CMakeFiles/UpdateVcpkgBaseline.dir/clean

CMakeFiles/UpdateVcpkgBaseline.dir/depend:
	cd "/root/Processor Design/Lab2_SV" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/root/Processor Design/Lab2_SV" "/root/Processor Design/Lab2_SV" "/root/Processor Design/Lab2_SV" "/root/Processor Design/Lab2_SV" "/root/Processor Design/Lab2_SV/CMakeFiles/UpdateVcpkgBaseline.dir/DependInfo.cmake" "--color=$(COLOR)"
.PHONY : CMakeFiles/UpdateVcpkgBaseline.dir/depend

