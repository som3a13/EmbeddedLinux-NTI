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
CMAKE_SOURCE_DIR = /home/som3a133/Desktop/EmbeddedLinux/Qemu/initApp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/som3a133/Desktop/EmbeddedLinux/Qemu/initApp/build

# Include any dependencies generated for this target.
include CMakeFiles/TestDeamon.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/TestDeamon.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/TestDeamon.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/TestDeamon.dir/flags.make

CMakeFiles/TestDeamon.dir/app.c.o: CMakeFiles/TestDeamon.dir/flags.make
CMakeFiles/TestDeamon.dir/app.c.o: ../app.c
CMakeFiles/TestDeamon.dir/app.c.o: CMakeFiles/TestDeamon.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/som3a133/Desktop/EmbeddedLinux/Qemu/initApp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/TestDeamon.dir/app.c.o"
	/home/som3a133/x-tools/arm-cortexa9_neon-linux-musleabihf/bin/arm-cortexa9_neon-linux-musleabihf-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/TestDeamon.dir/app.c.o -MF CMakeFiles/TestDeamon.dir/app.c.o.d -o CMakeFiles/TestDeamon.dir/app.c.o -c /home/som3a133/Desktop/EmbeddedLinux/Qemu/initApp/app.c

CMakeFiles/TestDeamon.dir/app.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/TestDeamon.dir/app.c.i"
	/home/som3a133/x-tools/arm-cortexa9_neon-linux-musleabihf/bin/arm-cortexa9_neon-linux-musleabihf-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/som3a133/Desktop/EmbeddedLinux/Qemu/initApp/app.c > CMakeFiles/TestDeamon.dir/app.c.i

CMakeFiles/TestDeamon.dir/app.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/TestDeamon.dir/app.c.s"
	/home/som3a133/x-tools/arm-cortexa9_neon-linux-musleabihf/bin/arm-cortexa9_neon-linux-musleabihf-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/som3a133/Desktop/EmbeddedLinux/Qemu/initApp/app.c -o CMakeFiles/TestDeamon.dir/app.c.s

# Object files for target TestDeamon
TestDeamon_OBJECTS = \
"CMakeFiles/TestDeamon.dir/app.c.o"

# External object files for target TestDeamon
TestDeamon_EXTERNAL_OBJECTS =

TestDeamon: CMakeFiles/TestDeamon.dir/app.c.o
TestDeamon: CMakeFiles/TestDeamon.dir/build.make
TestDeamon: CMakeFiles/TestDeamon.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/som3a133/Desktop/EmbeddedLinux/Qemu/initApp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable TestDeamon"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/TestDeamon.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/TestDeamon.dir/build: TestDeamon
.PHONY : CMakeFiles/TestDeamon.dir/build

CMakeFiles/TestDeamon.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/TestDeamon.dir/cmake_clean.cmake
.PHONY : CMakeFiles/TestDeamon.dir/clean

CMakeFiles/TestDeamon.dir/depend:
	cd /home/som3a133/Desktop/EmbeddedLinux/Qemu/initApp/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/som3a133/Desktop/EmbeddedLinux/Qemu/initApp /home/som3a133/Desktop/EmbeddedLinux/Qemu/initApp /home/som3a133/Desktop/EmbeddedLinux/Qemu/initApp/build /home/som3a133/Desktop/EmbeddedLinux/Qemu/initApp/build /home/som3a133/Desktop/EmbeddedLinux/Qemu/initApp/build/CMakeFiles/TestDeamon.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/TestDeamon.dir/depend

