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
CMAKE_SOURCE_DIR = /Users/donalglavin/Documents/Programming/MyGithub/GTKprograms/GTK_Hello_World

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/donalglavin/Documents/Programming/MyGithub/GTKprograms/GTK_Hello_World/build

# Include any dependencies generated for this target.
include CMakeFiles/HelloWorldGTK.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/HelloWorldGTK.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/HelloWorldGTK.dir/flags.make

CMakeFiles/HelloWorldGTK.dir/src/gtk_hello_world.c.o: CMakeFiles/HelloWorldGTK.dir/flags.make
CMakeFiles/HelloWorldGTK.dir/src/gtk_hello_world.c.o: ../src/gtk_hello_world.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/donalglavin/Documents/Programming/MyGithub/GTKprograms/GTK_Hello_World/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/HelloWorldGTK.dir/src/gtk_hello_world.c.o"
	/opt/local/bin/gcc-mp-6  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/HelloWorldGTK.dir/src/gtk_hello_world.c.o   -c /Users/donalglavin/Documents/Programming/MyGithub/GTKprograms/GTK_Hello_World/src/gtk_hello_world.c

CMakeFiles/HelloWorldGTK.dir/src/gtk_hello_world.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/HelloWorldGTK.dir/src/gtk_hello_world.c.i"
	/opt/local/bin/gcc-mp-6  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/donalglavin/Documents/Programming/MyGithub/GTKprograms/GTK_Hello_World/src/gtk_hello_world.c > CMakeFiles/HelloWorldGTK.dir/src/gtk_hello_world.c.i

CMakeFiles/HelloWorldGTK.dir/src/gtk_hello_world.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/HelloWorldGTK.dir/src/gtk_hello_world.c.s"
	/opt/local/bin/gcc-mp-6  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/donalglavin/Documents/Programming/MyGithub/GTKprograms/GTK_Hello_World/src/gtk_hello_world.c -o CMakeFiles/HelloWorldGTK.dir/src/gtk_hello_world.c.s

CMakeFiles/HelloWorldGTK.dir/src/gtk_hello_world.c.o.requires:

.PHONY : CMakeFiles/HelloWorldGTK.dir/src/gtk_hello_world.c.o.requires

CMakeFiles/HelloWorldGTK.dir/src/gtk_hello_world.c.o.provides: CMakeFiles/HelloWorldGTK.dir/src/gtk_hello_world.c.o.requires
	$(MAKE) -f CMakeFiles/HelloWorldGTK.dir/build.make CMakeFiles/HelloWorldGTK.dir/src/gtk_hello_world.c.o.provides.build
.PHONY : CMakeFiles/HelloWorldGTK.dir/src/gtk_hello_world.c.o.provides

CMakeFiles/HelloWorldGTK.dir/src/gtk_hello_world.c.o.provides.build: CMakeFiles/HelloWorldGTK.dir/src/gtk_hello_world.c.o


# Object files for target HelloWorldGTK
HelloWorldGTK_OBJECTS = \
"CMakeFiles/HelloWorldGTK.dir/src/gtk_hello_world.c.o"

# External object files for target HelloWorldGTK
HelloWorldGTK_EXTERNAL_OBJECTS =

HelloWorldGTK: CMakeFiles/HelloWorldGTK.dir/src/gtk_hello_world.c.o
HelloWorldGTK: CMakeFiles/HelloWorldGTK.dir/build.make
HelloWorldGTK: CMakeFiles/HelloWorldGTK.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/donalglavin/Documents/Programming/MyGithub/GTKprograms/GTK_Hello_World/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable HelloWorldGTK"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/HelloWorldGTK.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/HelloWorldGTK.dir/build: HelloWorldGTK

.PHONY : CMakeFiles/HelloWorldGTK.dir/build

CMakeFiles/HelloWorldGTK.dir/requires: CMakeFiles/HelloWorldGTK.dir/src/gtk_hello_world.c.o.requires

.PHONY : CMakeFiles/HelloWorldGTK.dir/requires

CMakeFiles/HelloWorldGTK.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/HelloWorldGTK.dir/cmake_clean.cmake
.PHONY : CMakeFiles/HelloWorldGTK.dir/clean

CMakeFiles/HelloWorldGTK.dir/depend:
	cd /Users/donalglavin/Documents/Programming/MyGithub/GTKprograms/GTK_Hello_World/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/donalglavin/Documents/Programming/MyGithub/GTKprograms/GTK_Hello_World /Users/donalglavin/Documents/Programming/MyGithub/GTKprograms/GTK_Hello_World /Users/donalglavin/Documents/Programming/MyGithub/GTKprograms/GTK_Hello_World/build /Users/donalglavin/Documents/Programming/MyGithub/GTKprograms/GTK_Hello_World/build /Users/donalglavin/Documents/Programming/MyGithub/GTKprograms/GTK_Hello_World/build/CMakeFiles/HelloWorldGTK.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/HelloWorldGTK.dir/depend

