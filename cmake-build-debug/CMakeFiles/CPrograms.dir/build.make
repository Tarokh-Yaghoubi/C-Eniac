# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.23

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2022.2.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2022.2.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\10\CLionProjects\CProgram\C-Eniac

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\10\CLionProjects\CProgram\C-Eniac\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/CPrograms.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/CPrograms.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/CPrograms.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CPrograms.dir/flags.make

CMakeFiles/CPrograms.dir/main.c.obj: CMakeFiles/CPrograms.dir/flags.make
CMakeFiles/CPrograms.dir/main.c.obj: ../main.c
CMakeFiles/CPrograms.dir/main.c.obj: CMakeFiles/CPrograms.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\10\CLionProjects\CProgram\C-Eniac\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/CPrograms.dir/main.c.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/CPrograms.dir/main.c.obj -MF CMakeFiles\CPrograms.dir\main.c.obj.d -o CMakeFiles\CPrograms.dir\main.c.obj -c C:\Users\10\CLionProjects\CProgram\C-Eniac\main.c

CMakeFiles/CPrograms.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/CPrograms.dir/main.c.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\10\CLionProjects\CProgram\C-Eniac\main.c > CMakeFiles\CPrograms.dir\main.c.i

CMakeFiles/CPrograms.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/CPrograms.dir/main.c.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\10\CLionProjects\CProgram\C-Eniac\main.c -o CMakeFiles\CPrograms.dir\main.c.s

CMakeFiles/CPrograms.dir/functions.c.obj: CMakeFiles/CPrograms.dir/flags.make
CMakeFiles/CPrograms.dir/functions.c.obj: ../functions.c
CMakeFiles/CPrograms.dir/functions.c.obj: CMakeFiles/CPrograms.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\10\CLionProjects\CProgram\C-Eniac\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/CPrograms.dir/functions.c.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/CPrograms.dir/functions.c.obj -MF CMakeFiles\CPrograms.dir\functions.c.obj.d -o CMakeFiles\CPrograms.dir\functions.c.obj -c C:\Users\10\CLionProjects\CProgram\C-Eniac\functions.c

CMakeFiles/CPrograms.dir/functions.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/CPrograms.dir/functions.c.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\10\CLionProjects\CProgram\C-Eniac\functions.c > CMakeFiles\CPrograms.dir\functions.c.i

CMakeFiles/CPrograms.dir/functions.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/CPrograms.dir/functions.c.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\10\CLionProjects\CProgram\C-Eniac\functions.c -o CMakeFiles\CPrograms.dir\functions.c.s

CMakeFiles/CPrograms.dir/sum_function.c.obj: CMakeFiles/CPrograms.dir/flags.make
CMakeFiles/CPrograms.dir/sum_function.c.obj: ../sum_function.c
CMakeFiles/CPrograms.dir/sum_function.c.obj: CMakeFiles/CPrograms.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\10\CLionProjects\CProgram\C-Eniac\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/CPrograms.dir/sum_function.c.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/CPrograms.dir/sum_function.c.obj -MF CMakeFiles\CPrograms.dir\sum_function.c.obj.d -o CMakeFiles\CPrograms.dir\sum_function.c.obj -c C:\Users\10\CLionProjects\CProgram\C-Eniac\sum_function.c

CMakeFiles/CPrograms.dir/sum_function.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/CPrograms.dir/sum_function.c.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\10\CLionProjects\CProgram\C-Eniac\sum_function.c > CMakeFiles\CPrograms.dir\sum_function.c.i

CMakeFiles/CPrograms.dir/sum_function.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/CPrograms.dir/sum_function.c.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\10\CLionProjects\CProgram\C-Eniac\sum_function.c -o CMakeFiles\CPrograms.dir\sum_function.c.s

CMakeFiles/CPrograms.dir/power_function.c.obj: CMakeFiles/CPrograms.dir/flags.make
CMakeFiles/CPrograms.dir/power_function.c.obj: ../power_function.c
CMakeFiles/CPrograms.dir/power_function.c.obj: CMakeFiles/CPrograms.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\10\CLionProjects\CProgram\C-Eniac\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/CPrograms.dir/power_function.c.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/CPrograms.dir/power_function.c.obj -MF CMakeFiles\CPrograms.dir\power_function.c.obj.d -o CMakeFiles\CPrograms.dir\power_function.c.obj -c C:\Users\10\CLionProjects\CProgram\C-Eniac\power_function.c

CMakeFiles/CPrograms.dir/power_function.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/CPrograms.dir/power_function.c.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\10\CLionProjects\CProgram\C-Eniac\power_function.c > CMakeFiles\CPrograms.dir\power_function.c.i

CMakeFiles/CPrograms.dir/power_function.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/CPrograms.dir/power_function.c.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\10\CLionProjects\CProgram\C-Eniac\power_function.c -o CMakeFiles\CPrograms.dir\power_function.c.s

