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

# Include any dependencies generated for this target.
include CMakeFiles/exercise3.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/exercise3.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/exercise3.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/exercise3.dir/flags.make

CMakeFiles/exercise3.dir/VExercise3.dir/VExercise3.cpp: /usr/bin/verilator_bin
CMakeFiles/exercise3.dir/VExercise3.dir/VExercise3.cpp: rtl/Exercise3.sv
CMakeFiles/exercise3.dir/VExercise3.dir/VExercise3.cpp: rtl/Mysteries/Mystery1.sv
CMakeFiles/exercise3.dir/VExercise3.dir/VExercise3.cpp: rtl/Mysteries/Mystery2.sv
CMakeFiles/exercise3.dir/VExercise3.dir/VExercise3.cpp: /usr/bin/verilator_bin
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir="/root/Processor Design/Lab2_SV/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Generating CMakeFiles/exercise3.dir/VExercise3.dir/VExercise3.cpp, CMakeFiles/exercise3.dir/VExercise3.dir/VExercise3__Slow.cpp, CMakeFiles/exercise3.dir/VExercise3.dir/VExercise3__Syms.cpp, CMakeFiles/exercise3.dir/VExercise3.dir/VExercise3.h, CMakeFiles/exercise3.dir/VExercise3.dir/VExercise3__Slow.h, CMakeFiles/exercise3.dir/VExercise3.dir/VExercise3__Syms.h, CMakeFiles/exercise3.dir/VExercise3.dir/VExercise3.cmake"
	/usr/bin/verilator_bin --compiler gcc --prefix VExercise3 --Mdir "/root/Processor Design/Lab2_SV/CMakeFiles/exercise3.dir/VExercise3.dir" --make cmake --top-module Exercise3 --coverage --cc "/root/Processor Design/Lab2_SV/rtl/Exercise3.sv" "/root/Processor Design/Lab2_SV/rtl/Mysteries/Mystery1.sv" "/root/Processor Design/Lab2_SV/rtl/Mysteries/Mystery2.sv"

CMakeFiles/exercise3.dir/VExercise3.dir/VExercise3__Slow.cpp: CMakeFiles/exercise3.dir/VExercise3.dir/VExercise3.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate CMakeFiles/exercise3.dir/VExercise3.dir/VExercise3__Slow.cpp

CMakeFiles/exercise3.dir/VExercise3.dir/VExercise3__Syms.cpp: CMakeFiles/exercise3.dir/VExercise3.dir/VExercise3.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate CMakeFiles/exercise3.dir/VExercise3.dir/VExercise3__Syms.cpp

CMakeFiles/exercise3.dir/VExercise3.dir/VExercise3.h: CMakeFiles/exercise3.dir/VExercise3.dir/VExercise3.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate CMakeFiles/exercise3.dir/VExercise3.dir/VExercise3.h

CMakeFiles/exercise3.dir/VExercise3.dir/VExercise3__Slow.h: CMakeFiles/exercise3.dir/VExercise3.dir/VExercise3.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate CMakeFiles/exercise3.dir/VExercise3.dir/VExercise3__Slow.h

CMakeFiles/exercise3.dir/VExercise3.dir/VExercise3__Syms.h: CMakeFiles/exercise3.dir/VExercise3.dir/VExercise3.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate CMakeFiles/exercise3.dir/VExercise3.dir/VExercise3__Syms.h

CMakeFiles/exercise3.dir/VExercise3.dir/VExercise3.cmake: CMakeFiles/exercise3.dir/VExercise3.dir/VExercise3.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate CMakeFiles/exercise3.dir/VExercise3.dir/VExercise3.cmake

