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
CMAKE_SOURCE_DIR = /mnt/c/Users/emanu/Desktop/LPTP

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/c/Users/emanu/Desktop/LPTP/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/LPTP.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/LPTP.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/LPTP.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/LPTP.dir/flags.make

CMakeFiles/LPTP.dir/main.c.o: CMakeFiles/LPTP.dir/flags.make
CMakeFiles/LPTP.dir/main.c.o: ../main.c
CMakeFiles/LPTP.dir/main.c.o: CMakeFiles/LPTP.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/emanu/Desktop/LPTP/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/LPTP.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/LPTP.dir/main.c.o -MF CMakeFiles/LPTP.dir/main.c.o.d -o CMakeFiles/LPTP.dir/main.c.o -c /mnt/c/Users/emanu/Desktop/LPTP/main.c

CMakeFiles/LPTP.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/LPTP.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /mnt/c/Users/emanu/Desktop/LPTP/main.c > CMakeFiles/LPTP.dir/main.c.i

CMakeFiles/LPTP.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/LPTP.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /mnt/c/Users/emanu/Desktop/LPTP/main.c -o CMakeFiles/LPTP.dir/main.c.s

CMakeFiles/LPTP.dir/equipment.c.o: CMakeFiles/LPTP.dir/flags.make
CMakeFiles/LPTP.dir/equipment.c.o: ../equipment.c
CMakeFiles/LPTP.dir/equipment.c.o: CMakeFiles/LPTP.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/emanu/Desktop/LPTP/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/LPTP.dir/equipment.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/LPTP.dir/equipment.c.o -MF CMakeFiles/LPTP.dir/equipment.c.o.d -o CMakeFiles/LPTP.dir/equipment.c.o -c /mnt/c/Users/emanu/Desktop/LPTP/equipment.c

CMakeFiles/LPTP.dir/equipment.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/LPTP.dir/equipment.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /mnt/c/Users/emanu/Desktop/LPTP/equipment.c > CMakeFiles/LPTP.dir/equipment.c.i

CMakeFiles/LPTP.dir/equipment.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/LPTP.dir/equipment.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /mnt/c/Users/emanu/Desktop/LPTP/equipment.c -o CMakeFiles/LPTP.dir/equipment.c.s

CMakeFiles/LPTP.dir/input.c.o: CMakeFiles/LPTP.dir/flags.make
CMakeFiles/LPTP.dir/input.c.o: ../input.c
CMakeFiles/LPTP.dir/input.c.o: CMakeFiles/LPTP.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/emanu/Desktop/LPTP/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/LPTP.dir/input.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/LPTP.dir/input.c.o -MF CMakeFiles/LPTP.dir/input.c.o.d -o CMakeFiles/LPTP.dir/input.c.o -c /mnt/c/Users/emanu/Desktop/LPTP/input.c

CMakeFiles/LPTP.dir/input.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/LPTP.dir/input.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /mnt/c/Users/emanu/Desktop/LPTP/input.c > CMakeFiles/LPTP.dir/input.c.i

CMakeFiles/LPTP.dir/input.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/LPTP.dir/input.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /mnt/c/Users/emanu/Desktop/LPTP/input.c -o CMakeFiles/LPTP.dir/input.c.s

CMakeFiles/LPTP.dir/menu.c.o: CMakeFiles/LPTP.dir/flags.make
CMakeFiles/LPTP.dir/menu.c.o: ../menu.c
CMakeFiles/LPTP.dir/menu.c.o: CMakeFiles/LPTP.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/emanu/Desktop/LPTP/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/LPTP.dir/menu.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/LPTP.dir/menu.c.o -MF CMakeFiles/LPTP.dir/menu.c.o.d -o CMakeFiles/LPTP.dir/menu.c.o -c /mnt/c/Users/emanu/Desktop/LPTP/menu.c

