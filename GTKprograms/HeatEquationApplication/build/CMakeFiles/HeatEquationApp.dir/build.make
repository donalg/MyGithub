# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.4

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
CMAKE_COMMAND = /opt/homebrew-cask/Caskroom/cmake/3.4.3/CMake.app/Contents/bin/cmake

# The command to remove a file.
RM = /opt/homebrew-cask/Caskroom/cmake/3.4.3/CMake.app/Contents/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/donalglavin/Documents/Programming/MyGithub/GTKprograms/HeatEquationApplication

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/donalglavin/Documents/Programming/MyGithub/GTKprograms/HeatEquationApplication/build

# Include any dependencies generated for this target.
include CMakeFiles/HeatEquationApp.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/HeatEquationApp.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/HeatEquationApp.dir/flags.make

CMakeFiles/HeatEquationApp.dir/src/HeatEquationApp.c.o: CMakeFiles/HeatEquationApp.dir/flags.make
CMakeFiles/HeatEquationApp.dir/src/HeatEquationApp.c.o: ../src/HeatEquationApp.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/donalglavin/Documents/Programming/MyGithub/GTKprograms/HeatEquationApplication/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/HeatEquationApp.dir/src/HeatEquationApp.c.o"
	/opt/local/bin/gcc-mp-6  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/HeatEquationApp.dir/src/HeatEquationApp.c.o   -c /Users/donalglavin/Documents/Programming/MyGithub/GTKprograms/HeatEquationApplication/src/HeatEquationApp.c

CMakeFiles/HeatEquationApp.dir/src/HeatEquationApp.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/HeatEquationApp.dir/src/HeatEquationApp.c.i"
	/opt/local/bin/gcc-mp-6  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/donalglavin/Documents/Programming/MyGithub/GTKprograms/HeatEquationApplication/src/HeatEquationApp.c > CMakeFiles/HeatEquationApp.dir/src/HeatEquationApp.c.i

CMakeFiles/HeatEquationApp.dir/src/HeatEquationApp.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/HeatEquationApp.dir/src/HeatEquationApp.c.s"
	/opt/local/bin/gcc-mp-6  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/donalglavin/Documents/Programming/MyGithub/GTKprograms/HeatEquationApplication/src/HeatEquationApp.c -o CMakeFiles/HeatEquationApp.dir/src/HeatEquationApp.c.s

CMakeFiles/HeatEquationApp.dir/src/HeatEquationApp.c.o.requires:

.PHONY : CMakeFiles/HeatEquationApp.dir/src/HeatEquationApp.c.o.requires

CMakeFiles/HeatEquationApp.dir/src/HeatEquationApp.c.o.provides: CMakeFiles/HeatEquationApp.dir/src/HeatEquationApp.c.o.requires
	$(MAKE) -f CMakeFiles/HeatEquationApp.dir/build.make CMakeFiles/HeatEquationApp.dir/src/HeatEquationApp.c.o.provides.build
.PHONY : CMakeFiles/HeatEquationApp.dir/src/HeatEquationApp.c.o.provides

CMakeFiles/HeatEquationApp.dir/src/HeatEquationApp.c.o.provides.build: CMakeFiles/HeatEquationApp.dir/src/HeatEquationApp.c.o


# Object files for target HeatEquationApp
HeatEquationApp_OBJECTS = \
"CMakeFiles/HeatEquationApp.dir/src/HeatEquationApp.c.o"

# External object files for target HeatEquationApp
HeatEquationApp_EXTERNAL_OBJECTS =

HeatEquationApp: CMakeFiles/HeatEquationApp.dir/src/HeatEquationApp.c.o
HeatEquationApp: CMakeFiles/HeatEquationApp.dir/build.make
HeatEquationApp: CMakeFiles/HeatEquationApp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/donalglavin/Documents/Programming/MyGithub/GTKprograms/HeatEquationApplication/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable HeatEquationApp"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/HeatEquationApp.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/HeatEquationApp.dir/build: HeatEquationApp

.PHONY : CMakeFiles/HeatEquationApp.dir/build

CMakeFiles/HeatEquationApp.dir/requires: CMakeFiles/HeatEquationApp.dir/src/HeatEquationApp.c.o.requires

.PHONY : CMakeFiles/HeatEquationApp.dir/requires

CMakeFiles/HeatEquationApp.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/HeatEquationApp.dir/cmake_clean.cmake
.PHONY : CMakeFiles/HeatEquationApp.dir/clean

CMakeFiles/HeatEquationApp.dir/depend:
	cd /Users/donalglavin/Documents/Programming/MyGithub/GTKprograms/HeatEquationApplication/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/donalglavin/Documents/Programming/MyGithub/GTKprograms/HeatEquationApplication /Users/donalglavin/Documents/Programming/MyGithub/GTKprograms/HeatEquationApplication /Users/donalglavin/Documents/Programming/MyGithub/GTKprograms/HeatEquationApplication/build /Users/donalglavin/Documents/Programming/MyGithub/GTKprograms/HeatEquationApplication/build /Users/donalglavin/Documents/Programming/MyGithub/GTKprograms/HeatEquationApplication/build/CMakeFiles/HeatEquationApp.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/HeatEquationApp.dir/depend