CMakeFiles/exercise3.dir/VExercise3.dir/VExercise3_copy.cmake: CMakeFiles/exercise3.dir/VExercise3.dir/VExercise3.cmake
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir="/root/Processor Design/Lab2_SV/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Generating CMakeFiles/exercise3.dir/VExercise3.dir/VExercise3_copy.cmake"
	/usr/bin/cmake -E copy_if_different "/root/Processor Design/Lab2_SV/CMakeFiles/exercise3.dir/VExercise3.dir/VExercise3.cmake" "/root/Processor Design/Lab2_SV/CMakeFiles/exercise3.dir/VExercise3.dir/VExercise3_copy.cmake"

CMakeFiles/exercise3.dir/dv/exercise3.cpp.o: CMakeFiles/exercise3.dir/flags.make
CMakeFiles/exercise3.dir/dv/exercise3.cpp.o: dv/exercise3.cpp
CMakeFiles/exercise3.dir/dv/exercise3.cpp.o: CMakeFiles/exercise3.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/root/Processor Design/Lab2_SV/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/exercise3.dir/dv/exercise3.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/exercise3.dir/dv/exercise3.cpp.o -MF CMakeFiles/exercise3.dir/dv/exercise3.cpp.o.d -o CMakeFiles/exercise3.dir/dv/exercise3.cpp.o -c "/root/Processor Design/Lab2_SV/dv/exercise3.cpp"

CMakeFiles/exercise3.dir/dv/exercise3.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/exercise3.dir/dv/exercise3.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/root/Processor Design/Lab2_SV/dv/exercise3.cpp" > CMakeFiles/exercise3.dir/dv/exercise3.cpp.i

CMakeFiles/exercise3.dir/dv/exercise3.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/exercise3.dir/dv/exercise3.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/root/Processor Design/Lab2_SV/dv/exercise3.cpp" -o CMakeFiles/exercise3.dir/dv/exercise3.cpp.s

CMakeFiles/exercise3.dir/CMakeFiles/exercise3.dir/VExercise3.dir/VExercise3.cpp.o: CMakeFiles/exercise3.dir/flags.make
CMakeFiles/exercise3.dir/CMakeFiles/exercise3.dir/VExercise3.dir/VExercise3.cpp.o: CMakeFiles/exercise3.dir/VExercise3.dir/VExercise3.cpp
CMakeFiles/exercise3.dir/CMakeFiles/exercise3.dir/VExercise3.dir/VExercise3.cpp.o: CMakeFiles/exercise3.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/root/Processor Design/Lab2_SV/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/exercise3.dir/CMakeFiles/exercise3.dir/VExercise3.dir/VExercise3.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/exercise3.dir/CMakeFiles/exercise3.dir/VExercise3.dir/VExercise3.cpp.o -MF CMakeFiles/exercise3.dir/CMakeFiles/exercise3.dir/VExercise3.dir/VExercise3.cpp.o.d -o CMakeFiles/exercise3.dir/CMakeFiles/exercise3.dir/VExercise3.dir/VExercise3.cpp.o -c "/root/Processor Design/Lab2_SV/CMakeFiles/exercise3.dir/VExercise3.dir/VExercise3.cpp"

CMakeFiles/exercise3.dir/CMakeFiles/exercise3.dir/VExercise3.dir/VExercise3.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/exercise3.dir/CMakeFiles/exercise3.dir/VExercise3.dir/VExercise3.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/root/Processor Design/Lab2_SV/CMakeFiles/exercise3.dir/VExercise3.dir/VExercise3.cpp" > CMakeFiles/exercise3.dir/CMakeFiles/exercise3.dir/VExercise3.dir/VExercise3.cpp.i

CMakeFiles/exercise3.dir/CMakeFiles/exercise3.dir/VExercise3.dir/VExercise3.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/exercise3.dir/CMakeFiles/exercise3.dir/VExercise3.dir/VExercise3.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/root/Processor Design/Lab2_SV/CMakeFiles/exercise3.dir/VExercise3.dir/VExercise3.cpp" -o CMakeFiles/exercise3.dir/CMakeFiles/exercise3.dir/VExercise3.dir/VExercise3.cpp.s