CMakeFiles/LPTP.dir/menu.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/LPTP.dir/menu.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /mnt/c/Users/emanu/Desktop/LPTP/menu.c > CMakeFiles/LPTP.dir/menu.c.i

CMakeFiles/LPTP.dir/menu.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/LPTP.dir/menu.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /mnt/c/Users/emanu/Desktop/LPTP/menu.c -o CMakeFiles/LPTP.dir/menu.c.s

CMakeFiles/LPTP.dir/files.c.o: CMakeFiles/LPTP.dir/flags.make
CMakeFiles/LPTP.dir/files.c.o: ../files.c
CMakeFiles/LPTP.dir/files.c.o: CMakeFiles/LPTP.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/emanu/Desktop/LPTP/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/LPTP.dir/files.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/LPTP.dir/files.c.o -MF CMakeFiles/LPTP.dir/files.c.o.d -o CMakeFiles/LPTP.dir/files.c.o -c /mnt/c/Users/emanu/Desktop/LPTP/files.c

CMakeFiles/LPTP.dir/files.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/LPTP.dir/files.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /mnt/c/Users/emanu/Desktop/LPTP/files.c > CMakeFiles/LPTP.dir/files.c.i

CMakeFiles/LPTP.dir/files.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/LPTP.dir/files.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /mnt/c/Users/emanu/Desktop/LPTP/files.c -o CMakeFiles/LPTP.dir/files.c.s

CMakeFiles/LPTP.dir/user.c.o: CMakeFiles/LPTP.dir/flags.make
CMakeFiles/LPTP.dir/user.c.o: ../user.c
CMakeFiles/LPTP.dir/user.c.o: CMakeFiles/LPTP.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/emanu/Desktop/LPTP/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/LPTP.dir/user.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/LPTP.dir/user.c.o -MF CMakeFiles/LPTP.dir/user.c.o.d -o CMakeFiles/LPTP.dir/user.c.o -c /mnt/c/Users/emanu/Desktop/LPTP/user.c

CMakeFiles/LPTP.dir/user.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/LPTP.dir/user.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /mnt/c/Users/emanu/Desktop/LPTP/user.c > CMakeFiles/LPTP.dir/user.c.i

CMakeFiles/LPTP.dir/user.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/LPTP.dir/user.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /mnt/c/Users/emanu/Desktop/LPTP/user.c -o CMakeFiles/LPTP.dir/user.c.s

CMakeFiles/LPTP.dir/memory.c.o: CMakeFiles/LPTP.dir/flags.make
CMakeFiles/LPTP.dir/memory.c.o: ../memory.c
CMakeFiles/LPTP.dir/memory.c.o: CMakeFiles/LPTP.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/emanu/Desktop/LPTP/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object CMakeFiles/LPTP.dir/memory.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/LPTP.dir/memory.c.o -MF CMakeFiles/LPTP.dir/memory.c.o.d -o CMakeFiles/LPTP.dir/memory.c.o -c /mnt/c/Users/emanu/Desktop/LPTP/memory.c

CMakeFiles/LPTP.dir/memory.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/LPTP.dir/memory.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /mnt/c/Users/emanu/Desktop/LPTP/memory.c > CMakeFiles/LPTP.dir/memory.c.i

CMakeFiles/LPTP.dir/memory.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/LPTP.dir/memory.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /mnt/c/Users/emanu/Desktop/LPTP/memory.c -o CMakeFiles/LPTP.dir/memory.c.s

CMakeFiles/LPTP.dir/list.c.o: CMakeFiles/LPTP.dir/flags.make
CMakeFiles/LPTP.dir/list.c.o: ../list.c
CMakeFiles/LPTP.dir/list.c.o: CMakeFiles/LPTP.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/emanu/Desktop/LPTP/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building C object CMakeFiles/LPTP.dir/list.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/LPTP.dir/list.c.o -MF CMakeFiles/LPTP.dir/list.c.o.d -o CMakeFiles/LPTP.dir/list.c.o -c /mnt/c/Users/emanu/Desktop/LPTP/list.c

