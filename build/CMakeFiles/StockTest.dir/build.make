# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.20.0/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.20.0/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/ahsanayub/Documents/Personal/Self Development Resources/Quantlab_v2"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/ahsanayub/Documents/Personal/Self Development Resources/Quantlab_v2/build"

# Include any dependencies generated for this target.
include CMakeFiles/StockTest.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/StockTest.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/StockTest.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/StockTest.dir/flags.make

CMakeFiles/StockTest.dir/StockTest.cpp.o: CMakeFiles/StockTest.dir/flags.make
CMakeFiles/StockTest.dir/StockTest.cpp.o: ../StockTest.cpp
CMakeFiles/StockTest.dir/StockTest.cpp.o: CMakeFiles/StockTest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/ahsanayub/Documents/Personal/Self Development Resources/Quantlab_v2/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/StockTest.dir/StockTest.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/StockTest.dir/StockTest.cpp.o -MF CMakeFiles/StockTest.dir/StockTest.cpp.o.d -o CMakeFiles/StockTest.dir/StockTest.cpp.o -c "/Users/ahsanayub/Documents/Personal/Self Development Resources/Quantlab_v2/StockTest.cpp"

CMakeFiles/StockTest.dir/StockTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/StockTest.dir/StockTest.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/ahsanayub/Documents/Personal/Self Development Resources/Quantlab_v2/StockTest.cpp" > CMakeFiles/StockTest.dir/StockTest.cpp.i

CMakeFiles/StockTest.dir/StockTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/StockTest.dir/StockTest.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/ahsanayub/Documents/Personal/Self Development Resources/Quantlab_v2/StockTest.cpp" -o CMakeFiles/StockTest.dir/StockTest.cpp.s

# Object files for target StockTest
StockTest_OBJECTS = \
"CMakeFiles/StockTest.dir/StockTest.cpp.o"

# External object files for target StockTest
StockTest_EXTERNAL_OBJECTS =

StockTest: CMakeFiles/StockTest.dir/StockTest.cpp.o
StockTest: CMakeFiles/StockTest.dir/build.make
StockTest: lib/libgtestd.a
StockTest: CMakeFiles/StockTest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/ahsanayub/Documents/Personal/Self Development Resources/Quantlab_v2/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable StockTest"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/StockTest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/StockTest.dir/build: StockTest
.PHONY : CMakeFiles/StockTest.dir/build

CMakeFiles/StockTest.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/StockTest.dir/cmake_clean.cmake
.PHONY : CMakeFiles/StockTest.dir/clean

CMakeFiles/StockTest.dir/depend:
	cd "/Users/ahsanayub/Documents/Personal/Self Development Resources/Quantlab_v2/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/ahsanayub/Documents/Personal/Self Development Resources/Quantlab_v2" "/Users/ahsanayub/Documents/Personal/Self Development Resources/Quantlab_v2" "/Users/ahsanayub/Documents/Personal/Self Development Resources/Quantlab_v2/build" "/Users/ahsanayub/Documents/Personal/Self Development Resources/Quantlab_v2/build" "/Users/ahsanayub/Documents/Personal/Self Development Resources/Quantlab_v2/build/CMakeFiles/StockTest.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/StockTest.dir/depend

