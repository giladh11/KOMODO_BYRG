# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /users/studs/bsc/2015/barakgo/catkin_ws/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /users/studs/bsc/2015/barakgo/catkin_ws/build

# Include any dependencies generated for this target.
include ric_gazebo/CMakeFiles/pcloud_rot_node_2.dir/depend.make

# Include the progress variables for this target.
include ric_gazebo/CMakeFiles/pcloud_rot_node_2.dir/progress.make

# Include the compile flags for this target's objects.
include ric_gazebo/CMakeFiles/pcloud_rot_node_2.dir/flags.make

ric_gazebo/CMakeFiles/pcloud_rot_node_2.dir/src/pcloud_rot_try.cpp.o: ric_gazebo/CMakeFiles/pcloud_rot_node_2.dir/flags.make
ric_gazebo/CMakeFiles/pcloud_rot_node_2.dir/src/pcloud_rot_try.cpp.o: /users/studs/bsc/2015/barakgo/catkin_ws/src/ric_gazebo/src/pcloud_rot_try.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /users/studs/bsc/2015/barakgo/catkin_ws/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object ric_gazebo/CMakeFiles/pcloud_rot_node_2.dir/src/pcloud_rot_try.cpp.o"
	cd /users/studs/bsc/2015/barakgo/catkin_ws/build/ric_gazebo && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/pcloud_rot_node_2.dir/src/pcloud_rot_try.cpp.o -c /users/studs/bsc/2015/barakgo/catkin_ws/src/ric_gazebo/src/pcloud_rot_try.cpp

ric_gazebo/CMakeFiles/pcloud_rot_node_2.dir/src/pcloud_rot_try.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/pcloud_rot_node_2.dir/src/pcloud_rot_try.cpp.i"
	cd /users/studs/bsc/2015/barakgo/catkin_ws/build/ric_gazebo && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /users/studs/bsc/2015/barakgo/catkin_ws/src/ric_gazebo/src/pcloud_rot_try.cpp > CMakeFiles/pcloud_rot_node_2.dir/src/pcloud_rot_try.cpp.i

ric_gazebo/CMakeFiles/pcloud_rot_node_2.dir/src/pcloud_rot_try.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/pcloud_rot_node_2.dir/src/pcloud_rot_try.cpp.s"
	cd /users/studs/bsc/2015/barakgo/catkin_ws/build/ric_gazebo && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /users/studs/bsc/2015/barakgo/catkin_ws/src/ric_gazebo/src/pcloud_rot_try.cpp -o CMakeFiles/pcloud_rot_node_2.dir/src/pcloud_rot_try.cpp.s

ric_gazebo/CMakeFiles/pcloud_rot_node_2.dir/src/pcloud_rot_try.cpp.o.requires:
.PHONY : ric_gazebo/CMakeFiles/pcloud_rot_node_2.dir/src/pcloud_rot_try.cpp.o.requires

ric_gazebo/CMakeFiles/pcloud_rot_node_2.dir/src/pcloud_rot_try.cpp.o.provides: ric_gazebo/CMakeFiles/pcloud_rot_node_2.dir/src/pcloud_rot_try.cpp.o.requires
	$(MAKE) -f ric_gazebo/CMakeFiles/pcloud_rot_node_2.dir/build.make ric_gazebo/CMakeFiles/pcloud_rot_node_2.dir/src/pcloud_rot_try.cpp.o.provides.build
.PHONY : ric_gazebo/CMakeFiles/pcloud_rot_node_2.dir/src/pcloud_rot_try.cpp.o.provides

ric_gazebo/CMakeFiles/pcloud_rot_node_2.dir/src/pcloud_rot_try.cpp.o.provides.build: ric_gazebo/CMakeFiles/pcloud_rot_node_2.dir/src/pcloud_rot_try.cpp.o

