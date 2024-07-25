// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from llm_action_interfaces:action/LLM.idl
// generated code does not contain a copyright notice

#ifndef LLM_ACTION_INTERFACES__ACTION__DETAIL__LLM__STRUCT_H_
#define LLM_ACTION_INTERFACES__ACTION__DETAIL__LLM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'userinput'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/LLM in the package llm_action_interfaces.
typedef struct llm_action_interfaces__action__LLM_Goal
{
  rosidl_runtime_c__String userinput;
} llm_action_interfaces__action__LLM_Goal;

// Struct for a sequence of llm_action_interfaces__action__LLM_Goal.
typedef struct llm_action_interfaces__action__LLM_Goal__Sequence
{
  llm_action_interfaces__action__LLM_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} llm_action_interfaces__action__LLM_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'llmoutput'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/LLM in the package llm_action_interfaces.
typedef struct llm_action_interfaces__action__LLM_Result
{
  rosidl_runtime_c__String llmoutput;
} llm_action_interfaces__action__LLM_Result;

// Struct for a sequence of llm_action_interfaces__action__LLM_Result.
typedef struct llm_action_interfaces__action__LLM_Result__Sequence
{
  llm_action_interfaces__action__LLM_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} llm_action_interfaces__action__LLM_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/LLM in the package llm_action_interfaces.
typedef struct llm_action_interfaces__action__LLM_Feedback
{
  int16_t progress;
} llm_action_interfaces__action__LLM_Feedback;

// Struct for a sequence of llm_action_interfaces__action__LLM_Feedback.
typedef struct llm_action_interfaces__action__LLM_Feedback__Sequence
{
  llm_action_interfaces__action__LLM_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} llm_action_interfaces__action__LLM_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "llm_action_interfaces/action/detail/llm__struct.h"

/// Struct defined in action/LLM in the package llm_action_interfaces.
typedef struct llm_action_interfaces__action__LLM_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  llm_action_interfaces__action__LLM_Goal goal;
} llm_action_interfaces__action__LLM_SendGoal_Request;

// Struct for a sequence of llm_action_interfaces__action__LLM_SendGoal_Request.
typedef struct llm_action_interfaces__action__LLM_SendGoal_Request__Sequence
{
  llm_action_interfaces__action__LLM_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} llm_action_interfaces__action__LLM_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/LLM in the package llm_action_interfaces.
typedef struct llm_action_interfaces__action__LLM_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} llm_action_interfaces__action__LLM_SendGoal_Response;

// Struct for a sequence of llm_action_interfaces__action__LLM_SendGoal_Response.
typedef struct llm_action_interfaces__action__LLM_SendGoal_Response__Sequence
{
  llm_action_interfaces__action__LLM_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} llm_action_interfaces__action__LLM_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/LLM in the package llm_action_interfaces.
typedef struct llm_action_interfaces__action__LLM_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} llm_action_interfaces__action__LLM_GetResult_Request;

// Struct for a sequence of llm_action_interfaces__action__LLM_GetResult_Request.
typedef struct llm_action_interfaces__action__LLM_GetResult_Request__Sequence
{
  llm_action_interfaces__action__LLM_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} llm_action_interfaces__action__LLM_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "llm_action_interfaces/action/detail/llm__struct.h"

/// Struct defined in action/LLM in the package llm_action_interfaces.
typedef struct llm_action_interfaces__action__LLM_GetResult_Response
{
  int8_t status;
  llm_action_interfaces__action__LLM_Result result;
} llm_action_interfaces__action__LLM_GetResult_Response;

// Struct for a sequence of llm_action_interfaces__action__LLM_GetResult_Response.
typedef struct llm_action_interfaces__action__LLM_GetResult_Response__Sequence
{
  llm_action_interfaces__action__LLM_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} llm_action_interfaces__action__LLM_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "llm_action_interfaces/action/detail/llm__struct.h"

/// Struct defined in action/LLM in the package llm_action_interfaces.
typedef struct llm_action_interfaces__action__LLM_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  llm_action_interfaces__action__LLM_Feedback feedback;
} llm_action_interfaces__action__LLM_FeedbackMessage;

// Struct for a sequence of llm_action_interfaces__action__LLM_FeedbackMessage.
typedef struct llm_action_interfaces__action__LLM_FeedbackMessage__Sequence
{
  llm_action_interfaces__action__LLM_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} llm_action_interfaces__action__LLM_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LLM_ACTION_INTERFACES__ACTION__DETAIL__LLM__STRUCT_H_
