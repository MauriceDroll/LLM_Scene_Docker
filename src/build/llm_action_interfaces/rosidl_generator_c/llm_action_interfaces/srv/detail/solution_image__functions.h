// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from llm_action_interfaces:srv/SolutionImage.idl
// generated code does not contain a copyright notice

#ifndef LLM_ACTION_INTERFACES__SRV__DETAIL__SOLUTION_IMAGE__FUNCTIONS_H_
#define LLM_ACTION_INTERFACES__SRV__DETAIL__SOLUTION_IMAGE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "llm_action_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "llm_action_interfaces/srv/detail/solution_image__struct.h"

/// Initialize srv/SolutionImage message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * llm_action_interfaces__srv__SolutionImage_Request
 * )) before or use
 * llm_action_interfaces__srv__SolutionImage_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_llm_action_interfaces
bool
llm_action_interfaces__srv__SolutionImage_Request__init(llm_action_interfaces__srv__SolutionImage_Request * msg);

/// Finalize srv/SolutionImage message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_llm_action_interfaces
void
llm_action_interfaces__srv__SolutionImage_Request__fini(llm_action_interfaces__srv__SolutionImage_Request * msg);

/// Create srv/SolutionImage message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * llm_action_interfaces__srv__SolutionImage_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_llm_action_interfaces
llm_action_interfaces__srv__SolutionImage_Request *
llm_action_interfaces__srv__SolutionImage_Request__create();

