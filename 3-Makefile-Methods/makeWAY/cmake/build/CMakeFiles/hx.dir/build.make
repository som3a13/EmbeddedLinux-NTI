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
CMAKE_SOURCE_DIR = /home/som3a133/Desktop/EmbeddedLinux/NTI/play/ELa/s4/cmake

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/som3a133/Desktop/EmbeddedLinux/NTI/play/ELa/s4/cmake/build

# Include any dependencies generated for this target.
include CMakeFiles/hx.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/hx.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/hx.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/hx.dir/flags.make

CMakeFiles/hx.dir/main.cpp.o: CMakeFiles/hx.dir/flags.make
CMakeFiles/hx.dir/main.cpp.o: ../main.cpp
CMakeFiles/hx.dir/main.cpp.o: CMakeFiles/hx.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/som3a133/Desktop/EmbeddedLinux/NTI/play/ELa/s4/cmake/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/hx.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/hx.dir/main.cpp.o -MF CMakeFiles/hx.dir/main.cpp.o.d -o CMakeFiles/hx.dir/main.cpp.o -c /home/som3a133/Desktop/EmbeddedLinux/NTI/play/ELa/s4/cmake/main.cpp

CMakeFiles/hx.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hx.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/som3a133/Desktop/EmbeddedLinux/NTI/play/ELa/s4/cmake/main.cpp > CMakeFiles/hx.dir/main.cpp.i

CMakeFiles/hx.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hx.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/som3a133/Desktop/EmbeddedLinux/NTI/play/ELa/s4/cmake/main.cpp -o CMakeFiles/hx.dir/main.cpp.s

# Object files for target hx
hx_OBJECTS = \
"CMakeFiles/hx.dir/main.cpp.o"

# External object files for target hx
hx_EXTERNAL_OBJECTS =

hx: CMakeFiles/hx.dir/main.cpp.o
hx: CMakeFiles/hx.dir/build.make
hx: libMylib.so
hx: CMakeFiles/hx.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/som3a133/Desktop/EmbeddedLinux/NTI/play/ELa/s4/cmake/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable hx"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/hx.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/hx.dir/build: hx
.PHONY : CMakeFiles/hx.dir/build

CMakeFiles/hx.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/hx.dir/cmake_clean.cmake
.PHONY : CMakeFiles/hx.dir/clean

CMakeFiles/hx.dir/depend:
	cd /home/som3a133/Desktop/EmbeddedLinux/NTI/play/ELa/s4/cmake/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/som3a133/Desktop/EmbeddedLinux/NTI/play/ELa/s4/cmake /home/som3a133/Desktop/EmbeddedLinux/NTI/play/ELa/s4/cmake /home/som3a133/Desktop/EmbeddedLinux/NTI/play/ELa/s4/cmake/build /home/som3a133/Desktop/EmbeddedLinux/NTI/play/ELa/s4/cmake/build /home/som3a133/Desktop/EmbeddedLinux/NTI/play/ELa/s4/cmake/build/CMakeFiles/hx.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/hx.dir/depend
