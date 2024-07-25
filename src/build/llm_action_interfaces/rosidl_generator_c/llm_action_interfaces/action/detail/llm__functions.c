// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from llm_action_interfaces:action/LLM.idl
// generated code does not contain a copyright notice
#include "llm_action_interfaces/action/detail/llm__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `userinput`
#include "rosidl_runtime_c/string_functions.h"

bool
llm_action_interfaces__action__LLM_Goal__init(llm_action_interfaces__action__LLM_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // userinput
  if (!rosidl_runtime_c__String__init(&msg->userinput)) {
    llm_action_interfaces__action__LLM_Goal__fini(msg);
    return false;
  }
  return true;
}

void
llm_action_interfaces__action__LLM_Goal__fini(llm_action_interfaces__action__LLM_Goal * msg)
{
  if (!msg) {
    return;
  }
  // userinput
  rosidl_runtime_c__String__fini(&msg->userinput);
}

bool
llm_action_interfaces__action__LLM_Goal__are_equal(const llm_action_interfaces__action__LLM_Goal * lhs, const llm_action_interfaces__action__LLM_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // userinput
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->userinput), &(rhs->userinput)))
  {
    return false;
  }
  return true;
}

bool
llm_action_interfaces__action__LLM_Goal__copy(
  const llm_action_interfaces__action__LLM_Goal * input,
  llm_action_interfaces__action__LLM_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // userinput
  if (!rosidl_runtime_c__String__copy(
      &(input->userinput), &(output->userinput)))
  {
    return false;
  }
  return true;
}