# Object files for target pcloud_rot_node_2
pcloud_rot_node_2_OBJECTS = \
"CMakeFiles/pcloud_rot_node_2.dir/src/pcloud_rot_try.cpp.o"

# External object files for target pcloud_rot_node_2
pcloud_rot_node_2_EXTERNAL_OBJECTS =

/users/studs/bsc/2015/barakgo/catkin_ws/devel/lib/ric_gazebo/pcloud_rot_node_2: ric_gazebo/CMakeFiles/pcloud_rot_node_2.dir/src/pcloud_rot_try.cpp.o
/users/studs/bsc/2015/barakgo/catkin_ws/devel/lib/ric_gazebo/pcloud_rot_node_2: ric_gazebo/CMakeFiles/pcloud_rot_node_2.dir/build.make
/users/studs/bsc/2015/barakgo/catkin_ws/devel/lib/ric_gazebo/pcloud_rot_node_2: /opt/ros/indigo/lib/libpcl_ros_filters.so
/users/studs/bsc/2015/barakgo/catkin_ws/devel/lib/ric_gazebo/pcloud_rot_node_2: /opt/ros/indigo/lib/libpcl_ros_io.so
/users/studs/bsc/2015/barakgo/catkin_ws/devel/lib/ric_gazebo/pcloud_rot_node_2: /opt/ros/indigo/lib/libpcl_ros_tf.so
/users/studs/bsc/2015/barakgo/catkin_ws/devel/lib/ric_gazebo/pcloud_rot_node_2: /usr/lib/libpcl_common.so
/users/studs/bsc/2015/barakgo/catkin_ws/devel/lib/ric_gazebo/pcloud_rot_node_2: /usr/lib/libpcl_kdtree.so
/users/studs/bsc/2015/barakgo/catkin_ws/devel/lib/ric_gazebo/pcloud_rot_node_2: /usr/lib/libpcl_octree.so
/users/studs/bsc/2015/barakgo/catkin_ws/devel/lib/ric_gazebo/pcloud_rot_node_2: /usr/lib/libpcl_search.so
/users/studs/bsc/2015/barakgo/catkin_ws/devel/lib/ric_gazebo/pcloud_rot_node_2: /usr/lib/libpcl_surface.so
/users/studs/bsc/2015/barakgo/catkin_ws/devel/lib/ric_gazebo/pcloud_rot_node_2: /usr/lib/libpcl_sample_consensus.so
/users/studs/bsc/2015/barakgo/catkin_ws/devel/lib/ric_gazebo/pcloud_rot_node_2: /usr/lib/libpcl_filters.so
/users/studs/bsc/2015/barakgo/catkin_ws/devel/lib/ric_gazebo/pcloud_rot_node_2: /usr/lib/libpcl_features.so
/users/studs/bsc/2015/barakgo/catkin_ws/devel/lib/ric_gazebo/pcloud_rot_node_2: /usr/lib/libpcl_segmentation.so
/users/studs/bsc/2015/barakgo/catkin_ws/devel/lib/ric_gazebo/pcloud_rot_node_2: /usr/lib/libpcl_io.so
/users/studs/bsc/2015/barakgo/catkin_ws/devel/lib/ric_gazebo/pcloud_rot_node_2: /usr/lib/libpcl_registration.so
/users/studs/bsc/2015/barakgo/catkin_ws/devel/lib/ric_gazebo/pcloud_rot_node_2: /usr/lib/libpcl_keypoints.so
/users/studs/bsc/2015/barakgo/catkin_ws/devel/lib/ric_gazebo/pcloud_rot_node_2: /usr/lib/libpcl_recognition.so
/users/studs/bsc/2015/barakgo/catkin_ws/devel/lib/ric_gazebo/pcloud_rot_node_2: /usr/lib/libpcl_visualization.so
/users/studs/bsc/2015/barakgo/catkin_ws/devel/lib/ric_gazebo/pcloud_rot_node_2: /usr/lib/libpcl_people.so
/users/studs/bsc/2015/barakgo/catkin_ws/devel/lib/ric_gazebo/pcloud_rot_node_2: /usr/lib/libpcl_outofcore.so
/users/studs/bsc/2015/barakgo/catkin_ws/devel/lib/ric_gazebo/pcloud_rot_node_2: /usr/lib/libpcl_tracking.so
/users/studs/bsc/2015/barakgo/catkin_ws/devel/lib/ric_gazebo/pcloud_rot_node_2: /usr/lib/libpcl_apps.so
/users/studs/bsc/2015/barakgo/catkin_ws/devel/lib/ric_gazebo/pcloud_rot_node_2: /usr/lib/x86_64-linux-gnu/libboost_iostreams.so
/users/studs/bsc/2015/barakgo/catkin_ws/devel/lib/ric_gazebo/pcloud_rot_node_2: /usr/lib/x86_64-linux-gnu/libboost_serialization.so
/users/studs/bsc/2015/barakgo/catkin_ws/devel/lib/ric_gazebo/pcloud_rot_node_2: /usr/lib/x86_64-linux-gnu/libqhull.so
/users/studs/bsc/2015/barakgo/catkin_ws/devel/lib/ric_gazebo/pcloud_rot_node_2: /usr/lib/libOpenNI.so
/users/studs/bsc/2015/barakgo/catkin_ws/devel/lib/ric_gazebo/pcloud_rot_node_2: /usr/lib/x86_64-linux-gnu/libflann_cpp_s.a
/users/studs/bsc/2015/barakgo/catkin_ws/devel/lib/ric_gazebo/pcloud_rot_node_2: /usr/lib/libvtkCommon.so.5.8.0
/users/studs/bsc/2015/barakgo/catkin_ws/devel/lib/ric_gazebo/pcloud_rot_node_2: /usr/lib/libvtkRendering.so.5.8.0
/users/studs/bsc/2015/barakgo/catkin_ws/devel/lib/ric_gazebo/pcloud_rot_node_2: /usr/lib/libvtkHybrid.so.5.8.0
/users/studs/bsc/2015/barakgo/catkin_ws/devel/lib/ric_gazebo/pcloud_rot_node_2: /usr/lib/libvtkCharts.so.5.8.0
/users/studs/bsc/2015/barakgo/catkin_ws/devel/lib/ric_gazebo/pcloud_rot_node_2: /opt/ros/indigo/lib/libdynamic_reconfigure_config_init_mutex.so
/users/studs/bsc/2015/barakgo/catkin_ws/devel/lib/ric_gazebo/pcloud_rot_node_2: /opt/ros/indigo/lib/libnodeletlib.so
/users/studs/bsc/2015/barakgo/catkin_ws/devel/lib/ric_gazebo/pcloud_rot_node_2: /opt/ros/indigo/lib/libbondcpp.so
/users/studs/bsc/2015/barakgo/catkin_ws/devel/lib/ric_gazebo/pcloud_rot_node_2: /usr/lib/x86_64-linux-gnu/libuuid.so
/users/studs/bsc/2015/barakgo/catkin_ws/devel/lib/ric_gazebo/pcloud_rot_node_2: /opt/ros/indigo/lib/librosbag.so
/users/studs/bsc/2015/barakgo/catkin_ws/devel/lib/ric_gazebo/pcloud_rot_node_2: /opt/ros/indigo/lib/librosbag_storage.so
/users/studs/bsc/2015/barakgo/catkin_ws/devel/lib/ric_gazebo/pcloud_rot_node_2: /usr/lib/x86_64-linux-gnu/libboost_program_options.so
/users/studs/bsc/2015/barakgo/catkin_ws/devel/lib/ric_gazebo/pcloud_rot_node_2: /opt/ros/indigo/lib/libroslz4.so
/users/studs/bsc/2015/barakgo/catkin_ws/devel/lib/ric_gazebo/pcloud_rot_node_2: /usr/lib/x86_64-linux-gnu/liblz4.so
/users/studs/bsc/2015/barakgo/catkin_ws/devel/lib/ric_gazebo/pcloud_rot_node_2: /opt/ros/indigo/lib/libtopic_tools.so
/users/studs/bsc/2015/barakgo/catkin_ws/devel/lib/ric_gazebo/pcloud_rot_node_2: /opt/ros/indigo/lib/libtf.so
/users/studs/bsc/2015/barakgo/catkin_ws/devel/lib/ric_gazebo/pcloud_rot_node_2: /opt/ros/indigo/lib/libtf2_ros.so
/users/studs/bsc/2015/barakgo/catkin_ws/devel/lib/ric_gazebo/pcloud_rot_node_2: /opt/ros/indigo/lib/libactionlib.so
/users/studs/bsc/2015/barakgo/catkin_ws/devel/lib/ric_gazebo/pcloud_rot_node_2: /opt/ros/indigo/lib/libtf2.so
/users/studs/bsc/2015/barakgo/catkin_ws/devel/lib/ric_gazebo/pcloud_rot_node_2: /users/studs/bsc/2015/barakgo/catkin_ws/devel/lib/libimage_transport.so
/users/studs/bsc/2015/barakgo/catkin_ws/devel/lib/ric_gazebo/pcloud_rot_node_2: /opt/ros/indigo/lib/libmessage_filters.so
/users/studs/bsc/2015/barakgo/catkin_ws/devel/lib/ric_gazebo/pcloud_rot_node_2: /usr/lib/x86_64-linux-gnu/libtinyxml.so
/users/studs/bsc/2015/barakgo/catkin_ws/devel/lib/ric_gazebo/pcloud_rot_node_2: /opt/ros/indigo/lib/libclass_loader.so
/users/studs/bsc/2015/barakgo/catkin_ws/devel/lib/ric_gazebo/pcloud_rot_node_2: /usr/lib/libPocoFoundation.so
/users/studs/bsc/2015/barakgo/catkin_ws/devel/lib/ric_gazebo/pcloud_rot_node_2: /usr/lib/x86_64-linux-gnu/libdl.so
/users/studs/bsc/2015/barakgo/catkin_ws/devel/lib/ric_gazebo/pcloud_rot_node_2: /opt/ros/indigo/lib/libroscpp.so
/users/studs/bsc/2015/barakgo/catkin_ws/devel/lib/ric_gazebo/pcloud_rot_node_2: /usr/lib/x86_64-linux-gnu/libboost_signals.so
/users/studs/bsc/2015/barakgo/catkin_ws/devel/lib/ric_gazebo/pcloud_rot_node_2: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
/users/studs/bsc/2015/barakgo/catkin_ws/devel/lib/ric_gazebo/pcloud_rot_node_2: /opt/ros/indigo/lib/libxmlrpcpp.so
/users/studs/bsc/2015/barakgo/catkin_ws/devel/lib/ric_gazebo/pcloud_rot_node_2: /opt/ros/indigo/lib/libroslib.so
/users/studs/bsc/2015/barakgo/catkin_ws/devel/lib/ric_gazebo/pcloud_rot_node_2: /users/studs/bsc/2015/barakgo/catkin_ws/devel/lib/libimage_geometry.so
/users/studs/bsc/2015/barakgo/catkin_ws/devel/lib/ric_gazebo/pcloud_rot_node_2: /users/studs/bsc/2015/barakgo/catkin_ws/devel/lib/libcv_bridge.so
/users/studs/bsc/2015/barakgo/catkin_ws/devel/lib/ric_gazebo/pcloud_rot_node_2: /usr/lib/x86_64-linux-gnu/libopencv_videostab.so.2.4.8
/users/studs/bsc/2015/barakgo/catkin_ws/devel/lib/ric_gazebo/pcloud_rot_node_2: /usr/lib/x86_64-linux-gnu/libopencv_video.so.2.4.8
/users/studs/bsc/2015/barakgo/catkin_ws/devel/lib/ric_gazebo/pcloud_rot_node_2: /usr/lib/x86_64-linux-gnu/libopencv_superres.so.2.4.8
/users/studs/bsc/2015/barakgo/catkin_ws/devel/lib/ric_gazebo/pcloud_rot_node_2: /usr/lib/x86_64-linux-gnu/libopencv_stitching.so.2.4.8
/users/studs/bsc/2015/barakgo/catkin_ws/devel/lib/ric_gazebo/pcloud_rot_node_2: /usr/lib/x86_64-linux-gnu/libopencv_photo.so.2.4.8
/users/studs/bsc/2015/barakgo/catkin_ws/devel/lib/ric_gazebo/pcloud_rot_node_2: /usr/lib/x86_64-linux-gnu/libopencv_ocl.so.2.4.8
/users/studs/bsc/2015/barakgo/catkin_ws/devel/lib/ric_gazebo/pcloud_rot_node_2: /usr/lib/x86_64-linux-gnu/libopencv_objdetect.so.2.4.8
/users/studs/bsc/2015/barakgo/catkin_ws/devel/lib/ric_gazebo/pcloud_rot_node_2: /usr/lib/x86_64-linux-gnu/libopencv_ml.so.2.4.8
/users/studs/bsc/2015/barakgo/catkin_ws/devel/lib/ric_gazebo/pcloud_rot_node_2: /usr/lib/x86_64-linux-gnu/libopencv_legacy.so.2.4.8
/users/studs/bsc/2015/barakgo/catkin_ws/devel/lib/ric_gazebo/pcloud_rot_node_2: /usr/lib/x86_64-linux-gnu/libopencv_imgproc.so.2.4.8
/users/studs/bsc/2015/barakgo/catkin_ws/devel/lib/ric_gazebo/pcloud_rot_node_2: /usr/lib/x86_64-linux-gnu/libopencv_highgui.so.2.4.8
/users/studs/bsc/2015/barakgo/catkin_ws/devel/lib/ric_gazebo/pcloud_rot_node_2: /usr/lib/x86_64-linux-gnu/libopencv_gpu.so.2.4.8
/users/studs/bsc/2015/barakgo/catkin_ws/devel/lib/ric_gazebo/pcloud_rot_node_2: /usr/lib/x86_64-linux-gnu/libopencv_flann.so.2.4.8
/users/studs/bsc/2015/barakgo/catkin_ws/devel/lib/ric_gazebo/pcloud_rot_node_2: /usr/lib/x86_64-linux-gnu/libopencv_features2d.so.2.4.8
/users/studs/bsc/2015/barakgo/catkin_ws/devel/lib/ric_gazebo/pcloud_rot_node_2: /usr/lib/x86_64-linux-gnu/libopencv_core.so.2.4.8
/users/studs/bsc/2015/barakgo/catkin_ws/devel/lib/ric_gazebo/pcloud_rot_node_2: /usr/lib/x86_64-linux-gnu/libopencv_contrib.so.2.4.8
/users/studs/bsc/2015/barakgo/catkin_ws/devel/lib/ric_gazebo/pcloud_rot_node_2: /usr/lib/x86_64-linux-gnu/libopencv_calib3d.so.2.4.8
/users/studs/bsc/2015/barakgo/catkin_ws/devel/lib/ric_gazebo/pcloud_rot_node_2: /opt/ros/indigo/lib/librosconsole.so
/users/studs/bsc/2015/barakgo/catkin_ws/devel/lib/ric_gazebo/pcloud_rot_node_2: /opt/ros/indigo/lib/librosconsole_log4cxx.so
/users/studs/bsc/2015/barakgo/catkin_ws/devel/lib/ric_gazebo/pcloud_rot_node_2: /opt/ros/indigo/lib/librosconsole_backend_interface.so
/users/studs/bsc/2015/barakgo/catkin_ws/devel/lib/ric_gazebo/pcloud_rot_node_2: /usr/lib/liblog4cxx.so
/users/studs/bsc/2015/barakgo/catkin_ws/devel/lib/ric_gazebo/pcloud_rot_node_2: /usr/lib/x86_64-linux-gnu/libboost_regex.so
/users/studs/bsc/2015/barakgo/catkin_ws/devel/lib/ric_gazebo/pcloud_rot_node_2: /opt/ros/indigo/lib/libroscpp_serialization.so
/users/studs/bsc/2015/barakgo/catkin_ws/devel/lib/ric_gazebo/pcloud_rot_node_2: /opt/ros/indigo/lib/librostime.so
/users/studs/bsc/2015/barakgo/catkin_ws/devel/lib/ric_gazebo/pcloud_rot_node_2: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
/users/studs/bsc/2015/barakgo/catkin_ws/devel/lib/ric_gazebo/pcloud_rot_node_2: /opt/ros/indigo/lib/libcpp_common.so
/users/studs/bsc/2015/barakgo/catkin_ws/devel/lib/ric_gazebo/pcloud_rot_node_2: /usr/lib/x86_64-linux-gnu/libboost_system.so
/users/studs/bsc/2015/barakgo/catkin_ws/devel/lib/ric_gazebo/pcloud_rot_node_2: /usr/lib/x86_64-linux-gnu/libboost_thread.so
/users/studs/bsc/2015/barakgo/catkin_ws/devel/lib/ric_gazebo/pcloud_rot_node_2: /usr/lib/x86_64-linux-gnu/libpthread.so
/users/studs/bsc/2015/barakgo/catkin_ws/devel/lib/ric_gazebo/pcloud_rot_node_2: /usr/lib/x86_64-linux-gnu/libconsole_bridge.so
/users/studs/bsc/2015/barakgo/catkin_ws/devel/lib/ric_gazebo/pcloud_rot_node_2: /usr/lib/x86_64-linux-gnu/libopencv_videostab.so.2.4.8
/users/studs/bsc/2015/barakgo/catkin_ws/devel/lib/ric_gazebo/pcloud_rot_node_2: /usr/lib/x86_64-linux-gnu/libopencv_superres.so.2.4.8
/users/studs/bsc/2015/barakgo/catkin_ws/devel/lib/ric_gazebo/pcloud_rot_node_2: /usr/lib/x86_64-linux-gnu/libopencv_stitching.so.2.4.8
/users/studs/bsc/2015/barakgo/catkin_ws/devel/lib/ric_gazebo/pcloud_rot_node_2: /usr/lib/x86_64-linux-gnu/libopencv_ocl.so.2.4.8
/users/studs/bsc/2015/barakgo/catkin_ws/devel/lib/ric_gazebo/pcloud_rot_node_2: /usr/lib/x86_64-linux-gnu/libopencv_gpu.so.2.4.8
/users/studs/bsc/2015/barakgo/catkin_ws/devel/lib/ric_gazebo/pcloud_rot_node_2: /usr/lib/x86_64-linux-gnu/libopencv_photo.so.2.4.8
/users/studs/bsc/2015/barakgo/catkin_ws/devel/lib/ric_gazebo/pcloud_rot_node_2: /usr/lib/x86_64-linux-gnu/libopencv_legacy.so.2.4.8
/users/studs/bsc/2015/barakgo/catkin_ws/devel/lib/ric_gazebo/pcloud_rot_node_2: /usr/lib/x86_64-linux-gnu/libopencv_contrib.so.2.4.8
/users/studs/bsc/2015/barakgo/catkin_ws/devel/lib/ric_gazebo/pcloud_rot_node_2: /usr/lib/x86_64-linux-gnu/libopencv_video.so.2.4.8
/users/studs/bsc/2015/barakgo/catkin_ws/devel/lib/ric_gazebo/pcloud_rot_node_2: /usr/lib/x86_64-linux-gnu/libopencv_objdetect.so.2.4.8
/users/studs/bsc/2015/barakgo/catkin_ws/devel/lib/ric_gazebo/pcloud_rot_node_2: /usr/lib/x86_64-linux-gnu/libopencv_ml.so.2.4.8
/users/studs/bsc/2015/barakgo/catkin_ws/devel/lib/ric_gazebo/pcloud_rot_node_2: /usr/lib/x86_64-linux-gnu/libopencv_calib3d.so.2.4.8
/users/studs/bsc/2015/barakgo/catkin_ws/devel/lib/ric_gazebo/pcloud_rot_node_2: /usr/lib/x86_64-linux-gnu/libopencv_features2d.so.2.4.8
/users/studs/bsc/2015/barakgo/catkin_ws/devel/lib/ric_gazebo/pcloud_rot_node_2: /usr/lib/x86_64-linux-gnu/libopencv_highgui.so.2.4.8
/users/studs/bsc/2015/barakgo/catkin_ws/devel/lib/ric_gazebo/pcloud_rot_node_2: /usr/lib/x86_64-linux-gnu/libopencv_imgproc.so.2.4.8
/users/studs/bsc/2015/barakgo/catkin_ws/devel/lib/ric_gazebo/pcloud_rot_node_2: /usr/lib/x86_64-linux-gnu/libopencv_flann.so.2.4.8
/users/studs/bsc/2015/barakgo/catkin_ws/devel/lib/ric_gazebo/pcloud_rot_node_2: /usr/lib/x86_64-linux-gnu/libopencv_core.so.2.4.8
/users/studs/bsc/2015/barakgo/catkin_ws/devel/lib/ric_gazebo/pcloud_rot_node_2: ric_gazebo/CMakeFiles/pcloud_rot_node_2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable /users/studs/bsc/2015/barakgo/catkin_ws/devel/lib/ric_gazebo/pcloud_rot_node_2"
	cd /users/studs/bsc/2015/barakgo/catkin_ws/build/ric_gazebo && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/pcloud_rot_node_2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