CMakeFiles/CPrograms.dir/fahr_to_cel_functional.c.obj: CMakeFiles/CPrograms.dir/flags.make
CMakeFiles/CPrograms.dir/fahr_to_cel_functional.c.obj: ../fahr_to_cel_functional.c
CMakeFiles/CPrograms.dir/fahr_to_cel_functional.c.obj: CMakeFiles/CPrograms.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\10\CLionProjects\CProgram\C-Eniac\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/CPrograms.dir/fahr_to_cel_functional.c.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/CPrograms.dir/fahr_to_cel_functional.c.obj -MF CMakeFiles\CPrograms.dir\fahr_to_cel_functional.c.obj.d -o CMakeFiles\CPrograms.dir\fahr_to_cel_functional.c.obj -c C:\Users\10\CLionProjects\CProgram\C-Eniac\fahr_to_cel_functional.c

CMakeFiles/CPrograms.dir/fahr_to_cel_functional.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/CPrograms.dir/fahr_to_cel_functional.c.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\10\CLionProjects\CProgram\C-Eniac\fahr_to_cel_functional.c > CMakeFiles\CPrograms.dir\fahr_to_cel_functional.c.i

CMakeFiles/CPrograms.dir/fahr_to_cel_functional.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/CPrograms.dir/fahr_to_cel_functional.c.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\10\CLionProjects\CProgram\C-Eniac\fahr_to_cel_functional.c -o CMakeFiles\CPrograms.dir\fahr_to_cel_functional.c.s

CMakeFiles/CPrograms.dir/OneWordPerLine.c.obj: CMakeFiles/CPrograms.dir/flags.make
CMakeFiles/CPrograms.dir/OneWordPerLine.c.obj: ../OneWordPerLine.c
CMakeFiles/CPrograms.dir/OneWordPerLine.c.obj: CMakeFiles/CPrograms.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\10\CLionProjects\CProgram\C-Eniac\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/CPrograms.dir/OneWordPerLine.c.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/CPrograms.dir/OneWordPerLine.c.obj -MF CMakeFiles\CPrograms.dir\OneWordPerLine.c.obj.d -o CMakeFiles\CPrograms.dir\OneWordPerLine.c.obj -c C:\Users\10\CLionProjects\CProgram\C-Eniac\OneWordPerLine.c

CMakeFiles/CPrograms.dir/OneWordPerLine.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/CPrograms.dir/OneWordPerLine.c.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\10\CLionProjects\CProgram\C-Eniac\OneWordPerLine.c > CMakeFiles\CPrograms.dir\OneWordPerLine.c.i

CMakeFiles/CPrograms.dir/OneWordPerLine.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/CPrograms.dir/OneWordPerLine.c.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\10\CLionProjects\CProgram\C-Eniac\OneWordPerLine.c -o CMakeFiles\CPrograms.dir\OneWordPerLine.c.s

# Object files for target CPrograms
CPrograms_OBJECTS = \
"CMakeFiles/CPrograms.dir/main.c.obj" \
"CMakeFiles/CPrograms.dir/functions.c.obj" \
"CMakeFiles/CPrograms.dir/sum_function.c.obj" \
"CMakeFiles/CPrograms.dir/power_function.c.obj" \
"CMakeFiles/CPrograms.dir/fahr_to_cel_functional.c.obj" \
"CMakeFiles/CPrograms.dir/OneWordPerLine.c.obj"

# External object files for target CPrograms
CPrograms_EXTERNAL_OBJECTS =

CPrograms.exe: CMakeFiles/CPrograms.dir/main.c.obj
CPrograms.exe: CMakeFiles/CPrograms.dir/functions.c.obj
CPrograms.exe: CMakeFiles/CPrograms.dir/sum_function.c.obj
CPrograms.exe: CMakeFiles/CPrograms.dir/power_function.c.obj
CPrograms.exe: CMakeFiles/CPrograms.dir/fahr_to_cel_functional.c.obj
CPrograms.exe: CMakeFiles/CPrograms.dir/OneWordPerLine.c.obj
CPrograms.exe: CMakeFiles/CPrograms.dir/build.make
CPrograms.exe: CMakeFiles/CPrograms.dir/linklibs.rsp
CPrograms.exe: CMakeFiles/CPrograms.dir/objects1.rsp
CPrograms.exe: CMakeFiles/CPrograms.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\10\CLionProjects\CProgram\C-Eniac\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking C executable CPrograms.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\CPrograms.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CPrograms.dir/build: CPrograms.exe
.PHONY : CMakeFiles/CPrograms.dir/build

CMakeFiles/CPrograms.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\CPrograms.dir\cmake_clean.cmake
.PHONY : CMakeFiles/CPrograms.dir/clean

CMakeFiles/CPrograms.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\10\CLionProjects\CProgram\C-Eniac C:\Users\10\CLionProjects\CProgram\C-Eniac C:\Users\10\CLionProjects\CProgram\C-Eniac\cmake-build-debug C:\Users\10\CLionProjects\CProgram\C-Eniac\cmake-build-debug C:\Users\10\CLionProjects\CProgram\C-Eniac\cmake-build-debug\CMakeFiles\CPrograms.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/CPrograms.dir/depend

