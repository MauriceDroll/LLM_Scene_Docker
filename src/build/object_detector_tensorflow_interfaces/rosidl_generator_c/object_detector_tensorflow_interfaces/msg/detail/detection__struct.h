// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from object_detector_tensorflow_interfaces:msg/Detection.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_DETECTOR_TENSORFLOW_INTERFACES__MSG__DETAIL__DETECTION__STRUCT_H_
#define OBJECT_DETECTOR_TENSORFLOW_INTERFACES__MSG__DETAIL__DETECTION__STRUCT_H_

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
#include "rosidl_runtime_c/string.h"
// Member 'center'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'bounding_box'
#include "sensor_msgs/msg/detail/region_of_interest__struct.h"

/// Struct defined in msg/Detection in the package object_detector_tensorflow_interfaces.
typedef struct object_detector_tensorflow_interfaces__msg__Detection
{
  uint32_t class_id;
  rosidl_runtime_c__String class_name;
  float probability;
  geometry_msgs__msg__Point center;
  sensor_msgs__msg__RegionOfInterest bounding_box;
} object_detector_tensorflow_interfaces__msg__Detection;

// Struct for a sequence of object_detector_tensorflow_interfaces__msg__Detection.
typedef struct object_detector_tensorflow_interfaces__msg__Detection__Sequence
{
  object_detector_tensorflow_interfaces__msg__Detection * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} object_detector_tensorflow_interfaces__msg__Detection__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OBJECT_DETECTOR_TENSORFLOW_INTERFACES__MSG__DETAIL__DETECTION__STRUCT_H_
