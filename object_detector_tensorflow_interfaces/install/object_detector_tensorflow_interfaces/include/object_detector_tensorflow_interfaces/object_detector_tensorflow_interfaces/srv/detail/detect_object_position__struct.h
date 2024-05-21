// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from object_detector_tensorflow_interfaces:srv/DetectObjectPosition.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_DETECTOR_TENSORFLOW_INTERFACES__SRV__DETAIL__DETECT_OBJECT_POSITION__STRUCT_H_
#define OBJECT_DETECTOR_TENSORFLOW_INTERFACES__SRV__DETAIL__DETECT_OBJECT_POSITION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'class_name'
// Member 'base_frame'
// Member 'camera_type'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/DetectObjectPosition in the package object_detector_tensorflow_interfaces.
typedef struct object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Request
{
  /// filter for class name and select object with highest probability (If empty, select highest from all classes)
  rosidl_runtime_c__String class_name;
  /// point is given relative to this reference frame
  rosidl_runtime_c__String base_frame;
  /// used camera for depth image ("roboception" or "realsense")
  rosidl_runtime_c__String camera_type;
} object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Request;

// Struct for a sequence of object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Request.
typedef struct object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Request__Sequence
{
  object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'point'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'class_name'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/DetectObjectPosition in the package object_detector_tensorflow_interfaces.
typedef struct object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Response
{
  /// xyz of point in
  geometry_msgs__msg__Point point;
  /// probability of detected object
  float probability;
  /// class_name of detected object
  rosidl_runtime_c__String class_name;
} object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Response;

// Struct for a sequence of object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Response.
typedef struct object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Response__Sequence
{
  object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OBJECT_DETECTOR_TENSORFLOW_INTERFACES__SRV__DETAIL__DETECT_OBJECT_POSITION__STRUCT_H_
