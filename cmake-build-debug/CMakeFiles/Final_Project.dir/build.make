# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.30

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2024.3.1.1\bin\cmake\win\x64\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2024.3.1.1\bin\cmake\win\x64\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\mibju\BCIT Course file\Term 2\Comp 2510 Procedural..Source code\Final Project\hospital-management"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\mibju\BCIT Course file\Term 2\Comp 2510 Procedural..Source code\Final Project\hospital-management\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Final_Project.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Final_Project.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Final_Project.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Final_Project.dir/flags.make

CMakeFiles/Final_Project.dir/main.c.obj: CMakeFiles/Final_Project.dir/flags.make
CMakeFiles/Final_Project.dir/main.c.obj: C:/Users/mibju/BCIT\ Course\ file/Term\ 2/Comp\ 2510\ Procedural..Source\ code/Final\ Project/hospital-management/main.c
CMakeFiles/Final_Project.dir/main.c.obj: CMakeFiles/Final_Project.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="C:\Users\mibju\BCIT Course file\Term 2\Comp 2510 Procedural..Source code\Final Project\hospital-management\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Final_Project.dir/main.c.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.1\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/Final_Project.dir/main.c.obj -MF CMakeFiles\Final_Project.dir\main.c.obj.d -o CMakeFiles\Final_Project.dir\main.c.obj -c "C:\Users\mibju\BCIT Course file\Term 2\Comp 2510 Procedural..Source code\Final Project\hospital-management\main.c"

CMakeFiles/Final_Project.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/Final_Project.dir/main.c.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.1\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "C:\Users\mibju\BCIT Course file\Term 2\Comp 2510 Procedural..Source code\Final Project\hospital-management\main.c" > CMakeFiles\Final_Project.dir\main.c.i

CMakeFiles/Final_Project.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/Final_Project.dir/main.c.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.1\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "C:\Users\mibju\BCIT Course file\Term 2\Comp 2510 Procedural..Source code\Final Project\hospital-management\main.c" -o CMakeFiles\Final_Project.dir\main.c.s

# Object files for target Final_Project
Final_Project_OBJECTS = \
"CMakeFiles/Final_Project.dir/main.c.obj"

# External object files for target Final_Project
Final_Project_EXTERNAL_OBJECTS =

Final_Project.exe: CMakeFiles/Final_Project.dir/main.c.obj
Final_Project.exe: CMakeFiles/Final_Project.dir/build.make
Final_Project.exe: CMakeFiles/Final_Project.dir/linkLibs.rsp
Final_Project.exe: CMakeFiles/Final_Project.dir/objects1.rsp
Final_Project.exe: CMakeFiles/Final_Project.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir="C:\Users\mibju\BCIT Course file\Term 2\Comp 2510 Procedural..Source code\Final Project\hospital-management\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Final_Project.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Final_Project.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Final_Project.dir/build: Final_Project.exe
.PHONY : CMakeFiles/Final_Project.dir/build

CMakeFiles/Final_Project.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Final_Project.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Final_Project.dir/clean

CMakeFiles/Final_Project.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\mibju\BCIT Course file\Term 2\Comp 2510 Procedural..Source code\Final Project\hospital-management" "C:\Users\mibju\BCIT Course file\Term 2\Comp 2510 Procedural..Source code\Final Project\hospital-management" "C:\Users\mibju\BCIT Course file\Term 2\Comp 2510 Procedural..Source code\Final Project\hospital-management\cmake-build-debug" "C:\Users\mibju\BCIT Course file\Term 2\Comp 2510 Procedural..Source code\Final Project\hospital-management\cmake-build-debug" "C:\Users\mibju\BCIT Course file\Term 2\Comp 2510 Procedural..Source code\Final Project\hospital-management\cmake-build-debug\CMakeFiles\Final_Project.dir\DependInfo.cmake" "--color=$(COLOR)"
.PHONY : CMakeFiles/Final_Project.dir/depend

