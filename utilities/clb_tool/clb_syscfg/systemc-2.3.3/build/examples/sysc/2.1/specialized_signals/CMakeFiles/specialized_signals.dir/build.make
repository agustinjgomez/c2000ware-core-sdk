# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.13

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
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\systemc-2.3.3

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\systemc-2.3.3\build

# Include any dependencies generated for this target.
include examples/sysc/2.1/specialized_signals/CMakeFiles/specialized_signals.dir/depend.make

# Include the progress variables for this target.
include examples/sysc/2.1/specialized_signals/CMakeFiles/specialized_signals.dir/progress.make

# Include the compile flags for this target's objects.
include examples/sysc/2.1/specialized_signals/CMakeFiles/specialized_signals.dir/flags.make

examples/sysc/2.1/specialized_signals/CMakeFiles/specialized_signals.dir/main.cpp.obj: examples/sysc/2.1/specialized_signals/CMakeFiles/specialized_signals.dir/flags.make
examples/sysc/2.1/specialized_signals/CMakeFiles/specialized_signals.dir/main.cpp.obj: examples/sysc/2.1/specialized_signals/CMakeFiles/specialized_signals.dir/includes_CXX.rsp
examples/sysc/2.1/specialized_signals/CMakeFiles/specialized_signals.dir/main.cpp.obj: ../examples/sysc/2.1/specialized_signals/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\systemc-2.3.3\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object examples/sysc/2.1/specialized_signals/CMakeFiles/specialized_signals.dir/main.cpp.obj"
	cd /d C:\systemc-2.3.3\build\examples\sysc\2.1\specialized_signals && C:\TDM-GCC-64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\specialized_signals.dir\main.cpp.obj -c C:\systemc-2.3.3\examples\sysc\2.1\specialized_signals\main.cpp

examples/sysc/2.1/specialized_signals/CMakeFiles/specialized_signals.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/specialized_signals.dir/main.cpp.i"
	cd /d C:\systemc-2.3.3\build\examples\sysc\2.1\specialized_signals && C:\TDM-GCC-64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\systemc-2.3.3\examples\sysc\2.1\specialized_signals\main.cpp > CMakeFiles\specialized_signals.dir\main.cpp.i

examples/sysc/2.1/specialized_signals/CMakeFiles/specialized_signals.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/specialized_signals.dir/main.cpp.s"
	cd /d C:\systemc-2.3.3\build\examples\sysc\2.1\specialized_signals && C:\TDM-GCC-64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\systemc-2.3.3\examples\sysc\2.1\specialized_signals\main.cpp -o CMakeFiles\specialized_signals.dir\main.cpp.s

examples/sysc/2.1/specialized_signals/CMakeFiles/specialized_signals.dir/scx_signal_int.cpp.obj: examples/sysc/2.1/specialized_signals/CMakeFiles/specialized_signals.dir/flags.make
examples/sysc/2.1/specialized_signals/CMakeFiles/specialized_signals.dir/scx_signal_int.cpp.obj: examples/sysc/2.1/specialized_signals/CMakeFiles/specialized_signals.dir/includes_CXX.rsp
examples/sysc/2.1/specialized_signals/CMakeFiles/specialized_signals.dir/scx_signal_int.cpp.obj: ../examples/sysc/2.1/specialized_signals/scx_signal_int.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\systemc-2.3.3\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object examples/sysc/2.1/specialized_signals/CMakeFiles/specialized_signals.dir/scx_signal_int.cpp.obj"
	cd /d C:\systemc-2.3.3\build\examples\sysc\2.1\specialized_signals && C:\TDM-GCC-64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\specialized_signals.dir\scx_signal_int.cpp.obj -c C:\systemc-2.3.3\examples\sysc\2.1\specialized_signals\scx_signal_int.cpp

examples/sysc/2.1/specialized_signals/CMakeFiles/specialized_signals.dir/scx_signal_int.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/specialized_signals.dir/scx_signal_int.cpp.i"
	cd /d C:\systemc-2.3.3\build\examples\sysc\2.1\specialized_signals && C:\TDM-GCC-64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\systemc-2.3.3\examples\sysc\2.1\specialized_signals\scx_signal_int.cpp > CMakeFiles\specialized_signals.dir\scx_signal_int.cpp.i

examples/sysc/2.1/specialized_signals/CMakeFiles/specialized_signals.dir/scx_signal_int.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/specialized_signals.dir/scx_signal_int.cpp.s"
	cd /d C:\systemc-2.3.3\build\examples\sysc\2.1\specialized_signals && C:\TDM-GCC-64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\systemc-2.3.3\examples\sysc\2.1\specialized_signals\scx_signal_int.cpp -o CMakeFiles\specialized_signals.dir\scx_signal_int.cpp.s

