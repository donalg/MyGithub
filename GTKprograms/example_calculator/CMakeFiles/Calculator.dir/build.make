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
CMAKE_SOURCE_DIR = /Users/donalglavin/Documents/Programming/MyGithub/GTKprograms/example_calculator

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/donalglavin/Documents/Programming/MyGithub/GTKprograms/example_calculator

# Include any dependencies generated for this target.
include CMakeFiles/Calculator.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Calculator.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Calculator.dir/flags.make

CMakeFiles/Calculator.dir/Calculator.c.o: CMakeFiles/Calculator.dir/flags.make
CMakeFiles/Calculator.dir/Calculator.c.o: Calculator.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/donalglavin/Documents/Programming/MyGithub/GTKprograms/example_calculator/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Calculator.dir/Calculator.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Calculator.dir/Calculator.c.o   -c /Users/donalglavin/Documents/Programming/MyGithub/GTKprograms/example_calculator/Calculator.c

CMakeFiles/Calculator.dir/Calculator.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Calculator.dir/Calculator.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/donalglavin/Documents/Programming/MyGithub/GTKprograms/example_calculator/Calculator.c > CMakeFiles/Calculator.dir/Calculator.c.i

CMakeFiles/Calculator.dir/Calculator.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Calculator.dir/Calculator.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/donalglavin/Documents/Programming/MyGithub/GTKprograms/example_calculator/Calculator.c -o CMakeFiles/Calculator.dir/Calculator.c.s

CMakeFiles/Calculator.dir/Calculator.c.o.requires:

.PHONY : CMakeFiles/Calculator.dir/Calculator.c.o.requires

CMakeFiles/Calculator.dir/Calculator.c.o.provides: CMakeFiles/Calculator.dir/Calculator.c.o.requires
	$(MAKE) -f CMakeFiles/Calculator.dir/build.make CMakeFiles/Calculator.dir/Calculator.c.o.provides.build
.PHONY : CMakeFiles/Calculator.dir/Calculator.c.o.provides

CMakeFiles/Calculator.dir/Calculator.c.o.provides.build: CMakeFiles/Calculator.dir/Calculator.c.o


# Object files for target Calculator
Calculator_OBJECTS = \
"CMakeFiles/Calculator.dir/Calculator.c.o"

# External object files for target Calculator
Calculator_EXTERNAL_OBJECTS =

Calculator: CMakeFiles/Calculator.dir/Calculator.c.o
Calculator: CMakeFiles/Calculator.dir/build.make
Calculator: CMakeFiles/Calculator.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/donalglavin/Documents/Programming/MyGithub/GTKprograms/example_calculator/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Calculator"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Calculator.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Calculator.dir/build: Calculator

.PHONY : CMakeFiles/Calculator.dir/build

CMakeFiles/Calculator.dir/requires: CMakeFiles/Calculator.dir/Calculator.c.o.requires

.PHONY : CMakeFiles/Calculator.dir/requires

CMakeFiles/Calculator.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Calculator.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Calculator.dir/clean

CMakeFiles/Calculator.dir/depend:
	cd /Users/donalglavin/Documents/Programming/MyGithub/GTKprograms/example_calculator && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/donalglavin/Documents/Programming/MyGithub/GTKprograms/example_calculator /Users/donalglavin/Documents/Programming/MyGithub/GTKprograms/example_calculator /Users/donalglavin/Documents/Programming/MyGithub/GTKprograms/example_calculator /Users/donalglavin/Documents/Programming/MyGithub/GTKprograms/example_calculator /Users/donalglavin/Documents/Programming/MyGithub/GTKprograms/example_calculator/CMakeFiles/Calculator.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Calculator.dir/depend

