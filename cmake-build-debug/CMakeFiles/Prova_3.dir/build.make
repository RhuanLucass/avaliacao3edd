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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.2.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.2.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\rhuan\Desktop\Ceferno\Lab. Estrutura de Dados\Codigos\Atividades\Prova_3"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\rhuan\Desktop\Ceferno\Lab. Estrutura de Dados\Codigos\Atividades\Prova_3\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Prova_3.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/Prova_3.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Prova_3.dir/flags.make

CMakeFiles/Prova_3.dir/main.c.obj: CMakeFiles/Prova_3.dir/flags.make
CMakeFiles/Prova_3.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\rhuan\Desktop\Ceferno\Lab. Estrutura de Dados\Codigos\Atividades\Prova_3\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Prova_3.dir/main.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Prova_3.dir\main.c.obj -c "C:\Users\rhuan\Desktop\Ceferno\Lab. Estrutura de Dados\Codigos\Atividades\Prova_3\main.c"

CMakeFiles/Prova_3.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Prova_3.dir/main.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "C:\Users\rhuan\Desktop\Ceferno\Lab. Estrutura de Dados\Codigos\Atividades\Prova_3\main.c" > CMakeFiles\Prova_3.dir\main.c.i

CMakeFiles/Prova_3.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Prova_3.dir/main.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "C:\Users\rhuan\Desktop\Ceferno\Lab. Estrutura de Dados\Codigos\Atividades\Prova_3\main.c" -o CMakeFiles\Prova_3.dir\main.c.s

CMakeFiles/Prova_3.dir/Heap.c.obj: CMakeFiles/Prova_3.dir/flags.make
CMakeFiles/Prova_3.dir/Heap.c.obj: ../Heap.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\rhuan\Desktop\Ceferno\Lab. Estrutura de Dados\Codigos\Atividades\Prova_3\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/Prova_3.dir/Heap.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Prova_3.dir\Heap.c.obj -c "C:\Users\rhuan\Desktop\Ceferno\Lab. Estrutura de Dados\Codigos\Atividades\Prova_3\Heap.c"

CMakeFiles/Prova_3.dir/Heap.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Prova_3.dir/Heap.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "C:\Users\rhuan\Desktop\Ceferno\Lab. Estrutura de Dados\Codigos\Atividades\Prova_3\Heap.c" > CMakeFiles\Prova_3.dir\Heap.c.i

CMakeFiles/Prova_3.dir/Heap.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Prova_3.dir/Heap.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "C:\Users\rhuan\Desktop\Ceferno\Lab. Estrutura de Dados\Codigos\Atividades\Prova_3\Heap.c" -o CMakeFiles\Prova_3.dir\Heap.c.s

CMakeFiles/Prova_3.dir/Grafo.c.obj: CMakeFiles/Prova_3.dir/flags.make
CMakeFiles/Prova_3.dir/Grafo.c.obj: ../Grafo.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\rhuan\Desktop\Ceferno\Lab. Estrutura de Dados\Codigos\Atividades\Prova_3\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/Prova_3.dir/Grafo.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Prova_3.dir\Grafo.c.obj -c "C:\Users\rhuan\Desktop\Ceferno\Lab. Estrutura de Dados\Codigos\Atividades\Prova_3\Grafo.c"

CMakeFiles/Prova_3.dir/Grafo.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Prova_3.dir/Grafo.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "C:\Users\rhuan\Desktop\Ceferno\Lab. Estrutura de Dados\Codigos\Atividades\Prova_3\Grafo.c" > CMakeFiles\Prova_3.dir\Grafo.c.i

CMakeFiles/Prova_3.dir/Grafo.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Prova_3.dir/Grafo.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "C:\Users\rhuan\Desktop\Ceferno\Lab. Estrutura de Dados\Codigos\Atividades\Prova_3\Grafo.c" -o CMakeFiles\Prova_3.dir\Grafo.c.s

# Object files for target Prova_3
Prova_3_OBJECTS = \
"CMakeFiles/Prova_3.dir/main.c.obj" \
"CMakeFiles/Prova_3.dir/Heap.c.obj" \
"CMakeFiles/Prova_3.dir/Grafo.c.obj"

# External object files for target Prova_3
Prova_3_EXTERNAL_OBJECTS =

Prova_3.exe: CMakeFiles/Prova_3.dir/main.c.obj
Prova_3.exe: CMakeFiles/Prova_3.dir/Heap.c.obj
Prova_3.exe: CMakeFiles/Prova_3.dir/Grafo.c.obj
Prova_3.exe: CMakeFiles/Prova_3.dir/build.make
Prova_3.exe: CMakeFiles/Prova_3.dir/linklibs.rsp
Prova_3.exe: CMakeFiles/Prova_3.dir/objects1.rsp
Prova_3.exe: CMakeFiles/Prova_3.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\rhuan\Desktop\Ceferno\Lab. Estrutura de Dados\Codigos\Atividades\Prova_3\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Linking C executable Prova_3.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Prova_3.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Prova_3.dir/build: Prova_3.exe
.PHONY : CMakeFiles/Prova_3.dir/build

CMakeFiles/Prova_3.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Prova_3.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Prova_3.dir/clean

CMakeFiles/Prova_3.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\rhuan\Desktop\Ceferno\Lab. Estrutura de Dados\Codigos\Atividades\Prova_3" "C:\Users\rhuan\Desktop\Ceferno\Lab. Estrutura de Dados\Codigos\Atividades\Prova_3" "C:\Users\rhuan\Desktop\Ceferno\Lab. Estrutura de Dados\Codigos\Atividades\Prova_3\cmake-build-debug" "C:\Users\rhuan\Desktop\Ceferno\Lab. Estrutura de Dados\Codigos\Atividades\Prova_3\cmake-build-debug" "C:\Users\rhuan\Desktop\Ceferno\Lab. Estrutura de Dados\Codigos\Atividades\Prova_3\cmake-build-debug\CMakeFiles\Prova_3.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Prova_3.dir/depend