ric_gazebo/CMakeFiles/pcloud_rot_node_2.dir/build: /users/studs/bsc/2015/barakgo/catkin_ws/devel/lib/ric_gazebo/pcloud_rot_node_2
.PHONY : ric_gazebo/CMakeFiles/pcloud_rot_node_2.dir/build

ric_gazebo/CMakeFiles/pcloud_rot_node_2.dir/requires: ric_gazebo/CMakeFiles/pcloud_rot_node_2.dir/src/pcloud_rot_try.cpp.o.requires
.PHONY : ric_gazebo/CMakeFiles/pcloud_rot_node_2.dir/requires

ric_gazebo/CMakeFiles/pcloud_rot_node_2.dir/clean:
	cd /users/studs/bsc/2015/barakgo/catkin_ws/build/ric_gazebo && $(CMAKE_COMMAND) -P CMakeFiles/pcloud_rot_node_2.dir/cmake_clean.cmake
.PHONY : ric_gazebo/CMakeFiles/pcloud_rot_node_2.dir/clean

ric_gazebo/CMakeFiles/pcloud_rot_node_2.dir/depend:
	cd /users/studs/bsc/2015/barakgo/catkin_ws/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /users/studs/bsc/2015/barakgo/catkin_ws/src /users/studs/bsc/2015/barakgo/catkin_ws/src/ric_gazebo /users/studs/bsc/2015/barakgo/catkin_ws/build /users/studs/bsc/2015/barakgo/catkin_ws/build/ric_gazebo /users/studs/bsc/2015/barakgo/catkin_ws/build/ric_gazebo/CMakeFiles/pcloud_rot_node_2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : ric_gazebo/CMakeFiles/pcloud_rot_node_2.dir/depend

