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
CMAKE_SOURCE_DIR = /Users/donalglavin/Documents/Programming/github/CmakePrograms/GPS_AreaCalculator

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/donalglavin/Documents/Programming/github/CmakePrograms/GPS_AreaCalculator/build

# Include any dependencies generated for this target.
include CMakeFiles/GPSBuddy.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/GPSBuddy.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/GPSBuddy.dir/flags.make

CMakeFiles/GPSBuddy.dir/src/main.cpp.o: CMakeFiles/GPSBuddy.dir/flags.make
CMakeFiles/GPSBuddy.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/donalglavin/Documents/Programming/github/CmakePrograms/GPS_AreaCalculator/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/GPSBuddy.dir/src/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GPSBuddy.dir/src/main.cpp.o -c /Users/donalglavin/Documents/Programming/github/CmakePrograms/GPS_AreaCalculator/src/main.cpp

CMakeFiles/GPSBuddy.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GPSBuddy.dir/src/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/donalglavin/Documents/Programming/github/CmakePrograms/GPS_AreaCalculator/src/main.cpp > CMakeFiles/GPSBuddy.dir/src/main.cpp.i

CMakeFiles/GPSBuddy.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GPSBuddy.dir/src/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/donalglavin/Documents/Programming/github/CmakePrograms/GPS_AreaCalculator/src/main.cpp -o CMakeFiles/GPSBuddy.dir/src/main.cpp.s

CMakeFiles/GPSBuddy.dir/src/main.cpp.o.requires:

.PHONY : CMakeFiles/GPSBuddy.dir/src/main.cpp.o.requires

CMakeFiles/GPSBuddy.dir/src/main.cpp.o.provides: CMakeFiles/GPSBuddy.dir/src/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/GPSBuddy.dir/build.make CMakeFiles/GPSBuddy.dir/src/main.cpp.o.provides.build
.PHONY : CMakeFiles/GPSBuddy.dir/src/main.cpp.o.provides

CMakeFiles/GPSBuddy.dir/src/main.cpp.o.provides.build: CMakeFiles/GPSBuddy.dir/src/main.cpp.o


CMakeFiles/GPSBuddy.dir/src/includes/CSVdata.cpp.o: CMakeFiles/GPSBuddy.dir/flags.make
CMakeFiles/GPSBuddy.dir/src/includes/CSVdata.cpp.o: ../src/includes/CSVdata.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/donalglavin/Documents/Programming/github/CmakePrograms/GPS_AreaCalculator/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/GPSBuddy.dir/src/includes/CSVdata.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GPSBuddy.dir/src/includes/CSVdata.cpp.o -c /Users/donalglavin/Documents/Programming/github/CmakePrograms/GPS_AreaCalculator/src/includes/CSVdata.cpp

CMakeFiles/GPSBuddy.dir/src/includes/CSVdata.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GPSBuddy.dir/src/includes/CSVdata.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/donalglavin/Documents/Programming/github/CmakePrograms/GPS_AreaCalculator/src/includes/CSVdata.cpp > CMakeFiles/GPSBuddy.dir/src/includes/CSVdata.cpp.i

CMakeFiles/GPSBuddy.dir/src/includes/CSVdata.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GPSBuddy.dir/src/includes/CSVdata.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/donalglavin/Documents/Programming/github/CmakePrograms/GPS_AreaCalculator/src/includes/CSVdata.cpp -o CMakeFiles/GPSBuddy.dir/src/includes/CSVdata.cpp.s

CMakeFiles/GPSBuddy.dir/src/includes/CSVdata.cpp.o.requires:

.PHONY : CMakeFiles/GPSBuddy.dir/src/includes/CSVdata.cpp.o.requires

CMakeFiles/GPSBuddy.dir/src/includes/CSVdata.cpp.o.provides: CMakeFiles/GPSBuddy.dir/src/includes/CSVdata.cpp.o.requires
	$(MAKE) -f CMakeFiles/GPSBuddy.dir/build.make CMakeFiles/GPSBuddy.dir/src/includes/CSVdata.cpp.o.provides.build
.PHONY : CMakeFiles/GPSBuddy.dir/src/includes/CSVdata.cpp.o.provides

CMakeFiles/GPSBuddy.dir/src/includes/CSVdata.cpp.o.provides.build: CMakeFiles/GPSBuddy.dir/src/includes/CSVdata.cpp.o


# Object files for target GPSBuddy
GPSBuddy_OBJECTS = \
"CMakeFiles/GPSBuddy.dir/src/main.cpp.o" \
"CMakeFiles/GPSBuddy.dir/src/includes/CSVdata.cpp.o"

# External object files for target GPSBuddy
GPSBuddy_EXTERNAL_OBJECTS =

GPSBuddy: CMakeFiles/GPSBuddy.dir/src/main.cpp.o
GPSBuddy: CMakeFiles/GPSBuddy.dir/src/includes/CSVdata.cpp.o
GPSBuddy: CMakeFiles/GPSBuddy.dir/build.make
GPSBuddy: CMakeFiles/GPSBuddy.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/donalglavin/Documents/Programming/github/CmakePrograms/GPS_AreaCalculator/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable GPSBuddy"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/GPSBuddy.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/GPSBuddy.dir/build: GPSBuddy

.PHONY : CMakeFiles/GPSBuddy.dir/build

CMakeFiles/GPSBuddy.dir/requires: CMakeFiles/GPSBuddy.dir/src/main.cpp.o.requires
CMakeFiles/GPSBuddy.dir/requires: CMakeFiles/GPSBuddy.dir/src/includes/CSVdata.cpp.o.requires

.PHONY : CMakeFiles/GPSBuddy.dir/requires

CMakeFiles/GPSBuddy.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/GPSBuddy.dir/cmake_clean.cmake
.PHONY : CMakeFiles/GPSBuddy.dir/clean

CMakeFiles/GPSBuddy.dir/depend:
	cd /Users/donalglavin/Documents/Programming/github/CmakePrograms/GPS_AreaCalculator/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/donalglavin/Documents/Programming/github/CmakePrograms/GPS_AreaCalculator /Users/donalglavin/Documents/Programming/github/CmakePrograms/GPS_AreaCalculator /Users/donalglavin/Documents/Programming/github/CmakePrograms/GPS_AreaCalculator/build /Users/donalglavin/Documents/Programming/github/CmakePrograms/GPS_AreaCalculator/build /Users/donalglavin/Documents/Programming/github/CmakePrograms/GPS_AreaCalculator/build/CMakeFiles/GPSBuddy.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/GPSBuddy.dir/depend

