execute_process(COMMAND "/users/studs/bsc/2015/barakgo/catkin_ws/build/image_common/camera_calibration_parsers/catkin_generated/python_distutils_install.sh" RESULT_VARIABLE res)

if(NOT res EQUAL 0)
  message(FATAL_ERROR "execute_process(/users/studs/bsc/2015/barakgo/catkin_ws/build/image_common/camera_calibration_parsers/catkin_generated/python_distutils_install.sh) returned error code ")
endif()
