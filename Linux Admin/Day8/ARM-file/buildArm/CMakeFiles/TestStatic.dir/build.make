# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_SOURCE_DIR = /home/som3a133/Desktop/EmbeddedLinux/NTI/Day8/ARM-file

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/som3a133/Desktop/EmbeddedLinux/NTI/Day8/ARM-file/buildArm

# Include any dependencies generated for this target.
include CMakeFiles/TestStatic.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/TestStatic.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/TestStatic.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/TestStatic.dir/flags.make

CMakeFiles/TestStatic.dir/src/main.c.o: CMakeFiles/TestStatic.dir/flags.make
CMakeFiles/TestStatic.dir/src/main.c.o: ../src/main.c
CMakeFiles/TestStatic.dir/src/main.c.o: CMakeFiles/TestStatic.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/som3a133/Desktop/EmbeddedLinux/NTI/Day8/ARM-file/buildArm/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/TestStatic.dir/src/main.c.o"
	/home/som3a133/x-tools/arm-cortexa9_neon-linux-musleabihf/bin/arm-cortexa9_neon-linux-musleabihf-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/TestStatic.dir/src/main.c.o -MF CMakeFiles/TestStatic.dir/src/main.c.o.d -o CMakeFiles/TestStatic.dir/src/main.c.o -c /home/som3a133/Desktop/EmbeddedLinux/NTI/Day8/ARM-file/src/main.c

CMakeFiles/TestStatic.dir/src/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/TestStatic.dir/src/main.c.i"
	/home/som3a133/x-tools/arm-cortexa9_neon-linux-musleabihf/bin/arm-cortexa9_neon-linux-musleabihf-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/som3a133/Desktop/EmbeddedLinux/NTI/Day8/ARM-file/src/main.c > CMakeFiles/TestStatic.dir/src/main.c.i

CMakeFiles/TestStatic.dir/src/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/TestStatic.dir/src/main.c.s"
	/home/som3a133/x-tools/arm-cortexa9_neon-linux-musleabihf/bin/arm-cortexa9_neon-linux-musleabihf-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/som3a133/Desktop/EmbeddedLinux/NTI/Day8/ARM-file/src/main.c -o CMakeFiles/TestStatic.dir/src/main.c.s

# Object files for target TestStatic
TestStatic_OBJECTS = \
"CMakeFiles/TestStatic.dir/src/main.c.o"

# External object files for target TestStatic
TestStatic_EXTERNAL_OBJECTS =

bin/TestStatic: CMakeFiles/TestStatic.dir/src/main.c.o
bin/TestStatic: CMakeFiles/TestStatic.dir/build.make
bin/TestStatic: lib/liblibprint.a
bin/TestStatic: CMakeFiles/TestStatic.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/som3a133/Desktop/EmbeddedLinux/NTI/Day8/ARM-file/buildArm/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable bin/TestStatic"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/TestStatic.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/TestStatic.dir/build: bin/TestStatic
.PHONY : CMakeFiles/TestStatic.dir/build

CMakeFiles/TestStatic.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/TestStatic.dir/cmake_clean.cmake
.PHONY : CMakeFiles/TestStatic.dir/clean

CMakeFiles/TestStatic.dir/depend:
	cd /home/som3a133/Desktop/EmbeddedLinux/NTI/Day8/ARM-file/buildArm && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/som3a133/Desktop/EmbeddedLinux/NTI/Day8/ARM-file /home/som3a133/Desktop/EmbeddedLinux/NTI/Day8/ARM-file /home/som3a133/Desktop/EmbeddedLinux/NTI/Day8/ARM-file/buildArm /home/som3a133/Desktop/EmbeddedLinux/NTI/Day8/ARM-file/buildArm /home/som3a133/Desktop/EmbeddedLinux/NTI/Day8/ARM-file/buildArm/CMakeFiles/TestStatic.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/TestStatic.dir/depend

