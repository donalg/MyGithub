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
CMAKE_SOURCE_DIR = /Users/donalglavin/Documents/Programming/MyGithub/CmakePrograms/Hex_to_Binary_and_Decial

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/donalglavin/Documents/Programming/MyGithub/CmakePrograms/Hex_to_Binary_and_Decial/build

# Include any dependencies generated for this target.
include CMakeFiles/HexConverter.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/HexConverter.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/HexConverter.dir/flags.make

CMakeFiles/HexConverter.dir/src/hex_file_convert.c.o: CMakeFiles/HexConverter.dir/flags.make
CMakeFiles/HexConverter.dir/src/hex_file_convert.c.o: ../src/hex_file_convert.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/donalglavin/Documents/Programming/MyGithub/CmakePrograms/Hex_to_Binary_and_Decial/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/HexConverter.dir/src/hex_file_convert.c.o"
	/opt/local/bin/gcc-mp-6  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/HexConverter.dir/src/hex_file_convert.c.o   -c /Users/donalglavin/Documents/Programming/MyGithub/CmakePrograms/Hex_to_Binary_and_Decial/src/hex_file_convert.c

CMakeFiles/HexConverter.dir/src/hex_file_convert.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/HexConverter.dir/src/hex_file_convert.c.i"
	/opt/local/bin/gcc-mp-6  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/donalglavin/Documents/Programming/MyGithub/CmakePrograms/Hex_to_Binary_and_Decial/src/hex_file_convert.c > CMakeFiles/HexConverter.dir/src/hex_file_convert.c.i

CMakeFiles/HexConverter.dir/src/hex_file_convert.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/HexConverter.dir/src/hex_file_convert.c.s"
	/opt/local/bin/gcc-mp-6  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/donalglavin/Documents/Programming/MyGithub/CmakePrograms/Hex_to_Binary_and_Decial/src/hex_file_convert.c -o CMakeFiles/HexConverter.dir/src/hex_file_convert.c.s

CMakeFiles/HexConverter.dir/src/hex_file_convert.c.o.requires:

.PHONY : CMakeFiles/HexConverter.dir/src/hex_file_convert.c.o.requires

CMakeFiles/HexConverter.dir/src/hex_file_convert.c.o.provides: CMakeFiles/HexConverter.dir/src/hex_file_convert.c.o.requires
	$(MAKE) -f CMakeFiles/HexConverter.dir/build.make CMakeFiles/HexConverter.dir/src/hex_file_convert.c.o.provides.build
.PHONY : CMakeFiles/HexConverter.dir/src/hex_file_convert.c.o.provides

CMakeFiles/HexConverter.dir/src/hex_file_convert.c.o.provides.build: CMakeFiles/HexConverter.dir/src/hex_file_convert.c.o


# Object files for target HexConverter
HexConverter_OBJECTS = \
"CMakeFiles/HexConverter.dir/src/hex_file_convert.c.o"

# External object files for target HexConverter
HexConverter_EXTERNAL_OBJECTS =

HexConverter: CMakeFiles/HexConverter.dir/src/hex_file_convert.c.o
HexConverter: CMakeFiles/HexConverter.dir/build.make
HexConverter: CMakeFiles/HexConverter.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/donalglavin/Documents/Programming/MyGithub/CmakePrograms/Hex_to_Binary_and_Decial/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable HexConverter"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/HexConverter.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/HexConverter.dir/build: HexConverter

.PHONY : CMakeFiles/HexConverter.dir/build

CMakeFiles/HexConverter.dir/requires: CMakeFiles/HexConverter.dir/src/hex_file_convert.c.o.requires

.PHONY : CMakeFiles/HexConverter.dir/requires

CMakeFiles/HexConverter.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/HexConverter.dir/cmake_clean.cmake
.PHONY : CMakeFiles/HexConverter.dir/clean

CMakeFiles/HexConverter.dir/depend:
	cd /Users/donalglavin/Documents/Programming/MyGithub/CmakePrograms/Hex_to_Binary_and_Decial/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/donalglavin/Documents/Programming/MyGithub/CmakePrograms/Hex_to_Binary_and_Decial /Users/donalglavin/Documents/Programming/MyGithub/CmakePrograms/Hex_to_Binary_and_Decial /Users/donalglavin/Documents/Programming/MyGithub/CmakePrograms/Hex_to_Binary_and_Decial/build /Users/donalglavin/Documents/Programming/MyGithub/CmakePrograms/Hex_to_Binary_and_Decial/build /Users/donalglavin/Documents/Programming/MyGithub/CmakePrograms/Hex_to_Binary_and_Decial/build/CMakeFiles/HexConverter.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/HexConverter.dir/depend

