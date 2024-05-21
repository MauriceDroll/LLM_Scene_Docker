// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from object_detector_tensorflow_interfaces:msg/Detections.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_DETECTOR_TENSORFLOW_INTERFACES__MSG__DETAIL__DETECTIONS__STRUCT_H_
#define OBJECT_DETECTOR_TENSORFLOW_INTERFACES__MSG__DETAIL__DETECTIONS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
// Member 'image_header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'detections'
#include "object_detector_tensorflow_interfaces/msg/detail/detection__struct.h"

/// Struct defined in msg/Detections in the package object_detector_tensorflow_interfaces.
typedef struct object_detector_tensorflow_interfaces__msg__Detections
{
  std_msgs__msg__Header header;
  std_msgs__msg__Header image_header;
  object_detector_tensorflow_interfaces__msg__Detection__Sequence detections;
} object_detector_tensorflow_interfaces__msg__Detections;

// Struct for a sequence of object_detector_tensorflow_interfaces__msg__Detections.
typedef struct object_detector_tensorflow_interfaces__msg__Detections__Sequence
{
  object_detector_tensorflow_interfaces__msg__Detections * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} object_detector_tensorflow_interfaces__msg__Detections__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OBJECT_DETECTOR_TENSORFLOW_INTERFACES__MSG__DETAIL__DETECTIONS__STRUCT_H_
