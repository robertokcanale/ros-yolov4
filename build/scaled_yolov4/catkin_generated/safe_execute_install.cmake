execute_process(COMMAND "/home/maclab/Documents/RCanale/ros-yolov4/build/scaled_yolov4/catkin_generated/python_distutils_install.sh" RESULT_VARIABLE res)

if(NOT res EQUAL 0)
  message(FATAL_ERROR "execute_process(/home/maclab/Documents/RCanale/ros-yolov4/build/scaled_yolov4/catkin_generated/python_distutils_install.sh) returned error code ")
endif()