examples/sysc/2.1/specialized_signals/CMakeFiles/specialized_signals.dir/scx_signal_uint.cpp.obj: examples/sysc/2.1/specialized_signals/CMakeFiles/specialized_signals.dir/flags.make
examples/sysc/2.1/specialized_signals/CMakeFiles/specialized_signals.dir/scx_signal_uint.cpp.obj: examples/sysc/2.1/specialized_signals/CMakeFiles/specialized_signals.dir/includes_CXX.rsp
examples/sysc/2.1/specialized_signals/CMakeFiles/specialized_signals.dir/scx_signal_uint.cpp.obj: ../examples/sysc/2.1/specialized_signals/scx_signal_uint.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\systemc-2.3.3\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object examples/sysc/2.1/specialized_signals/CMakeFiles/specialized_signals.dir/scx_signal_uint.cpp.obj"
	cd /d C:\systemc-2.3.3\build\examples\sysc\2.1\specialized_signals && C:\TDM-GCC-64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\specialized_signals.dir\scx_signal_uint.cpp.obj -c C:\systemc-2.3.3\examples\sysc\2.1\specialized_signals\scx_signal_uint.cpp

examples/sysc/2.1/specialized_signals/CMakeFiles/specialized_signals.dir/scx_signal_uint.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/specialized_signals.dir/scx_signal_uint.cpp.i"
	cd /d C:\systemc-2.3.3\build\examples\sysc\2.1\specialized_signals && C:\TDM-GCC-64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\systemc-2.3.3\examples\sysc\2.1\specialized_signals\scx_signal_uint.cpp > CMakeFiles\specialized_signals.dir\scx_signal_uint.cpp.i

examples/sysc/2.1/specialized_signals/CMakeFiles/specialized_signals.dir/scx_signal_uint.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/specialized_signals.dir/scx_signal_uint.cpp.s"
	cd /d C:\systemc-2.3.3\build\examples\sysc\2.1\specialized_signals && C:\TDM-GCC-64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\systemc-2.3.3\examples\sysc\2.1\specialized_signals\scx_signal_uint.cpp -o CMakeFiles\specialized_signals.dir\scx_signal_uint.cpp.s

examples/sysc/2.1/specialized_signals/CMakeFiles/specialized_signals.dir/scx_signal_signed.cpp.obj: examples/sysc/2.1/specialized_signals/CMakeFiles/specialized_signals.dir/flags.make
examples/sysc/2.1/specialized_signals/CMakeFiles/specialized_signals.dir/scx_signal_signed.cpp.obj: examples/sysc/2.1/specialized_signals/CMakeFiles/specialized_signals.dir/includes_CXX.rsp
examples/sysc/2.1/specialized_signals/CMakeFiles/specialized_signals.dir/scx_signal_signed.cpp.obj: ../examples/sysc/2.1/specialized_signals/scx_signal_signed.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\systemc-2.3.3\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object examples/sysc/2.1/specialized_signals/CMakeFiles/specialized_signals.dir/scx_signal_signed.cpp.obj"
	cd /d C:\systemc-2.3.3\build\examples\sysc\2.1\specialized_signals && C:\TDM-GCC-64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\specialized_signals.dir\scx_signal_signed.cpp.obj -c C:\systemc-2.3.3\examples\sysc\2.1\specialized_signals\scx_signal_signed.cpp

examples/sysc/2.1/specialized_signals/CMakeFiles/specialized_signals.dir/scx_signal_signed.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/specialized_signals.dir/scx_signal_signed.cpp.i"
	cd /d C:\systemc-2.3.3\build\examples\sysc\2.1\specialized_signals && C:\TDM-GCC-64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\systemc-2.3.3\examples\sysc\2.1\specialized_signals\scx_signal_signed.cpp > CMakeFiles\specialized_signals.dir\scx_signal_signed.cpp.i

examples/sysc/2.1/specialized_signals/CMakeFiles/specialized_signals.dir/scx_signal_signed.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/specialized_signals.dir/scx_signal_signed.cpp.s"
	cd /d C:\systemc-2.3.3\build\examples\sysc\2.1\specialized_signals && C:\TDM-GCC-64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\systemc-2.3.3\examples\sysc\2.1\specialized_signals\scx_signal_signed.cpp -o CMakeFiles\specialized_signals.dir\scx_signal_signed.cpp.s

examples/sysc/2.1/specialized_signals/CMakeFiles/specialized_signals.dir/scx_signal_unsigned.cpp.obj: examples/sysc/2.1/specialized_signals/CMakeFiles/specialized_signals.dir/flags.make
examples/sysc/2.1/specialized_signals/CMakeFiles/specialized_signals.dir/scx_signal_unsigned.cpp.obj: examples/sysc/2.1/specialized_signals/CMakeFiles/specialized_signals.dir/includes_CXX.rsp
examples/sysc/2.1/specialized_signals/CMakeFiles/specialized_signals.dir/scx_signal_unsigned.cpp.obj: ../examples/sysc/2.1/specialized_signals/scx_signal_unsigned.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\systemc-2.3.3\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object examples/sysc/2.1/specialized_signals/CMakeFiles/specialized_signals.dir/scx_signal_unsigned.cpp.obj"
	cd /d C:\systemc-2.3.3\build\examples\sysc\2.1\specialized_signals && C:\TDM-GCC-64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\specialized_signals.dir\scx_signal_unsigned.cpp.obj -c C:\systemc-2.3.3\examples\sysc\2.1\specialized_signals\scx_signal_unsigned.cpp

