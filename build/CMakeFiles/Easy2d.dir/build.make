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
CMAKE_SOURCE_DIR = /home/brady/Desktop/code/cpp/Easy2d

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/brady/Desktop/code/cpp/Easy2d/build

# Include any dependencies generated for this target.
include CMakeFiles/Easy2d.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Easy2d.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Easy2d.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Easy2d.dir/flags.make

CMakeFiles/Easy2d.dir/Error.cpp.o: CMakeFiles/Easy2d.dir/flags.make
CMakeFiles/Easy2d.dir/Error.cpp.o: ../Error.cpp
CMakeFiles/Easy2d.dir/Error.cpp.o: CMakeFiles/Easy2d.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/brady/Desktop/code/cpp/Easy2d/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Easy2d.dir/Error.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Easy2d.dir/Error.cpp.o -MF CMakeFiles/Easy2d.dir/Error.cpp.o.d -o CMakeFiles/Easy2d.dir/Error.cpp.o -c /home/brady/Desktop/code/cpp/Easy2d/Error.cpp

CMakeFiles/Easy2d.dir/Error.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Easy2d.dir/Error.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/brady/Desktop/code/cpp/Easy2d/Error.cpp > CMakeFiles/Easy2d.dir/Error.cpp.i

CMakeFiles/Easy2d.dir/Error.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Easy2d.dir/Error.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/brady/Desktop/code/cpp/Easy2d/Error.cpp -o CMakeFiles/Easy2d.dir/Error.cpp.s

CMakeFiles/Easy2d.dir/Renderer.cpp.o: CMakeFiles/Easy2d.dir/flags.make
CMakeFiles/Easy2d.dir/Renderer.cpp.o: ../Renderer.cpp
CMakeFiles/Easy2d.dir/Renderer.cpp.o: CMakeFiles/Easy2d.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/brady/Desktop/code/cpp/Easy2d/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Easy2d.dir/Renderer.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Easy2d.dir/Renderer.cpp.o -MF CMakeFiles/Easy2d.dir/Renderer.cpp.o.d -o CMakeFiles/Easy2d.dir/Renderer.cpp.o -c /home/brady/Desktop/code/cpp/Easy2d/Renderer.cpp

CMakeFiles/Easy2d.dir/Renderer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Easy2d.dir/Renderer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/brady/Desktop/code/cpp/Easy2d/Renderer.cpp > CMakeFiles/Easy2d.dir/Renderer.cpp.i

CMakeFiles/Easy2d.dir/Renderer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Easy2d.dir/Renderer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/brady/Desktop/code/cpp/Easy2d/Renderer.cpp -o CMakeFiles/Easy2d.dir/Renderer.cpp.s

CMakeFiles/Easy2d.dir/Sprite.cpp.o: CMakeFiles/Easy2d.dir/flags.make
CMakeFiles/Easy2d.dir/Sprite.cpp.o: ../Sprite.cpp
CMakeFiles/Easy2d.dir/Sprite.cpp.o: CMakeFiles/Easy2d.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/brady/Desktop/code/cpp/Easy2d/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Easy2d.dir/Sprite.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Easy2d.dir/Sprite.cpp.o -MF CMakeFiles/Easy2d.dir/Sprite.cpp.o.d -o CMakeFiles/Easy2d.dir/Sprite.cpp.o -c /home/brady/Desktop/code/cpp/Easy2d/Sprite.cpp

CMakeFiles/Easy2d.dir/Sprite.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Easy2d.dir/Sprite.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/brady/Desktop/code/cpp/Easy2d/Sprite.cpp > CMakeFiles/Easy2d.dir/Sprite.cpp.i

CMakeFiles/Easy2d.dir/Sprite.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Easy2d.dir/Sprite.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/brady/Desktop/code/cpp/Easy2d/Sprite.cpp -o CMakeFiles/Easy2d.dir/Sprite.cpp.s

CMakeFiles/Easy2d.dir/Texture.cpp.o: CMakeFiles/Easy2d.dir/flags.make
CMakeFiles/Easy2d.dir/Texture.cpp.o: ../Texture.cpp
CMakeFiles/Easy2d.dir/Texture.cpp.o: CMakeFiles/Easy2d.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/brady/Desktop/code/cpp/Easy2d/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Easy2d.dir/Texture.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Easy2d.dir/Texture.cpp.o -MF CMakeFiles/Easy2d.dir/Texture.cpp.o.d -o CMakeFiles/Easy2d.dir/Texture.cpp.o -c /home/brady/Desktop/code/cpp/Easy2d/Texture.cpp

CMakeFiles/Easy2d.dir/Texture.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Easy2d.dir/Texture.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/brady/Desktop/code/cpp/Easy2d/Texture.cpp > CMakeFiles/Easy2d.dir/Texture.cpp.i