/// Destroy srv/SolutionImage message.
/**
 * It calls
 * llm_action_interfaces__srv__SolutionImage_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_llm_action_interfaces
void
llm_action_interfaces__srv__SolutionImage_Request__destroy(llm_action_interfaces__srv__SolutionImage_Request * msg);

/// Check for srv/SolutionImage message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_llm_action_interfaces
bool
llm_action_interfaces__srv__SolutionImage_Request__are_equal(const llm_action_interfaces__srv__SolutionImage_Request * lhs, const llm_action_interfaces__srv__SolutionImage_Request * rhs);

/// Copy a srv/SolutionImage message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_llm_action_interfaces
bool
llm_action_interfaces__srv__SolutionImage_Request__copy(
  const llm_action_interfaces__srv__SolutionImage_Request * input,
  llm_action_interfaces__srv__SolutionImage_Request * output);

/// Initialize array of srv/SolutionImage messages.
/**
 * It allocates the memory for the number of elements and calls
 * llm_action_interfaces__srv__SolutionImage_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_llm_action_interfaces
bool
llm_action_interfaces__srv__SolutionImage_Request__Sequence__init(llm_action_interfaces__srv__SolutionImage_Request__Sequence * array, size_t size);

/// Finalize array of srv/SolutionImage messages.
/**
 * It calls
 * llm_action_interfaces__srv__SolutionImage_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_llm_action_interfaces
void
llm_action_interfaces__srv__SolutionImage_Request__Sequence__fini(llm_action_interfaces__srv__SolutionImage_Request__Sequence * array);

/// Create array of srv/SolutionImage messages.
/**
 * It allocates the memory for the array and calls
 * llm_action_interfaces__srv__SolutionImage_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_llm_action_interfaces
llm_action_interfaces__srv__SolutionImage_Request__Sequence *
llm_action_interfaces__srv__SolutionImage_Request__Sequence__create(size_t size);

/// Destroy array of srv/SolutionImage messages.
/**
 * It calls
 * llm_action_interfaces__srv__SolutionImage_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_llm_action_interfaces
void
llm_action_interfaces__srv__SolutionImage_Request__Sequence__destroy(llm_action_interfaces__srv__SolutionImage_Request__Sequence * array);

/// Check for srv/SolutionImage message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_llm_action_interfaces
bool
llm_action_interfaces__srv__SolutionImage_Request__Sequence__are_equal(const llm_action_interfaces__srv__SolutionImage_Request__Sequence * lhs, const llm_action_interfaces__srv__SolutionImage_Request__Sequence * rhs);

/// Copy an array of srv/SolutionImage messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_llm_action_interfaces
bool
llm_action_interfaces__srv__SolutionImage_Request__Sequence__copy(
  const llm_action_interfaces__srv__SolutionImage_Request__Sequence * input,
  llm_action_interfaces__srv__SolutionImage_Request__Sequence * output);

/// Initialize srv/SolutionImage message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * llm_action_interfaces__srv__SolutionImage_Response
 * )) before or use
 * llm_action_interfaces__srv__SolutionImage_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_llm_action_interfaces
bool
llm_action_interfaces__srv__SolutionImage_Response__init(llm_action_interfaces__srv__SolutionImage_Response * msg);

/// Finalize srv/SolutionImage message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_llm_action_interfaces
void
llm_action_interfaces__srv__SolutionImage_Response__fini(llm_action_interfaces__srv__SolutionImage_Response * msg);

/// Create srv/SolutionImage message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * llm_action_interfaces__srv__SolutionImage_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_llm_action_interfaces
llm_action_interfaces__srv__SolutionImage_Response *
llm_action_interfaces__srv__SolutionImage_Response__create();

/// Destroy srv/SolutionImage message.
/**
 * It calls
 * llm_action_interfaces__srv__SolutionImage_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_llm_action_interfaces
void
llm_action_interfaces__srv__SolutionImage_Response__destroy(llm_action_interfaces__srv__SolutionImage_Response * msg);

/// Check for srv/SolutionImage message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_llm_action_interfaces
bool
llm_action_interfaces__srv__SolutionImage_Response__are_equal(const llm_action_interfaces__srv__SolutionImage_Response * lhs, const llm_action_interfaces__srv__SolutionImage_Response * rhs);

/// Copy a srv/SolutionImage message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_llm_action_interfaces
bool
llm_action_interfaces__srv__SolutionImage_Response__copy(
  const llm_action_interfaces__srv__SolutionImage_Response * input,
  llm_action_interfaces__srv__SolutionImage_Response * output);

/// Initialize array of srv/SolutionImage messages.
/**
 * It allocates the memory for the number of elements and calls
 * llm_action_interfaces__srv__SolutionImage_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_llm_action_interfaces
bool
llm_action_interfaces__srv__SolutionImage_Response__Sequence__init(llm_action_interfaces__srv__SolutionImage_Response__Sequence * array, size_t size);

/// Finalize array of srv/SolutionImage messages.
/**
 * It calls
 * llm_action_interfaces__srv__SolutionImage_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_llm_action_interfaces
void
llm_action_interfaces__srv__SolutionImage_Response__Sequence__fini(llm_action_interfaces__srv__SolutionImage_Response__Sequence * array);

/// Create array of srv/SolutionImage messages.
/**
 * It allocates the memory for the array and calls
 * llm_action_interfaces__srv__SolutionImage_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_llm_action_interfaces
llm_action_interfaces__srv__SolutionImage_Response__Sequence *
llm_action_interfaces__srv__SolutionImage_Response__Sequence__create(size_t size);

/// Destroy array of srv/SolutionImage messages.
/**
 * It calls
 * llm_action_interfaces__srv__SolutionImage_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_llm_action_interfaces
void
llm_action_interfaces__srv__SolutionImage_Response__Sequence__destroy(llm_action_interfaces__srv__SolutionImage_Response__Sequence * array);

/// Check for srv/SolutionImage message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_llm_action_interfaces
bool
llm_action_interfaces__srv__SolutionImage_Response__Sequence__are_equal(const llm_action_interfaces__srv__SolutionImage_Response__Sequence * lhs, const llm_action_interfaces__srv__SolutionImage_Response__Sequence * rhs);

/// Copy an array of srv/SolutionImage messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_llm_action_interfaces
bool
llm_action_interfaces__srv__SolutionImage_Response__Sequence__copy(
  const llm_action_interfaces__srv__SolutionImage_Response__Sequence * input,
  llm_action_interfaces__srv__SolutionImage_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // LLM_ACTION_INTERFACES__SRV__DETAIL__SOLUTION_IMAGE__FUNCTIONS_H_