CMakeFiles/exercise3.dir/CMakeFiles/exercise3.dir/VExercise3.dir/VExercise3__Slow.cpp.o: CMakeFiles/exercise3.dir/flags.make
CMakeFiles/exercise3.dir/CMakeFiles/exercise3.dir/VExercise3.dir/VExercise3__Slow.cpp.o: CMakeFiles/exercise3.dir/VExercise3.dir/VExercise3__Slow.cpp
CMakeFiles/exercise3.dir/CMakeFiles/exercise3.dir/VExercise3.dir/VExercise3__Slow.cpp.o: CMakeFiles/exercise3.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/root/Processor Design/Lab2_SV/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/exercise3.dir/CMakeFiles/exercise3.dir/VExercise3.dir/VExercise3__Slow.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/exercise3.dir/CMakeFiles/exercise3.dir/VExercise3.dir/VExercise3__Slow.cpp.o -MF CMakeFiles/exercise3.dir/CMakeFiles/exercise3.dir/VExercise3.dir/VExercise3__Slow.cpp.o.d -o CMakeFiles/exercise3.dir/CMakeFiles/exercise3.dir/VExercise3.dir/VExercise3__Slow.cpp.o -c "/root/Processor Design/Lab2_SV/CMakeFiles/exercise3.dir/VExercise3.dir/VExercise3__Slow.cpp"

CMakeFiles/exercise3.dir/CMakeFiles/exercise3.dir/VExercise3.dir/VExercise3__Slow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/exercise3.dir/CMakeFiles/exercise3.dir/VExercise3.dir/VExercise3__Slow.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/root/Processor Design/Lab2_SV/CMakeFiles/exercise3.dir/VExercise3.dir/VExercise3__Slow.cpp" > CMakeFiles/exercise3.dir/CMakeFiles/exercise3.dir/VExercise3.dir/VExercise3__Slow.cpp.i

CMakeFiles/exercise3.dir/CMakeFiles/exercise3.dir/VExercise3.dir/VExercise3__Slow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/exercise3.dir/CMakeFiles/exercise3.dir/VExercise3.dir/VExercise3__Slow.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/root/Processor Design/Lab2_SV/CMakeFiles/exercise3.dir/VExercise3.dir/VExercise3__Slow.cpp" -o CMakeFiles/exercise3.dir/CMakeFiles/exercise3.dir/VExercise3.dir/VExercise3__Slow.cpp.s

CMakeFiles/exercise3.dir/CMakeFiles/exercise3.dir/VExercise3.dir/VExercise3__Syms.cpp.o: CMakeFiles/exercise3.dir/flags.make
CMakeFiles/exercise3.dir/CMakeFiles/exercise3.dir/VExercise3.dir/VExercise3__Syms.cpp.o: CMakeFiles/exercise3.dir/VExercise3.dir/VExercise3__Syms.cpp
CMakeFiles/exercise3.dir/CMakeFiles/exercise3.dir/VExercise3.dir/VExercise3__Syms.cpp.o: CMakeFiles/exercise3.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/root/Processor Design/Lab2_SV/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/exercise3.dir/CMakeFiles/exercise3.dir/VExercise3.dir/VExercise3__Syms.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/exercise3.dir/CMakeFiles/exercise3.dir/VExercise3.dir/VExercise3__Syms.cpp.o -MF CMakeFiles/exercise3.dir/CMakeFiles/exercise3.dir/VExercise3.dir/VExercise3__Syms.cpp.o.d -o CMakeFiles/exercise3.dir/CMakeFiles/exercise3.dir/VExercise3.dir/VExercise3__Syms.cpp.o -c "/root/Processor Design/Lab2_SV/CMakeFiles/exercise3.dir/VExercise3.dir/VExercise3__Syms.cpp"

