# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

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
CMAKE_COMMAND = /home/madzia/Documents/clion-2018.3.4/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/madzia/Documents/clion-2018.3.4/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/madzia/Desktop/infa/4 semestr/Cpp/laby/lab3"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/madzia/Desktop/infa/4 semestr/Cpp/laby/lab3/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/lab3.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/lab3.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/lab3.dir/flags.make

CMakeFiles/lab3.dir/library.cpp.o: CMakeFiles/lab3.dir/flags.make
CMakeFiles/lab3.dir/library.cpp.o: ../library.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/madzia/Desktop/infa/4 semestr/Cpp/laby/lab3/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/lab3.dir/library.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lab3.dir/library.cpp.o -c "/home/madzia/Desktop/infa/4 semestr/Cpp/laby/lab3/library.cpp"

CMakeFiles/lab3.dir/library.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab3.dir/library.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/madzia/Desktop/infa/4 semestr/Cpp/laby/lab3/library.cpp" > CMakeFiles/lab3.dir/library.cpp.i

CMakeFiles/lab3.dir/library.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab3.dir/library.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/madzia/Desktop/infa/4 semestr/Cpp/laby/lab3/library.cpp" -o CMakeFiles/lab3.dir/library.cpp.s

CMakeFiles/lab3.dir/main.cpp.o: CMakeFiles/lab3.dir/flags.make
CMakeFiles/lab3.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/madzia/Desktop/infa/4 semestr/Cpp/laby/lab3/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/lab3.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lab3.dir/main.cpp.o -c "/home/madzia/Desktop/infa/4 semestr/Cpp/laby/lab3/main.cpp"

CMakeFiles/lab3.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab3.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/madzia/Desktop/infa/4 semestr/Cpp/laby/lab3/main.cpp" > CMakeFiles/lab3.dir/main.cpp.i

CMakeFiles/lab3.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab3.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/madzia/Desktop/infa/4 semestr/Cpp/laby/lab3/main.cpp" -o CMakeFiles/lab3.dir/main.cpp.s

# Object files for target lab3
lab3_OBJECTS = \
"CMakeFiles/lab3.dir/library.cpp.o" \
"CMakeFiles/lab3.dir/main.cpp.o"

# External object files for target lab3
lab3_EXTERNAL_OBJECTS =

liblab3.a: CMakeFiles/lab3.dir/library.cpp.o
liblab3.a: CMakeFiles/lab3.dir/main.cpp.o
liblab3.a: CMakeFiles/lab3.dir/build.make
liblab3.a: CMakeFiles/lab3.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/madzia/Desktop/infa/4 semestr/Cpp/laby/lab3/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX static library liblab3.a"
	$(CMAKE_COMMAND) -P CMakeFiles/lab3.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/lab3.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/lab3.dir/build: liblab3.a

.PHONY : CMakeFiles/lab3.dir/build

CMakeFiles/lab3.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/lab3.dir/cmake_clean.cmake
.PHONY : CMakeFiles/lab3.dir/clean

CMakeFiles/lab3.dir/depend:
	cd "/home/madzia/Desktop/infa/4 semestr/Cpp/laby/lab3/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/madzia/Desktop/infa/4 semestr/Cpp/laby/lab3" "/home/madzia/Desktop/infa/4 semestr/Cpp/laby/lab3" "/home/madzia/Desktop/infa/4 semestr/Cpp/laby/lab3/cmake-build-debug" "/home/madzia/Desktop/infa/4 semestr/Cpp/laby/lab3/cmake-build-debug" "/home/madzia/Desktop/infa/4 semestr/Cpp/laby/lab3/cmake-build-debug/CMakeFiles/lab3.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/lab3.dir/depend

