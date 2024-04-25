# Verilated -*- CMake -*-
# DESCRIPTION: Verilator output: CMake include script with class lists
#
# This CMake script lists generated Verilated files, for including in higher level CMake scripts.
# This file is meant to be consumed by the verilate() function,
# which becomes available after executing `find_package(verilator).

### Constants...
set(PERL "perl" CACHE FILEPATH "Perl executable (from $PERL)")
set(VERILATOR_ROOT "/usr/share/verilator" CACHE PATH "Path to Verilator kit (from $VERILATOR_ROOT)")

### Compiler flags...
# User CFLAGS (from -CFLAGS on Verilator command line)
set(VExercise3_USER_CFLAGS )
# User LDLIBS (from -LDFLAGS on Verilator command line)
set(VExercise3_USER_LDLIBS )

### Switches...
# SystemC output mode?  0/1 (from --sc)
set(VExercise3_SC 0)
# Coverage output mode?  0/1 (from --coverage)
set(VExercise3_COVERAGE 1)
# Threaded output mode?  0/1/N threads (from --threads)
set(VExercise3_THREADS 0)
# VCD Tracing output mode?  0/1 (from --trace)
set(VExercise3_TRACE_VCD 0)
# FST Tracing output mode? 0/1 (from --fst-trace)
set(VExercise3_TRACE_FST 0)

### Sources...
# Global classes, need linked once per executable
set(VExercise3_GLOBAL "${VERILATOR_ROOT}/include/verilated.cpp" "${VERILATOR_ROOT}/include/verilated_cov.cpp")
# Generated module classes, non-fast-path, compile with low/medium optimization
set(VExercise3_CLASSES_SLOW "/root/Processor Design/Lab2_SV/CMakeFiles/exercise3.dir/VExercise3.dir/VExercise3__Slow.cpp")
# Generated module classes, fast-path, compile with highest optimization
set(VExercise3_CLASSES_FAST "/root/Processor Design/Lab2_SV/CMakeFiles/exercise3.dir/VExercise3.dir/VExercise3.cpp")
# Generated support classes, non-fast-path, compile with low/medium optimization
set(VExercise3_SUPPORT_SLOW "/root/Processor Design/Lab2_SV/CMakeFiles/exercise3.dir/VExercise3.dir/VExercise3__Syms.cpp")
# Generated support classes, fast-path, compile with highest optimization
set(VExercise3_SUPPORT_FAST )
# All dependencies
set(VExercise3_DEPS "/root/Processor Design/Lab2_SV/rtl/Exercise3.sv" "/root/Processor Design/Lab2_SV/rtl/Mysteries/Mystery1.sv" "/root/Processor Design/Lab2_SV/rtl/Mysteries/Mystery2.sv" "/usr/bin/verilator_bin")
# User .cpp files (from .cpp's on Verilator command line)
set(VExercise3_USER_CLASSES )