CMakeFiles/exercise3.dir/CMakeFiles/exercise3.dir/VExercise3.dir/VExercise3__Syms.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/exercise3.dir/CMakeFiles/exercise3.dir/VExercise3.dir/VExercise3__Syms.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/root/Processor Design/Lab2_SV/CMakeFiles/exercise3.dir/VExercise3.dir/VExercise3__Syms.cpp" > CMakeFiles/exercise3.dir/CMakeFiles/exercise3.dir/VExercise3.dir/VExercise3__Syms.cpp.i

CMakeFiles/exercise3.dir/CMakeFiles/exercise3.dir/VExercise3.dir/VExercise3__Syms.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/exercise3.dir/CMakeFiles/exercise3.dir/VExercise3.dir/VExercise3__Syms.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/root/Processor Design/Lab2_SV/CMakeFiles/exercise3.dir/VExercise3.dir/VExercise3__Syms.cpp" -o CMakeFiles/exercise3.dir/CMakeFiles/exercise3.dir/VExercise3.dir/VExercise3__Syms.cpp.s

CMakeFiles/exercise3.dir/usr/share/verilator/include/verilated.cpp.o: CMakeFiles/exercise3.dir/flags.make
CMakeFiles/exercise3.dir/usr/share/verilator/include/verilated.cpp.o: /usr/share/verilator/include/verilated.cpp
CMakeFiles/exercise3.dir/usr/share/verilator/include/verilated.cpp.o: CMakeFiles/exercise3.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/root/Processor Design/Lab2_SV/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/exercise3.dir/usr/share/verilator/include/verilated.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/exercise3.dir/usr/share/verilator/include/verilated.cpp.o -MF CMakeFiles/exercise3.dir/usr/share/verilator/include/verilated.cpp.o.d -o CMakeFiles/exercise3.dir/usr/share/verilator/include/verilated.cpp.o -c /usr/share/verilator/include/verilated.cpp

CMakeFiles/exercise3.dir/usr/share/verilator/include/verilated.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/exercise3.dir/usr/share/verilator/include/verilated.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /usr/share/verilator/include/verilated.cpp > CMakeFiles/exercise3.dir/usr/share/verilator/include/verilated.cpp.i

CMakeFiles/exercise3.dir/usr/share/verilator/include/verilated.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/exercise3.dir/usr/share/verilator/include/verilated.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /usr/share/verilator/include/verilated.cpp -o CMakeFiles/exercise3.dir/usr/share/verilator/include/verilated.cpp.s

CMakeFiles/exercise3.dir/usr/share/verilator/include/verilated_cov.cpp.o: CMakeFiles/exercise3.dir/flags.make
CMakeFiles/exercise3.dir/usr/share/verilator/include/verilated_cov.cpp.o: /usr/share/verilator/include/verilated_cov.cpp
CMakeFiles/exercise3.dir/usr/share/verilator/include/verilated_cov.cpp.o: CMakeFiles/exercise3.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/root/Processor Design/Lab2_SV/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/exercise3.dir/usr/share/verilator/include/verilated_cov.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/exercise3.dir/usr/share/verilator/include/verilated_cov.cpp.o -MF CMakeFiles/exercise3.dir/usr/share/verilator/include/verilated_cov.cpp.o.d -o CMakeFiles/exercise3.dir/usr/share/verilator/include/verilated_cov.cpp.o -c /usr/share/verilator/include/verilated_cov.cpp

CMakeFiles/exercise3.dir/usr/share/verilator/include/verilated_cov.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/exercise3.dir/usr/share/verilator/include/verilated_cov.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /usr/share/verilator/include/verilated_cov.cpp > CMakeFiles/exercise3.dir/usr/share/verilator/include/verilated_cov.cpp.i

CMakeFiles/exercise3.dir/usr/share/verilator/include/verilated_cov.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/exercise3.dir/usr/share/verilator/include/verilated_cov.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /usr/share/verilator/include/verilated_cov.cpp -o CMakeFiles/exercise3.dir/usr/share/verilator/include/verilated_cov.cpp.s

