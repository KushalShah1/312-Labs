# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.14

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.2.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.2.1\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\kusha\Desktop\312\GameOfLife

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\kusha\Desktop\312\GameOfLife\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/GameOfLife.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/GameOfLife.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/GameOfLife.dir/flags.make

CMakeFiles/GameOfLife.dir/life_driver.c.obj: CMakeFiles/GameOfLife.dir/flags.make
CMakeFiles/GameOfLife.dir/life_driver.c.obj: CMakeFiles/GameOfLife.dir/includes_C.rsp
CMakeFiles/GameOfLife.dir/life_driver.c.obj: ../life_driver.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\kusha\Desktop\312\GameOfLife\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/GameOfLife.dir/life_driver.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\GameOfLife.dir\life_driver.c.obj   -c C:\Users\kusha\Desktop\312\GameOfLife\life_driver.c

CMakeFiles/GameOfLife.dir/life_driver.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/GameOfLife.dir/life_driver.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\kusha\Desktop\312\GameOfLife\life_driver.c > CMakeFiles\GameOfLife.dir\life_driver.c.i

CMakeFiles/GameOfLife.dir/life_driver.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/GameOfLife.dir/life_driver.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\kusha\Desktop\312\GameOfLife\life_driver.c -o CMakeFiles\GameOfLife.dir\life_driver.c.s

CMakeFiles/GameOfLife.dir/life.c.obj: CMakeFiles/GameOfLife.dir/flags.make
CMakeFiles/GameOfLife.dir/life.c.obj: CMakeFiles/GameOfLife.dir/includes_C.rsp
CMakeFiles/GameOfLife.dir/life.c.obj: ../life.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\kusha\Desktop\312\GameOfLife\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/GameOfLife.dir/life.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\GameOfLife.dir\life.c.obj   -c C:\Users\kusha\Desktop\312\GameOfLife\life.c

CMakeFiles/GameOfLife.dir/life.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/GameOfLife.dir/life.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\kusha\Desktop\312\GameOfLife\life.c > CMakeFiles\GameOfLife.dir\life.c.i

CMakeFiles/GameOfLife.dir/life.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/GameOfLife.dir/life.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\kusha\Desktop\312\GameOfLife\life.c -o CMakeFiles\GameOfLife.dir\life.c.s

# Object files for target GameOfLife
GameOfLife_OBJECTS = \
"CMakeFiles/GameOfLife.dir/life_driver.c.obj" \
"CMakeFiles/GameOfLife.dir/life.c.obj"

# External object files for target GameOfLife
GameOfLife_EXTERNAL_OBJECTS =

GameOfLife.exe: CMakeFiles/GameOfLife.dir/life_driver.c.obj
GameOfLife.exe: CMakeFiles/GameOfLife.dir/life.c.obj
GameOfLife.exe: CMakeFiles/GameOfLife.dir/build.make
GameOfLife.exe: CMakeFiles/GameOfLife.dir/linklibs.rsp
GameOfLife.exe: CMakeFiles/GameOfLife.dir/objects1.rsp
GameOfLife.exe: CMakeFiles/GameOfLife.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\kusha\Desktop\312\GameOfLife\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable GameOfLife.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\GameOfLife.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/GameOfLife.dir/build: GameOfLife.exe

.PHONY : CMakeFiles/GameOfLife.dir/build

CMakeFiles/GameOfLife.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\GameOfLife.dir\cmake_clean.cmake
.PHONY : CMakeFiles/GameOfLife.dir/clean

CMakeFiles/GameOfLife.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\kusha\Desktop\312\GameOfLife C:\Users\kusha\Desktop\312\GameOfLife C:\Users\kusha\Desktop\312\GameOfLife\cmake-build-debug C:\Users\kusha\Desktop\312\GameOfLife\cmake-build-debug C:\Users\kusha\Desktop\312\GameOfLife\cmake-build-debug\CMakeFiles\GameOfLife.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/GameOfLife.dir/depend