examples/sysc/2.1/specialized_signals/CMakeFiles/specialized_signals.dir/scx_signal_unsigned.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/specialized_signals.dir/scx_signal_unsigned.cpp.i"
	cd /d C:\systemc-2.3.3\build\examples\sysc\2.1\specialized_signals && C:\TDM-GCC-64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\systemc-2.3.3\examples\sysc\2.1\specialized_signals\scx_signal_unsigned.cpp > CMakeFiles\specialized_signals.dir\scx_signal_unsigned.cpp.i

examples/sysc/2.1/specialized_signals/CMakeFiles/specialized_signals.dir/scx_signal_unsigned.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/specialized_signals.dir/scx_signal_unsigned.cpp.s"
	cd /d C:\systemc-2.3.3\build\examples\sysc\2.1\specialized_signals && C:\TDM-GCC-64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\systemc-2.3.3\examples\sysc\2.1\specialized_signals\scx_signal_unsigned.cpp -o CMakeFiles\specialized_signals.dir\scx_signal_unsigned.cpp.s

# Object files for target specialized_signals
specialized_signals_OBJECTS = \
"CMakeFiles/specialized_signals.dir/main.cpp.obj" \
"CMakeFiles/specialized_signals.dir/scx_signal_int.cpp.obj" \
"CMakeFiles/specialized_signals.dir/scx_signal_uint.cpp.obj" \
"CMakeFiles/specialized_signals.dir/scx_signal_signed.cpp.obj" \
"CMakeFiles/specialized_signals.dir/scx_signal_unsigned.cpp.obj"

# External object files for target specialized_signals
specialized_signals_EXTERNAL_OBJECTS =

examples/sysc/2.1/specialized_signals/specialized_signals.exe: examples/sysc/2.1/specialized_signals/CMakeFiles/specialized_signals.dir/main.cpp.obj
examples/sysc/2.1/specialized_signals/specialized_signals.exe: examples/sysc/2.1/specialized_signals/CMakeFiles/specialized_signals.dir/scx_signal_int.cpp.obj
examples/sysc/2.1/specialized_signals/specialized_signals.exe: examples/sysc/2.1/specialized_signals/CMakeFiles/specialized_signals.dir/scx_signal_uint.cpp.obj
examples/sysc/2.1/specialized_signals/specialized_signals.exe: examples/sysc/2.1/specialized_signals/CMakeFiles/specialized_signals.dir/scx_signal_signed.cpp.obj
examples/sysc/2.1/specialized_signals/specialized_signals.exe: examples/sysc/2.1/specialized_signals/CMakeFiles/specialized_signals.dir/scx_signal_unsigned.cpp.obj
examples/sysc/2.1/specialized_signals/specialized_signals.exe: examples/sysc/2.1/specialized_signals/CMakeFiles/specialized_signals.dir/build.make
examples/sysc/2.1/specialized_signals/specialized_signals.exe: src/libsystemc.a
examples/sysc/2.1/specialized_signals/specialized_signals.exe: examples/sysc/2.1/specialized_signals/CMakeFiles/specialized_signals.dir/linklibs.rsp
examples/sysc/2.1/specialized_signals/specialized_signals.exe: examples/sysc/2.1/specialized_signals/CMakeFiles/specialized_signals.dir/objects1.rsp
examples/sysc/2.1/specialized_signals/specialized_signals.exe: examples/sysc/2.1/specialized_signals/CMakeFiles/specialized_signals.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\systemc-2.3.3\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable specialized_signals.exe"
	cd /d C:\systemc-2.3.3\build\examples\sysc\2.1\specialized_signals && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\specialized_signals.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
examples/sysc/2.1/specialized_signals/CMakeFiles/specialized_signals.dir/build: examples/sysc/2.1/specialized_signals/specialized_signals.exe

.PHONY : examples/sysc/2.1/specialized_signals/CMakeFiles/specialized_signals.dir/build

examples/sysc/2.1/specialized_signals/CMakeFiles/specialized_signals.dir/clean:
	cd /d C:\systemc-2.3.3\build\examples\sysc\2.1\specialized_signals && $(CMAKE_COMMAND) -P CMakeFiles\specialized_signals.dir\cmake_clean.cmake
.PHONY : examples/sysc/2.1/specialized_signals/CMakeFiles/specialized_signals.dir/clean

examples/sysc/2.1/specialized_signals/CMakeFiles/specialized_signals.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\systemc-2.3.3 C:\systemc-2.3.3\examples\sysc\2.1\specialized_signals C:\systemc-2.3.3\build C:\systemc-2.3.3\build\examples\sysc\2.1\specialized_signals C:\systemc-2.3.3\build\examples\sysc\2.1\specialized_signals\CMakeFiles\specialized_signals.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : examples/sysc/2.1/specialized_signals/CMakeFiles/specialized_signals.dir/depend
