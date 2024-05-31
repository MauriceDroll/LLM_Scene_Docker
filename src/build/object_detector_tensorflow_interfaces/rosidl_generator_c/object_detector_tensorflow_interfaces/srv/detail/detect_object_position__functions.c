// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from object_detector_tensorflow_interfaces:srv/DetectObjectPosition.idl
// generated code does not contain a copyright notice
#include "object_detector_tensorflow_interfaces/srv/detail/detect_object_position__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `class_name`
// Member `base_frame`
// Member `camera_type`
#include "rosidl_runtime_c/string_functions.h"

bool
object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Request__init(object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Request * msg)
{
  if (!msg) {
    return false;
  }
  // class_name
  if (!rosidl_runtime_c__String__init(&msg->class_name)) {
    object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Request__fini(msg);
    return false;
  }
  // base_frame
  if (!rosidl_runtime_c__String__init(&msg->base_frame)) {
    object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Request__fini(msg);
    return false;
  }
  // camera_type
  if (!rosidl_runtime_c__String__init(&msg->camera_type)) {
    object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Request__fini(msg);
    return false;
  }
  return true;
}

void
object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Request__fini(object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Request * msg)
{
  if (!msg) {
    return;
  }
  // class_name
  rosidl_runtime_c__String__fini(&msg->class_name);
  // base_frame
  rosidl_runtime_c__String__fini(&msg->base_frame);
  // camera_type
  rosidl_runtime_c__String__fini(&msg->camera_type);
}

bool
object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Request__are_equal(const object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Request * lhs, const object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // class_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->class_name), &(rhs->class_name)))
  {
    return false;
  }
  // base_frame
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->base_frame), &(rhs->base_frame)))
  {
    return false;
  }
  // camera_type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->camera_type), &(rhs->camera_type)))
  {
    return false;
  }
  return true;
}

bool
object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Request__copy(
  const object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Request * input,
  object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // class_name
  if (!rosidl_runtime_c__String__copy(
      &(input->class_name), &(output->class_name)))
  {
    return false;
  }
  // base_frame
  if (!rosidl_runtime_c__String__copy(
      &(input->base_frame), &(output->base_frame)))
  {
    return false;
  }
  // camera_type
  if (!rosidl_runtime_c__String__copy(
      &(input->camera_type), &(output->camera_type)))
  {
    return false;
  }
  return true;
}

object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Request *
object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Request * msg = (object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Request *)allocator.allocate(sizeof(object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Request));
  bool success = object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Request__destroy(object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Request__Sequence__init(object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Request * data = NULL;

  if (size) {
    data = (object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Request *)allocator.zero_allocate(size, sizeof(object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Request__fini(&data[i - 1]);
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
object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Request__Sequence__fini(object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Request__Sequence * array)
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
      object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Request__fini(&array->data[i]);
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

object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Request__Sequence *
object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Request__Sequence * array = (object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Request__Sequence *)allocator.allocate(sizeof(object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Request__Sequence__destroy(object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Request__Sequence__are_equal(const object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Request__Sequence * lhs, const object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Request__Sequence__copy(
  const object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Request__Sequence * input,
  object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Request * data =
      (object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `point`
#include "geometry_msgs/msg/detail/point__functions.h"
// Member `class_name`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Response__init(object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Response * msg)
{
  if (!msg) {
    return false;
  }
  // point
  if (!geometry_msgs__msg__Point__init(&msg->point)) {
    object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Response__fini(msg);
    return false;
  }
  // probability
  // class_name
  if (!rosidl_runtime_c__String__init(&msg->class_name)) {
    object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Response__fini(msg);
    return false;
  }
  return true;
}

void
object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Response__fini(object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Response * msg)
{
  if (!msg) {
    return;
  }
  // point
  geometry_msgs__msg__Point__fini(&msg->point);
  // probability
  // class_name
  rosidl_runtime_c__String__fini(&msg->class_name);
}

bool
object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Response__are_equal(const object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Response * lhs, const object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // point
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->point), &(rhs->point)))
  {
    return false;
  }
  // probability
  if (lhs->probability != rhs->probability) {
    return false;
  }
  // class_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->class_name), &(rhs->class_name)))
  {
    return false;
  }
  return true;
}

bool
object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Response__copy(
  const object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Response * input,
  object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // point
  if (!geometry_msgs__msg__Point__copy(
      &(input->point), &(output->point)))
  {
    return false;
  }
  // probability
  output->probability = input->probability;
  // class_name
  if (!rosidl_runtime_c__String__copy(
      &(input->class_name), &(output->class_name)))
  {
    return false;
  }
  return true;
}

object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Response *
object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Response * msg = (object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Response *)allocator.allocate(sizeof(object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Response));
  bool success = object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Response__destroy(object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Response__Sequence__init(object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Response * data = NULL;

  if (size) {
    data = (object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Response *)allocator.zero_allocate(size, sizeof(object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Response__fini(&data[i - 1]);
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
object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Response__Sequence__fini(object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Response__Sequence * array)
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
      object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Response__fini(&array->data[i]);
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

object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Response__Sequence *
object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Response__Sequence * array = (object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Response__Sequence *)allocator.allocate(sizeof(object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Response__Sequence__destroy(object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Response__Sequence__are_equal(const object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Response__Sequence * lhs, const object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Response__Sequence__copy(
  const object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Response__Sequence * input,
  object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Response * data =
      (object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