# Object files for target exercise3
exercise3_OBJECTS = \
"CMakeFiles/exercise3.dir/dv/exercise3.cpp.o" \
"CMakeFiles/exercise3.dir/CMakeFiles/exercise3.dir/VExercise3.dir/VExercise3.cpp.o" \
"CMakeFiles/exercise3.dir/CMakeFiles/exercise3.dir/VExercise3.dir/VExercise3__Slow.cpp.o" \
"CMakeFiles/exercise3.dir/CMakeFiles/exercise3.dir/VExercise3.dir/VExercise3__Syms.cpp.o" \
"CMakeFiles/exercise3.dir/usr/share/verilator/include/verilated.cpp.o" \
"CMakeFiles/exercise3.dir/usr/share/verilator/include/verilated_cov.cpp.o"

# External object files for target exercise3
exercise3_EXTERNAL_OBJECTS =

exercise3: CMakeFiles/exercise3.dir/dv/exercise3.cpp.o
exercise3: CMakeFiles/exercise3.dir/CMakeFiles/exercise3.dir/VExercise3.dir/VExercise3.cpp.o
exercise3: CMakeFiles/exercise3.dir/CMakeFiles/exercise3.dir/VExercise3.dir/VExercise3__Slow.cpp.o
exercise3: CMakeFiles/exercise3.dir/CMakeFiles/exercise3.dir/VExercise3.dir/VExercise3__Syms.cpp.o
exercise3: CMakeFiles/exercise3.dir/usr/share/verilator/include/verilated.cpp.o
exercise3: CMakeFiles/exercise3.dir/usr/share/verilator/include/verilated_cov.cpp.o
exercise3: CMakeFiles/exercise3.dir/build.make
exercise3: vcpkg_installed/x64-linux/debug/lib/manual-link/libCatch2Maind.a
exercise3: vcpkg_installed/x64-linux/debug/lib/libCatch2d.a
exercise3: CMakeFiles/exercise3.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir="/root/Processor Design/Lab2_SV/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_9) "Linking CXX executable exercise3"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/exercise3.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/exercise3.dir/build: exercise3
.PHONY : CMakeFiles/exercise3.dir/build

CMakeFiles/exercise3.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/exercise3.dir/cmake_clean.cmake
.PHONY : CMakeFiles/exercise3.dir/clean

CMakeFiles/exercise3.dir/depend: CMakeFiles/exercise3.dir/VExercise3.dir/VExercise3.cmake
CMakeFiles/exercise3.dir/depend: CMakeFiles/exercise3.dir/VExercise3.dir/VExercise3.cpp
CMakeFiles/exercise3.dir/depend: CMakeFiles/exercise3.dir/VExercise3.dir/VExercise3.h
CMakeFiles/exercise3.dir/depend: CMakeFiles/exercise3.dir/VExercise3.dir/VExercise3__Slow.cpp
CMakeFiles/exercise3.dir/depend: CMakeFiles/exercise3.dir/VExercise3.dir/VExercise3__Slow.h
CMakeFiles/exercise3.dir/depend: CMakeFiles/exercise3.dir/VExercise3.dir/VExercise3__Syms.cpp
CMakeFiles/exercise3.dir/depend: CMakeFiles/exercise3.dir/VExercise3.dir/VExercise3__Syms.h
CMakeFiles/exercise3.dir/depend: CMakeFiles/exercise3.dir/VExercise3.dir/VExercise3_copy.cmake
	cd "/root/Processor Design/Lab2_SV" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/root/Processor Design/Lab2_SV" "/root/Processor Design/Lab2_SV" "/root/Processor Design/Lab2_SV" "/root/Processor Design/Lab2_SV" "/root/Processor Design/Lab2_SV/CMakeFiles/exercise3.dir/DependInfo.cmake" "--color=$(COLOR)"
.PHONY : CMakeFiles/exercise3.dir/depend
