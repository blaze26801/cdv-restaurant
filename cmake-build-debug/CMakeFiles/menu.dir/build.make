# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "B:\Program Files\JetBrains\CLion 2021.2.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "B:\Program Files\JetBrains\CLion 2021.2.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = B:\Projects\C++\Labs\pprog\restaurant

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = B:\Projects\C++\Labs\pprog\restaurant\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/menu.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/menu.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/menu.dir/flags.make

CMakeFiles/menu.dir/menu.cpp.obj: CMakeFiles/menu.dir/flags.make
CMakeFiles/menu.dir/menu.cpp.obj: ../menu.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=B:\Projects\C++\Labs\pprog\restaurant\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/menu.dir/menu.cpp.obj"
	"B:\Program Files (x86)\mingw-w64\i686-8.1.0-posix-dwarf-rt_v6-rev0\mingw32\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\menu.dir\menu.cpp.obj -c B:\Projects\C++\Labs\pprog\restaurant\menu.cpp

CMakeFiles/menu.dir/menu.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/menu.dir/menu.cpp.i"
	"B:\Program Files (x86)\mingw-w64\i686-8.1.0-posix-dwarf-rt_v6-rev0\mingw32\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E B:\Projects\C++\Labs\pprog\restaurant\menu.cpp > CMakeFiles\menu.dir\menu.cpp.i

CMakeFiles/menu.dir/menu.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/menu.dir/menu.cpp.s"
	"B:\Program Files (x86)\mingw-w64\i686-8.1.0-posix-dwarf-rt_v6-rev0\mingw32\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S B:\Projects\C++\Labs\pprog\restaurant\menu.cpp -o CMakeFiles\menu.dir\menu.cpp.s

# Object files for target menu
menu_OBJECTS = \
"CMakeFiles/menu.dir/menu.cpp.obj"

# External object files for target menu
menu_EXTERNAL_OBJECTS =

menu.exe: CMakeFiles/menu.dir/menu.cpp.obj
menu.exe: CMakeFiles/menu.dir/build.make
menu.exe: CMakeFiles/menu.dir/linklibs.rsp
menu.exe: CMakeFiles/menu.dir/objects1.rsp
menu.exe: CMakeFiles/menu.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=B:\Projects\C++\Labs\pprog\restaurant\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable menu.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\menu.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/menu.dir/build: menu.exe
.PHONY : CMakeFiles/menu.dir/build

CMakeFiles/menu.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\menu.dir\cmake_clean.cmake
.PHONY : CMakeFiles/menu.dir/clean

CMakeFiles/menu.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" B:\Projects\C++\Labs\pprog\restaurant B:\Projects\C++\Labs\pprog\restaurant B:\Projects\C++\Labs\pprog\restaurant\cmake-build-debug B:\Projects\C++\Labs\pprog\restaurant\cmake-build-debug B:\Projects\C++\Labs\pprog\restaurant\cmake-build-debug\CMakeFiles\menu.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/menu.dir/depend

