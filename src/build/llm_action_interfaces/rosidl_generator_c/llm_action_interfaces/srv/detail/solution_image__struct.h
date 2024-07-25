// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from llm_action_interfaces:srv/SolutionImage.idl
// generated code does not contain a copyright notice

#ifndef LLM_ACTION_INTERFACES__SRV__DETAIL__SOLUTION_IMAGE__STRUCT_H_
#define LLM_ACTION_INTERFACES__SRV__DETAIL__SOLUTION_IMAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SolutionImage in the package llm_action_interfaces.
typedef struct llm_action_interfaces__srv__SolutionImage_Request
{
  uint8_t structure_needs_at_least_one_member;
} llm_action_interfaces__srv__SolutionImage_Request;

// Struct for a sequence of llm_action_interfaces__srv__SolutionImage_Request.
typedef struct llm_action_interfaces__srv__SolutionImage_Request__Sequence
{
  llm_action_interfaces__srv__SolutionImage_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} llm_action_interfaces__srv__SolutionImage_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'image'
#include "sensor_msgs/msg/detail/image__struct.h"

/// Struct defined in srv/SolutionImage in the package llm_action_interfaces.
typedef struct llm_action_interfaces__srv__SolutionImage_Response
{
  sensor_msgs__msg__Image image;
} llm_action_interfaces__srv__SolutionImage_Response;

// Struct for a sequence of llm_action_interfaces__srv__SolutionImage_Response.
typedef struct llm_action_interfaces__srv__SolutionImage_Response__Sequence
{
  llm_action_interfaces__srv__SolutionImage_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} llm_action_interfaces__srv__SolutionImage_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LLM_ACTION_INTERFACES__SRV__DETAIL__SOLUTION_IMAGE__STRUCT_H_