CMakeFiles/LPTP.dir/list.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/LPTP.dir/list.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /mnt/c/Users/emanu/Desktop/LPTP/list.c > CMakeFiles/LPTP.dir/list.c.i

CMakeFiles/LPTP.dir/list.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/LPTP.dir/list.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /mnt/c/Users/emanu/Desktop/LPTP/list.c -o CMakeFiles/LPTP.dir/list.c.s

CMakeFiles/LPTP.dir/search.c.o: CMakeFiles/LPTP.dir/flags.make
CMakeFiles/LPTP.dir/search.c.o: ../search.c
CMakeFiles/LPTP.dir/search.c.o: CMakeFiles/LPTP.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/emanu/Desktop/LPTP/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building C object CMakeFiles/LPTP.dir/search.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/LPTP.dir/search.c.o -MF CMakeFiles/LPTP.dir/search.c.o.d -o CMakeFiles/LPTP.dir/search.c.o -c /mnt/c/Users/emanu/Desktop/LPTP/search.c

CMakeFiles/LPTP.dir/search.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/LPTP.dir/search.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /mnt/c/Users/emanu/Desktop/LPTP/search.c > CMakeFiles/LPTP.dir/search.c.i

CMakeFiles/LPTP.dir/search.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/LPTP.dir/search.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /mnt/c/Users/emanu/Desktop/LPTP/search.c -o CMakeFiles/LPTP.dir/search.c.s

# Object files for target LPTP
LPTP_OBJECTS = \
"CMakeFiles/LPTP.dir/main.c.o" \
"CMakeFiles/LPTP.dir/equipment.c.o" \
"CMakeFiles/LPTP.dir/input.c.o" \
"CMakeFiles/LPTP.dir/menu.c.o" \
"CMakeFiles/LPTP.dir/files.c.o" \
"CMakeFiles/LPTP.dir/user.c.o" \
"CMakeFiles/LPTP.dir/memory.c.o" \
"CMakeFiles/LPTP.dir/list.c.o" \
"CMakeFiles/LPTP.dir/search.c.o"

# External object files for target LPTP
LPTP_EXTERNAL_OBJECTS =

LPTP: CMakeFiles/LPTP.dir/main.c.o
LPTP: CMakeFiles/LPTP.dir/equipment.c.o
LPTP: CMakeFiles/LPTP.dir/input.c.o
LPTP: CMakeFiles/LPTP.dir/menu.c.o
LPTP: CMakeFiles/LPTP.dir/files.c.o
LPTP: CMakeFiles/LPTP.dir/user.c.o
LPTP: CMakeFiles/LPTP.dir/memory.c.o
LPTP: CMakeFiles/LPTP.dir/list.c.o
LPTP: CMakeFiles/LPTP.dir/search.c.o
LPTP: CMakeFiles/LPTP.dir/build.make
LPTP: CMakeFiles/LPTP.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/c/Users/emanu/Desktop/LPTP/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Linking C executable LPTP"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/LPTP.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/LPTP.dir/build: LPTP
.PHONY : CMakeFiles/LPTP.dir/build

CMakeFiles/LPTP.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/LPTP.dir/cmake_clean.cmake
.PHONY : CMakeFiles/LPTP.dir/clean

CMakeFiles/LPTP.dir/depend:
	cd /mnt/c/Users/emanu/Desktop/LPTP/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/c/Users/emanu/Desktop/LPTP /mnt/c/Users/emanu/Desktop/LPTP /mnt/c/Users/emanu/Desktop/LPTP/cmake-build-debug /mnt/c/Users/emanu/Desktop/LPTP/cmake-build-debug /mnt/c/Users/emanu/Desktop/LPTP/cmake-build-debug/CMakeFiles/LPTP.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/LPTP.dir/depend

