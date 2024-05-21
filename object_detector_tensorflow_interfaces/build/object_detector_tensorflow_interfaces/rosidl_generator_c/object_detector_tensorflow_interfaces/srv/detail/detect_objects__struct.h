// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from object_detector_tensorflow_interfaces:srv/DetectObjects.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_DETECTOR_TENSORFLOW_INTERFACES__SRV__DETAIL__DETECT_OBJECTS__STRUCT_H_
#define OBJECT_DETECTOR_TENSORFLOW_INTERFACES__SRV__DETAIL__DETECT_OBJECTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'image'
#include "sensor_msgs/msg/detail/image__struct.h"
// Member 'roi'
#include "sensor_msgs/msg/detail/region_of_interest__struct.h"

/// Struct defined in srv/DetectObjects in the package object_detector_tensorflow_interfaces.
typedef struct object_detector_tensorflow_interfaces__srv__DetectObjects_Request
{
  sensor_msgs__msg__Image image;
  sensor_msgs__msg__RegionOfInterest roi;
} object_detector_tensorflow_interfaces__srv__DetectObjects_Request;

// Struct for a sequence of object_detector_tensorflow_interfaces__srv__DetectObjects_Request.
typedef struct object_detector_tensorflow_interfaces__srv__DetectObjects_Request__Sequence
{
  object_detector_tensorflow_interfaces__srv__DetectObjects_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} object_detector_tensorflow_interfaces__srv__DetectObjects_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'detections'
#include "object_detector_tensorflow_interfaces/msg/detail/detections__struct.h"
// Member 'result_image'
// already included above
// #include "sensor_msgs/msg/detail/image__struct.h"

/// Struct defined in srv/DetectObjects in the package object_detector_tensorflow_interfaces.
typedef struct object_detector_tensorflow_interfaces__srv__DetectObjects_Response
{
  object_detector_tensorflow_interfaces__msg__Detections detections;
  sensor_msgs__msg__Image result_image;
} object_detector_tensorflow_interfaces__srv__DetectObjects_Response;

// Struct for a sequence of object_detector_tensorflow_interfaces__srv__DetectObjects_Response.
typedef struct object_detector_tensorflow_interfaces__srv__DetectObjects_Response__Sequence
{
  object_detector_tensorflow_interfaces__srv__DetectObjects_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} object_detector_tensorflow_interfaces__srv__DetectObjects_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OBJECT_DETECTOR_TENSORFLOW_INTERFACES__SRV__DETAIL__DETECT_OBJECTS__STRUCT_H_