llm_action_interfaces__action__LLM_Goal *
llm_action_interfaces__action__LLM_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  llm_action_interfaces__action__LLM_Goal * msg = (llm_action_interfaces__action__LLM_Goal *)allocator.allocate(sizeof(llm_action_interfaces__action__LLM_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(llm_action_interfaces__action__LLM_Goal));
  bool success = llm_action_interfaces__action__LLM_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
llm_action_interfaces__action__LLM_Goal__destroy(llm_action_interfaces__action__LLM_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    llm_action_interfaces__action__LLM_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
llm_action_interfaces__action__LLM_Goal__Sequence__init(llm_action_interfaces__action__LLM_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  llm_action_interfaces__action__LLM_Goal * data = NULL;

  if (size) {
    data = (llm_action_interfaces__action__LLM_Goal *)allocator.zero_allocate(size, sizeof(llm_action_interfaces__action__LLM_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = llm_action_interfaces__action__LLM_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        llm_action_interfaces__action__LLM_Goal__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
llm_action_interfaces__action__LLM_Goal__Sequence__fini(llm_action_interfaces__action__LLM_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      llm_action_interfaces__action__LLM_Goal__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

llm_action_interfaces__action__LLM_Goal__Sequence *
llm_action_interfaces__action__LLM_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  llm_action_interfaces__action__LLM_Goal__Sequence * array = (llm_action_interfaces__action__LLM_Goal__Sequence *)allocator.allocate(sizeof(llm_action_interfaces__action__LLM_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = llm_action_interfaces__action__LLM_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
llm_action_interfaces__action__LLM_Goal__Sequence__destroy(llm_action_interfaces__action__LLM_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    llm_action_interfaces__action__LLM_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
llm_action_interfaces__action__LLM_Goal__Sequence__are_equal(const llm_action_interfaces__action__LLM_Goal__Sequence * lhs, const llm_action_interfaces__action__LLM_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!llm_action_interfaces__action__LLM_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
llm_action_interfaces__action__LLM_Goal__Sequence__copy(
  const llm_action_interfaces__action__LLM_Goal__Sequence * input,
  llm_action_interfaces__action__LLM_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(llm_action_interfaces__action__LLM_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    llm_action_interfaces__action__LLM_Goal * data =
      (llm_action_interfaces__action__LLM_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!llm_action_interfaces__action__LLM_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          llm_action_interfaces__action__LLM_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!llm_action_interfaces__action__LLM_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `llmoutput`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
llm_action_interfaces__action__LLM_Result__init(llm_action_interfaces__action__LLM_Result * msg)
{
  if (!msg) {
    return false;
  }
  // llmoutput
  if (!rosidl_runtime_c__String__init(&msg->llmoutput)) {
    llm_action_interfaces__action__LLM_Result__fini(msg);
    return false;
  }
  return true;
}

void
llm_action_interfaces__action__LLM_Result__fini(llm_action_interfaces__action__LLM_Result * msg)
{
  if (!msg) {
    return;
  }
  // llmoutput
  rosidl_runtime_c__String__fini(&msg->llmoutput);
}

bool
llm_action_interfaces__action__LLM_Result__are_equal(const llm_action_interfaces__action__LLM_Result * lhs, const llm_action_interfaces__action__LLM_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // llmoutput
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->llmoutput), &(rhs->llmoutput)))
  {
    return false;
  }
  return true;
}

bool
llm_action_interfaces__action__LLM_Result__copy(
  const llm_action_interfaces__action__LLM_Result * input,
  llm_action_interfaces__action__LLM_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // llmoutput
  if (!rosidl_runtime_c__String__copy(
      &(input->llmoutput), &(output->llmoutput)))
  {
    return false;
  }
  return true;
}

llm_action_interfaces__action__LLM_Result *
llm_action_interfaces__action__LLM_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  llm_action_interfaces__action__LLM_Result * msg = (llm_action_interfaces__action__LLM_Result *)allocator.allocate(sizeof(llm_action_interfaces__action__LLM_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(llm_action_interfaces__action__LLM_Result));
  bool success = llm_action_interfaces__action__LLM_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
llm_action_interfaces__action__LLM_Result__destroy(llm_action_interfaces__action__LLM_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    llm_action_interfaces__action__LLM_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
llm_action_interfaces__action__LLM_Result__Sequence__init(llm_action_interfaces__action__LLM_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  llm_action_interfaces__action__LLM_Result * data = NULL;

  if (size) {
    data = (llm_action_interfaces__action__LLM_Result *)allocator.zero_allocate(size, sizeof(llm_action_interfaces__action__LLM_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = llm_action_interfaces__action__LLM_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        llm_action_interfaces__action__LLM_Result__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
llm_action_interfaces__action__LLM_Result__Sequence__fini(llm_action_interfaces__action__LLM_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      llm_action_interfaces__action__LLM_Result__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

llm_action_interfaces__action__LLM_Result__Sequence *
llm_action_interfaces__action__LLM_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  llm_action_interfaces__action__LLM_Result__Sequence * array = (llm_action_interfaces__action__LLM_Result__Sequence *)allocator.allocate(sizeof(llm_action_interfaces__action__LLM_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = llm_action_interfaces__action__LLM_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
llm_action_interfaces__action__LLM_Result__Sequence__destroy(llm_action_interfaces__action__LLM_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    llm_action_interfaces__action__LLM_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
llm_action_interfaces__action__LLM_Result__Sequence__are_equal(const llm_action_interfaces__action__LLM_Result__Sequence * lhs, const llm_action_interfaces__action__LLM_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!llm_action_interfaces__action__LLM_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
llm_action_interfaces__action__LLM_Result__Sequence__copy(
  const llm_action_interfaces__action__LLM_Result__Sequence * input,
  llm_action_interfaces__action__LLM_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(llm_action_interfaces__action__LLM_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    llm_action_interfaces__action__LLM_Result * data =
      (llm_action_interfaces__action__LLM_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!llm_action_interfaces__action__LLM_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          llm_action_interfaces__action__LLM_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!llm_action_interfaces__action__LLM_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
llm_action_interfaces__action__LLM_Feedback__init(llm_action_interfaces__action__LLM_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // progress
  return true;
}

void
llm_action_interfaces__action__LLM_Feedback__fini(llm_action_interfaces__action__LLM_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // progress
}

bool
llm_action_interfaces__action__LLM_Feedback__are_equal(const llm_action_interfaces__action__LLM_Feedback * lhs, const llm_action_interfaces__action__LLM_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // progress
  if (lhs->progress != rhs->progress) {
    return false;
  }
  return true;
}

bool
llm_action_interfaces__action__LLM_Feedback__copy(
  const llm_action_interfaces__action__LLM_Feedback * input,
  llm_action_interfaces__action__LLM_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // progress
  output->progress = input->progress;
  return true;
}

llm_action_interfaces__action__LLM_Feedback *
llm_action_interfaces__action__LLM_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  llm_action_interfaces__action__LLM_Feedback * msg = (llm_action_interfaces__action__LLM_Feedback *)allocator.allocate(sizeof(llm_action_interfaces__action__LLM_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(llm_action_interfaces__action__LLM_Feedback));
  bool success = llm_action_interfaces__action__LLM_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
llm_action_interfaces__action__LLM_Feedback__destroy(llm_action_interfaces__action__LLM_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    llm_action_interfaces__action__LLM_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
llm_action_interfaces__action__LLM_Feedback__Sequence__init(llm_action_interfaces__action__LLM_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  llm_action_interfaces__action__LLM_Feedback * data = NULL;

  if (size) {
    data = (llm_action_interfaces__action__LLM_Feedback *)allocator.zero_allocate(size, sizeof(llm_action_interfaces__action__LLM_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = llm_action_interfaces__action__LLM_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        llm_action_interfaces__action__LLM_Feedback__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
llm_action_interfaces__action__LLM_Feedback__Sequence__fini(llm_action_interfaces__action__LLM_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      llm_action_interfaces__action__LLM_Feedback__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

llm_action_interfaces__action__LLM_Feedback__Sequence *
llm_action_interfaces__action__LLM_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  llm_action_interfaces__action__LLM_Feedback__Sequence * array = (llm_action_interfaces__action__LLM_Feedback__Sequence *)allocator.allocate(sizeof(llm_action_interfaces__action__LLM_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = llm_action_interfaces__action__LLM_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
llm_action_interfaces__action__LLM_Feedback__Sequence__destroy(llm_action_interfaces__action__LLM_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    llm_action_interfaces__action__LLM_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
llm_action_interfaces__action__LLM_Feedback__Sequence__are_equal(const llm_action_interfaces__action__LLM_Feedback__Sequence * lhs, const llm_action_interfaces__action__LLM_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!llm_action_interfaces__action__LLM_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
llm_action_interfaces__action__LLM_Feedback__Sequence__copy(
  const llm_action_interfaces__action__LLM_Feedback__Sequence * input,
  llm_action_interfaces__action__LLM_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(llm_action_interfaces__action__LLM_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    llm_action_interfaces__action__LLM_Feedback * data =
      (llm_action_interfaces__action__LLM_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!llm_action_interfaces__action__LLM_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          llm_action_interfaces__action__LLM_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!llm_action_interfaces__action__LLM_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "llm_action_interfaces/action/detail/llm__functions.h"

bool
llm_action_interfaces__action__LLM_SendGoal_Request__init(llm_action_interfaces__action__LLM_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    llm_action_interfaces__action__LLM_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!llm_action_interfaces__action__LLM_Goal__init(&msg->goal)) {
    llm_action_interfaces__action__LLM_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
llm_action_interfaces__action__LLM_SendGoal_Request__fini(llm_action_interfaces__action__LLM_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  llm_action_interfaces__action__LLM_Goal__fini(&msg->goal);
}

bool
llm_action_interfaces__action__LLM_SendGoal_Request__are_equal(const llm_action_interfaces__action__LLM_SendGoal_Request * lhs, const llm_action_interfaces__action__LLM_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!llm_action_interfaces__action__LLM_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
llm_action_interfaces__action__LLM_SendGoal_Request__copy(
  const llm_action_interfaces__action__LLM_SendGoal_Request * input,
  llm_action_interfaces__action__LLM_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!llm_action_interfaces__action__LLM_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

llm_action_interfaces__action__LLM_SendGoal_Request *
llm_action_interfaces__action__LLM_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  llm_action_interfaces__action__LLM_SendGoal_Request * msg = (llm_action_interfaces__action__LLM_SendGoal_Request *)allocator.allocate(sizeof(llm_action_interfaces__action__LLM_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(llm_action_interfaces__action__LLM_SendGoal_Request));
  bool success = llm_action_interfaces__action__LLM_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
llm_action_interfaces__action__LLM_SendGoal_Request__destroy(llm_action_interfaces__action__LLM_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    llm_action_interfaces__action__LLM_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
llm_action_interfaces__action__LLM_SendGoal_Request__Sequence__init(llm_action_interfaces__action__LLM_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  llm_action_interfaces__action__LLM_SendGoal_Request * data = NULL;

  if (size) {
    data = (llm_action_interfaces__action__LLM_SendGoal_Request *)allocator.zero_allocate(size, sizeof(llm_action_interfaces__action__LLM_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = llm_action_interfaces__action__LLM_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        llm_action_interfaces__action__LLM_SendGoal_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
llm_action_interfaces__action__LLM_SendGoal_Request__Sequence__fini(llm_action_interfaces__action__LLM_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      llm_action_interfaces__action__LLM_SendGoal_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

llm_action_interfaces__action__LLM_SendGoal_Request__Sequence *
llm_action_interfaces__action__LLM_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  llm_action_interfaces__action__LLM_SendGoal_Request__Sequence * array = (llm_action_interfaces__action__LLM_SendGoal_Request__Sequence *)allocator.allocate(sizeof(llm_action_interfaces__action__LLM_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = llm_action_interfaces__action__LLM_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
llm_action_interfaces__action__LLM_SendGoal_Request__Sequence__destroy(llm_action_interfaces__action__LLM_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    llm_action_interfaces__action__LLM_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
llm_action_interfaces__action__LLM_SendGoal_Request__Sequence__are_equal(const llm_action_interfaces__action__LLM_SendGoal_Request__Sequence * lhs, const llm_action_interfaces__action__LLM_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!llm_action_interfaces__action__LLM_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
llm_action_interfaces__action__LLM_SendGoal_Request__Sequence__copy(
  const llm_action_interfaces__action__LLM_SendGoal_Request__Sequence * input,
  llm_action_interfaces__action__LLM_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(llm_action_interfaces__action__LLM_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    llm_action_interfaces__action__LLM_SendGoal_Request * data =
      (llm_action_interfaces__action__LLM_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!llm_action_interfaces__action__LLM_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          llm_action_interfaces__action__LLM_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!llm_action_interfaces__action__LLM_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
llm_action_interfaces__action__LLM_SendGoal_Response__init(llm_action_interfaces__action__LLM_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    llm_action_interfaces__action__LLM_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
llm_action_interfaces__action__LLM_SendGoal_Response__fini(llm_action_interfaces__action__LLM_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
llm_action_interfaces__action__LLM_SendGoal_Response__are_equal(const llm_action_interfaces__action__LLM_SendGoal_Response * lhs, const llm_action_interfaces__action__LLM_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
llm_action_interfaces__action__LLM_SendGoal_Response__copy(
  const llm_action_interfaces__action__LLM_SendGoal_Response * input,
  llm_action_interfaces__action__LLM_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

llm_action_interfaces__action__LLM_SendGoal_Response *
llm_action_interfaces__action__LLM_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  llm_action_interfaces__action__LLM_SendGoal_Response * msg = (llm_action_interfaces__action__LLM_SendGoal_Response *)allocator.allocate(sizeof(llm_action_interfaces__action__LLM_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(llm_action_interfaces__action__LLM_SendGoal_Response));
  bool success = llm_action_interfaces__action__LLM_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
llm_action_interfaces__action__LLM_SendGoal_Response__destroy(llm_action_interfaces__action__LLM_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    llm_action_interfaces__action__LLM_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
llm_action_interfaces__action__LLM_SendGoal_Response__Sequence__init(llm_action_interfaces__action__LLM_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  llm_action_interfaces__action__LLM_SendGoal_Response * data = NULL;

  if (size) {
    data = (llm_action_interfaces__action__LLM_SendGoal_Response *)allocator.zero_allocate(size, sizeof(llm_action_interfaces__action__LLM_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = llm_action_interfaces__action__LLM_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        llm_action_interfaces__action__LLM_SendGoal_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
llm_action_interfaces__action__LLM_SendGoal_Response__Sequence__fini(llm_action_interfaces__action__LLM_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      llm_action_interfaces__action__LLM_SendGoal_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

llm_action_interfaces__action__LLM_SendGoal_Response__Sequence *
llm_action_interfaces__action__LLM_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  llm_action_interfaces__action__LLM_SendGoal_Response__Sequence * array = (llm_action_interfaces__action__LLM_SendGoal_Response__Sequence *)allocator.allocate(sizeof(llm_action_interfaces__action__LLM_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = llm_action_interfaces__action__LLM_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
llm_action_interfaces__action__LLM_SendGoal_Response__Sequence__destroy(llm_action_interfaces__action__LLM_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    llm_action_interfaces__action__LLM_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
llm_action_interfaces__action__LLM_SendGoal_Response__Sequence__are_equal(const llm_action_interfaces__action__LLM_SendGoal_Response__Sequence * lhs, const llm_action_interfaces__action__LLM_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!llm_action_interfaces__action__LLM_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
llm_action_interfaces__action__LLM_SendGoal_Response__Sequence__copy(
  const llm_action_interfaces__action__LLM_SendGoal_Response__Sequence * input,
  llm_action_interfaces__action__LLM_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(llm_action_interfaces__action__LLM_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    llm_action_interfaces__action__LLM_SendGoal_Response * data =
      (llm_action_interfaces__action__LLM_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!llm_action_interfaces__action__LLM_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          llm_action_interfaces__action__LLM_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!llm_action_interfaces__action__LLM_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
llm_action_interfaces__action__LLM_GetResult_Request__init(llm_action_interfaces__action__LLM_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    llm_action_interfaces__action__LLM_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
llm_action_interfaces__action__LLM_GetResult_Request__fini(llm_action_interfaces__action__LLM_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
llm_action_interfaces__action__LLM_GetResult_Request__are_equal(const llm_action_interfaces__action__LLM_GetResult_Request * lhs, const llm_action_interfaces__action__LLM_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
llm_action_interfaces__action__LLM_GetResult_Request__copy(
  const llm_action_interfaces__action__LLM_GetResult_Request * input,
  llm_action_interfaces__action__LLM_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

llm_action_interfaces__action__LLM_GetResult_Request *
llm_action_interfaces__action__LLM_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  llm_action_interfaces__action__LLM_GetResult_Request * msg = (llm_action_interfaces__action__LLM_GetResult_Request *)allocator.allocate(sizeof(llm_action_interfaces__action__LLM_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(llm_action_interfaces__action__LLM_GetResult_Request));
  bool success = llm_action_interfaces__action__LLM_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
llm_action_interfaces__action__LLM_GetResult_Request__destroy(llm_action_interfaces__action__LLM_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    llm_action_interfaces__action__LLM_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
llm_action_interfaces__action__LLM_GetResult_Request__Sequence__init(llm_action_interfaces__action__LLM_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  llm_action_interfaces__action__LLM_GetResult_Request * data = NULL;

  if (size) {
    data = (llm_action_interfaces__action__LLM_GetResult_Request *)allocator.zero_allocate(size, sizeof(llm_action_interfaces__action__LLM_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = llm_action_interfaces__action__LLM_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        llm_action_interfaces__action__LLM_GetResult_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
llm_action_interfaces__action__LLM_GetResult_Request__Sequence__fini(llm_action_interfaces__action__LLM_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      llm_action_interfaces__action__LLM_GetResult_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

llm_action_interfaces__action__LLM_GetResult_Request__Sequence *
llm_action_interfaces__action__LLM_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  llm_action_interfaces__action__LLM_GetResult_Request__Sequence * array = (llm_action_interfaces__action__LLM_GetResult_Request__Sequence *)allocator.allocate(sizeof(llm_action_interfaces__action__LLM_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = llm_action_interfaces__action__LLM_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
llm_action_interfaces__action__LLM_GetResult_Request__Sequence__destroy(llm_action_interfaces__action__LLM_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    llm_action_interfaces__action__LLM_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
llm_action_interfaces__action__LLM_GetResult_Request__Sequence__are_equal(const llm_action_interfaces__action__LLM_GetResult_Request__Sequence * lhs, const llm_action_interfaces__action__LLM_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!llm_action_interfaces__action__LLM_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
llm_action_interfaces__action__LLM_GetResult_Request__Sequence__copy(
  const llm_action_interfaces__action__LLM_GetResult_Request__Sequence * input,
  llm_action_interfaces__action__LLM_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(llm_action_interfaces__action__LLM_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    llm_action_interfaces__action__LLM_GetResult_Request * data =
      (llm_action_interfaces__action__LLM_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!llm_action_interfaces__action__LLM_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          llm_action_interfaces__action__LLM_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!llm_action_interfaces__action__LLM_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "llm_action_interfaces/action/detail/llm__functions.h"

bool
llm_action_interfaces__action__LLM_GetResult_Response__init(llm_action_interfaces__action__LLM_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!llm_action_interfaces__action__LLM_Result__init(&msg->result)) {
    llm_action_interfaces__action__LLM_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
llm_action_interfaces__action__LLM_GetResult_Response__fini(llm_action_interfaces__action__LLM_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  llm_action_interfaces__action__LLM_Result__fini(&msg->result);
}

bool
llm_action_interfaces__action__LLM_GetResult_Response__are_equal(const llm_action_interfaces__action__LLM_GetResult_Response * lhs, const llm_action_interfaces__action__LLM_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!llm_action_interfaces__action__LLM_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
llm_action_interfaces__action__LLM_GetResult_Response__copy(
  const llm_action_interfaces__action__LLM_GetResult_Response * input,
  llm_action_interfaces__action__LLM_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!llm_action_interfaces__action__LLM_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

llm_action_interfaces__action__LLM_GetResult_Response *
llm_action_interfaces__action__LLM_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  llm_action_interfaces__action__LLM_GetResult_Response * msg = (llm_action_interfaces__action__LLM_GetResult_Response *)allocator.allocate(sizeof(llm_action_interfaces__action__LLM_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(llm_action_interfaces__action__LLM_GetResult_Response));
  bool success = llm_action_interfaces__action__LLM_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
llm_action_interfaces__action__LLM_GetResult_Response__destroy(llm_action_interfaces__action__LLM_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    llm_action_interfaces__action__LLM_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
llm_action_interfaces__action__LLM_GetResult_Response__Sequence__init(llm_action_interfaces__action__LLM_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  llm_action_interfaces__action__LLM_GetResult_Response * data = NULL;

  if (size) {
    data = (llm_action_interfaces__action__LLM_GetResult_Response *)allocator.zero_allocate(size, sizeof(llm_action_interfaces__action__LLM_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = llm_action_interfaces__action__LLM_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        llm_action_interfaces__action__LLM_GetResult_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
llm_action_interfaces__action__LLM_GetResult_Response__Sequence__fini(llm_action_interfaces__action__LLM_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      llm_action_interfaces__action__LLM_GetResult_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

llm_action_interfaces__action__LLM_GetResult_Response__Sequence *
llm_action_interfaces__action__LLM_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  llm_action_interfaces__action__LLM_GetResult_Response__Sequence * array = (llm_action_interfaces__action__LLM_GetResult_Response__Sequence *)allocator.allocate(sizeof(llm_action_interfaces__action__LLM_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = llm_action_interfaces__action__LLM_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
llm_action_interfaces__action__LLM_GetResult_Response__Sequence__destroy(llm_action_interfaces__action__LLM_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    llm_action_interfaces__action__LLM_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
llm_action_interfaces__action__LLM_GetResult_Response__Sequence__are_equal(const llm_action_interfaces__action__LLM_GetResult_Response__Sequence * lhs, const llm_action_interfaces__action__LLM_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!llm_action_interfaces__action__LLM_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
llm_action_interfaces__action__LLM_GetResult_Response__Sequence__copy(
  const llm_action_interfaces__action__LLM_GetResult_Response__Sequence * input,
  llm_action_interfaces__action__LLM_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(llm_action_interfaces__action__LLM_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    llm_action_interfaces__action__LLM_GetResult_Response * data =
      (llm_action_interfaces__action__LLM_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!llm_action_interfaces__action__LLM_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          llm_action_interfaces__action__LLM_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!llm_action_interfaces__action__LLM_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "llm_action_interfaces/action/detail/llm__functions.h"

bool
llm_action_interfaces__action__LLM_FeedbackMessage__init(llm_action_interfaces__action__LLM_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    llm_action_interfaces__action__LLM_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!llm_action_interfaces__action__LLM_Feedback__init(&msg->feedback)) {
    llm_action_interfaces__action__LLM_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
llm_action_interfaces__action__LLM_FeedbackMessage__fini(llm_action_interfaces__action__LLM_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  llm_action_interfaces__action__LLM_Feedback__fini(&msg->feedback);
}

bool
llm_action_interfaces__action__LLM_FeedbackMessage__are_equal(const llm_action_interfaces__action__LLM_FeedbackMessage * lhs, const llm_action_interfaces__action__LLM_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!llm_action_interfaces__action__LLM_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
llm_action_interfaces__action__LLM_FeedbackMessage__copy(
  const llm_action_interfaces__action__LLM_FeedbackMessage * input,
  llm_action_interfaces__action__LLM_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!llm_action_interfaces__action__LLM_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

llm_action_interfaces__action__LLM_FeedbackMessage *
llm_action_interfaces__action__LLM_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  llm_action_interfaces__action__LLM_FeedbackMessage * msg = (llm_action_interfaces__action__LLM_FeedbackMessage *)allocator.allocate(sizeof(llm_action_interfaces__action__LLM_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(llm_action_interfaces__action__LLM_FeedbackMessage));
  bool success = llm_action_interfaces__action__LLM_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
llm_action_interfaces__action__LLM_FeedbackMessage__destroy(llm_action_interfaces__action__LLM_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    llm_action_interfaces__action__LLM_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
llm_action_interfaces__action__LLM_FeedbackMessage__Sequence__init(llm_action_interfaces__action__LLM_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  llm_action_interfaces__action__LLM_FeedbackMessage * data = NULL;

  if (size) {
    data = (llm_action_interfaces__action__LLM_FeedbackMessage *)allocator.zero_allocate(size, sizeof(llm_action_interfaces__action__LLM_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = llm_action_interfaces__action__LLM_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        llm_action_interfaces__action__LLM_FeedbackMessage__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
llm_action_interfaces__action__LLM_FeedbackMessage__Sequence__fini(llm_action_interfaces__action__LLM_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      llm_action_interfaces__action__LLM_FeedbackMessage__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

llm_action_interfaces__action__LLM_FeedbackMessage__Sequence *
llm_action_interfaces__action__LLM_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  llm_action_interfaces__action__LLM_FeedbackMessage__Sequence * array = (llm_action_interfaces__action__LLM_FeedbackMessage__Sequence *)allocator.allocate(sizeof(llm_action_interfaces__action__LLM_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = llm_action_interfaces__action__LLM_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
llm_action_interfaces__action__LLM_FeedbackMessage__Sequence__destroy(llm_action_interfaces__action__LLM_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    llm_action_interfaces__action__LLM_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
llm_action_interfaces__action__LLM_FeedbackMessage__Sequence__are_equal(const llm_action_interfaces__action__LLM_FeedbackMessage__Sequence * lhs, const llm_action_interfaces__action__LLM_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!llm_action_interfaces__action__LLM_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
llm_action_interfaces__action__LLM_FeedbackMessage__Sequence__copy(
  const llm_action_interfaces__action__LLM_FeedbackMessage__Sequence * input,
  llm_action_interfaces__action__LLM_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(llm_action_interfaces__action__LLM_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    llm_action_interfaces__action__LLM_FeedbackMessage * data =
      (llm_action_interfaces__action__LLM_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!llm_action_interfaces__action__LLM_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          llm_action_interfaces__action__LLM_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!llm_action_interfaces__action__LLM_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