CMakeFiles/Easy2d.dir/Texture.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Easy2d.dir/Texture.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/brady/Desktop/code/cpp/Easy2d/Texture.cpp -o CMakeFiles/Easy2d.dir/Texture.cpp.s

CMakeFiles/Easy2d.dir/textureManager.cpp.o: CMakeFiles/Easy2d.dir/flags.make
CMakeFiles/Easy2d.dir/textureManager.cpp.o: ../textureManager.cpp
CMakeFiles/Easy2d.dir/textureManager.cpp.o: CMakeFiles/Easy2d.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/brady/Desktop/code/cpp/Easy2d/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/Easy2d.dir/textureManager.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Easy2d.dir/textureManager.cpp.o -MF CMakeFiles/Easy2d.dir/textureManager.cpp.o.d -o CMakeFiles/Easy2d.dir/textureManager.cpp.o -c /home/brady/Desktop/code/cpp/Easy2d/textureManager.cpp

CMakeFiles/Easy2d.dir/textureManager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Easy2d.dir/textureManager.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/brady/Desktop/code/cpp/Easy2d/textureManager.cpp > CMakeFiles/Easy2d.dir/textureManager.cpp.i

CMakeFiles/Easy2d.dir/textureManager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Easy2d.dir/textureManager.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/brady/Desktop/code/cpp/Easy2d/textureManager.cpp -o CMakeFiles/Easy2d.dir/textureManager.cpp.s

CMakeFiles/Easy2d.dir/Window.cpp.o: CMakeFiles/Easy2d.dir/flags.make
CMakeFiles/Easy2d.dir/Window.cpp.o: ../Window.cpp
CMakeFiles/Easy2d.dir/Window.cpp.o: CMakeFiles/Easy2d.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/brady/Desktop/code/cpp/Easy2d/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/Easy2d.dir/Window.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Easy2d.dir/Window.cpp.o -MF CMakeFiles/Easy2d.dir/Window.cpp.o.d -o CMakeFiles/Easy2d.dir/Window.cpp.o -c /home/brady/Desktop/code/cpp/Easy2d/Window.cpp

CMakeFiles/Easy2d.dir/Window.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Easy2d.dir/Window.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/brady/Desktop/code/cpp/Easy2d/Window.cpp > CMakeFiles/Easy2d.dir/Window.cpp.i

CMakeFiles/Easy2d.dir/Window.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Easy2d.dir/Window.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/brady/Desktop/code/cpp/Easy2d/Window.cpp -o CMakeFiles/Easy2d.dir/Window.cpp.s

# Object files for target Easy2d
Easy2d_OBJECTS = \
"CMakeFiles/Easy2d.dir/Error.cpp.o" \
"CMakeFiles/Easy2d.dir/Renderer.cpp.o" \
"CMakeFiles/Easy2d.dir/Sprite.cpp.o" \
"CMakeFiles/Easy2d.dir/Texture.cpp.o" \
"CMakeFiles/Easy2d.dir/textureManager.cpp.o" \
"CMakeFiles/Easy2d.dir/Window.cpp.o"

# External object files for target Easy2d
Easy2d_EXTERNAL_OBJECTS =

libEasy2d.a: CMakeFiles/Easy2d.dir/Error.cpp.o
libEasy2d.a: CMakeFiles/Easy2d.dir/Renderer.cpp.o
libEasy2d.a: CMakeFiles/Easy2d.dir/Sprite.cpp.o
libEasy2d.a: CMakeFiles/Easy2d.dir/Texture.cpp.o
libEasy2d.a: CMakeFiles/Easy2d.dir/textureManager.cpp.o
libEasy2d.a: CMakeFiles/Easy2d.dir/Window.cpp.o
libEasy2d.a: CMakeFiles/Easy2d.dir/build.make
libEasy2d.a: CMakeFiles/Easy2d.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/brady/Desktop/code/cpp/Easy2d/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX static library libEasy2d.a"
	$(CMAKE_COMMAND) -P CMakeFiles/Easy2d.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Easy2d.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Easy2d.dir/build: libEasy2d.a
.PHONY : CMakeFiles/Easy2d.dir/build

CMakeFiles/Easy2d.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Easy2d.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Easy2d.dir/clean

CMakeFiles/Easy2d.dir/depend:
	cd /home/brady/Desktop/code/cpp/Easy2d/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/brady/Desktop/code/cpp/Easy2d /home/brady/Desktop/code/cpp/Easy2d /home/brady/Desktop/code/cpp/Easy2d/build /home/brady/Desktop/code/cpp/Easy2d/build /home/brady/Desktop/code/cpp/Easy2d/build/CMakeFiles/Easy2d.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Easy2d.dir/depend

