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
CMAKE_SOURCE_DIR = D:\labs\C++-labs\rubezhka

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\labs\C++-labs\rubezhka\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/rubezhka.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/rubezhka.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/rubezhka.dir/flags.make

CMakeFiles/rubezhka.dir/main.cpp.obj: CMakeFiles/rubezhka.dir/flags.make
CMakeFiles/rubezhka.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\labs\C++-labs\rubezhka\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/rubezhka.dir/main.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\rubezhka.dir\main.cpp.obj -c D:\labs\C++-labs\rubezhka\main.cpp

CMakeFiles/rubezhka.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/rubezhka.dir/main.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\labs\C++-labs\rubezhka\main.cpp > CMakeFiles\rubezhka.dir\main.cpp.i

CMakeFiles/rubezhka.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/rubezhka.dir/main.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\labs\C++-labs\rubezhka\main.cpp -o CMakeFiles\rubezhka.dir\main.cpp.s

CMakeFiles/rubezhka.dir/PowerTwo.cpp.obj: CMakeFiles/rubezhka.dir/flags.make
CMakeFiles/rubezhka.dir/PowerTwo.cpp.obj: ../PowerTwo.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\labs\C++-labs\rubezhka\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/rubezhka.dir/PowerTwo.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\rubezhka.dir\PowerTwo.cpp.obj -c D:\labs\C++-labs\rubezhka\PowerTwo.cpp

CMakeFiles/rubezhka.dir/PowerTwo.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/rubezhka.dir/PowerTwo.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\labs\C++-labs\rubezhka\PowerTwo.cpp > CMakeFiles\rubezhka.dir\PowerTwo.cpp.i

CMakeFiles/rubezhka.dir/PowerTwo.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/rubezhka.dir/PowerTwo.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\labs\C++-labs\rubezhka\PowerTwo.cpp -o CMakeFiles\rubezhka.dir\PowerTwo.cpp.s

# Object files for target rubezhka
rubezhka_OBJECTS = \
"CMakeFiles/rubezhka.dir/main.cpp.obj" \
"CMakeFiles/rubezhka.dir/PowerTwo.cpp.obj"

# External object files for target rubezhka
rubezhka_EXTERNAL_OBJECTS =

rubezhka.exe: CMakeFiles/rubezhka.dir/main.cpp.obj
rubezhka.exe: CMakeFiles/rubezhka.dir/PowerTwo.cpp.obj
rubezhka.exe: CMakeFiles/rubezhka.dir/build.make
rubezhka.exe: CMakeFiles/rubezhka.dir/linklibs.rsp
rubezhka.exe: CMakeFiles/rubezhka.dir/objects1.rsp
rubezhka.exe: CMakeFiles/rubezhka.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\labs\C++-labs\rubezhka\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable rubezhka.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\rubezhka.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/rubezhka.dir/build: rubezhka.exe

.PHONY : CMakeFiles/rubezhka.dir/build

CMakeFiles/rubezhka.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\rubezhka.dir\cmake_clean.cmake
.PHONY : CMakeFiles/rubezhka.dir/clean

CMakeFiles/rubezhka.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\labs\C++-labs\rubezhka D:\labs\C++-labs\rubezhka D:\labs\C++-labs\rubezhka\cmake-build-debug D:\labs\C++-labs\rubezhka\cmake-build-debug D:\labs\C++-labs\rubezhka\cmake-build-debug\CMakeFiles\rubezhka.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/rubezhka.dir/depend
