// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from object_detector_tensorflow_interfaces:srv/DetectObjects.idl
// generated code does not contain a copyright notice
#include "object_detector_tensorflow_interfaces/srv/detail/detect_objects__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `image`
#include "sensor_msgs/msg/detail/image__functions.h"
// Member `roi`
#include "sensor_msgs/msg/detail/region_of_interest__functions.h"

bool
object_detector_tensorflow_interfaces__srv__DetectObjects_Request__init(object_detector_tensorflow_interfaces__srv__DetectObjects_Request * msg)
{
  if (!msg) {
    return false;
  }
  // image
  if (!sensor_msgs__msg__Image__init(&msg->image)) {
    object_detector_tensorflow_interfaces__srv__DetectObjects_Request__fini(msg);
    return false;
  }
  // roi
  if (!sensor_msgs__msg__RegionOfInterest__init(&msg->roi)) {
    object_detector_tensorflow_interfaces__srv__DetectObjects_Request__fini(msg);
    return false;
  }
  return true;
}

void
object_detector_tensorflow_interfaces__srv__DetectObjects_Request__fini(object_detector_tensorflow_interfaces__srv__DetectObjects_Request * msg)
{
  if (!msg) {
    return;
  }
  // image
  sensor_msgs__msg__Image__fini(&msg->image);
  // roi
  sensor_msgs__msg__RegionOfInterest__fini(&msg->roi);
}

bool
object_detector_tensorflow_interfaces__srv__DetectObjects_Request__are_equal(const object_detector_tensorflow_interfaces__srv__DetectObjects_Request * lhs, const object_detector_tensorflow_interfaces__srv__DetectObjects_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // image
  if (!sensor_msgs__msg__Image__are_equal(
      &(lhs->image), &(rhs->image)))
  {
    return false;
  }
  // roi
  if (!sensor_msgs__msg__RegionOfInterest__are_equal(
      &(lhs->roi), &(rhs->roi)))
  {
    return false;
  }
  return true;
}

bool
object_detector_tensorflow_interfaces__srv__DetectObjects_Request__copy(
  const object_detector_tensorflow_interfaces__srv__DetectObjects_Request * input,
  object_detector_tensorflow_interfaces__srv__DetectObjects_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // image
  if (!sensor_msgs__msg__Image__copy(
      &(input->image), &(output->image)))
  {
    return false;
  }
  // roi
  if (!sensor_msgs__msg__RegionOfInterest__copy(
      &(input->roi), &(output->roi)))
  {
    return false;
  }
  return true;
}

object_detector_tensorflow_interfaces__srv__DetectObjects_Request *
object_detector_tensorflow_interfaces__srv__DetectObjects_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  object_detector_tensorflow_interfaces__srv__DetectObjects_Request * msg = (object_detector_tensorflow_interfaces__srv__DetectObjects_Request *)allocator.allocate(sizeof(object_detector_tensorflow_interfaces__srv__DetectObjects_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(object_detector_tensorflow_interfaces__srv__DetectObjects_Request));
  bool success = object_detector_tensorflow_interfaces__srv__DetectObjects_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
object_detector_tensorflow_interfaces__srv__DetectObjects_Request__destroy(object_detector_tensorflow_interfaces__srv__DetectObjects_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    object_detector_tensorflow_interfaces__srv__DetectObjects_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
object_detector_tensorflow_interfaces__srv__DetectObjects_Request__Sequence__init(object_detector_tensorflow_interfaces__srv__DetectObjects_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  object_detector_tensorflow_interfaces__srv__DetectObjects_Request * data = NULL;

  if (size) {
    data = (object_detector_tensorflow_interfaces__srv__DetectObjects_Request *)allocator.zero_allocate(size, sizeof(object_detector_tensorflow_interfaces__srv__DetectObjects_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = object_detector_tensorflow_interfaces__srv__DetectObjects_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        object_detector_tensorflow_interfaces__srv__DetectObjects_Request__fini(&data[i - 1]);
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
object_detector_tensorflow_interfaces__srv__DetectObjects_Request__Sequence__fini(object_detector_tensorflow_interfaces__srv__DetectObjects_Request__Sequence * array)
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
      object_detector_tensorflow_interfaces__srv__DetectObjects_Request__fini(&array->data[i]);
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

object_detector_tensorflow_interfaces__srv__DetectObjects_Request__Sequence *
object_detector_tensorflow_interfaces__srv__DetectObjects_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  object_detector_tensorflow_interfaces__srv__DetectObjects_Request__Sequence * array = (object_detector_tensorflow_interfaces__srv__DetectObjects_Request__Sequence *)allocator.allocate(sizeof(object_detector_tensorflow_interfaces__srv__DetectObjects_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = object_detector_tensorflow_interfaces__srv__DetectObjects_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
object_detector_tensorflow_interfaces__srv__DetectObjects_Request__Sequence__destroy(object_detector_tensorflow_interfaces__srv__DetectObjects_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    object_detector_tensorflow_interfaces__srv__DetectObjects_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
object_detector_tensorflow_interfaces__srv__DetectObjects_Request__Sequence__are_equal(const object_detector_tensorflow_interfaces__srv__DetectObjects_Request__Sequence * lhs, const object_detector_tensorflow_interfaces__srv__DetectObjects_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!object_detector_tensorflow_interfaces__srv__DetectObjects_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
object_detector_tensorflow_interfaces__srv__DetectObjects_Request__Sequence__copy(
  const object_detector_tensorflow_interfaces__srv__DetectObjects_Request__Sequence * input,
  object_detector_tensorflow_interfaces__srv__DetectObjects_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(object_detector_tensorflow_interfaces__srv__DetectObjects_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    object_detector_tensorflow_interfaces__srv__DetectObjects_Request * data =
      (object_detector_tensorflow_interfaces__srv__DetectObjects_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!object_detector_tensorflow_interfaces__srv__DetectObjects_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          object_detector_tensorflow_interfaces__srv__DetectObjects_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!object_detector_tensorflow_interfaces__srv__DetectObjects_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `detections`
#include "object_detector_tensorflow_interfaces/msg/detail/detections__functions.h"
// Member `result_image`
// already included above
// #include "sensor_msgs/msg/detail/image__functions.h"

bool
object_detector_tensorflow_interfaces__srv__DetectObjects_Response__init(object_detector_tensorflow_interfaces__srv__DetectObjects_Response * msg)
{
  if (!msg) {
    return false;
  }
  // detections
  if (!object_detector_tensorflow_interfaces__msg__Detections__init(&msg->detections)) {
    object_detector_tensorflow_interfaces__srv__DetectObjects_Response__fini(msg);
    return false;
  }
  // result_image
  if (!sensor_msgs__msg__Image__init(&msg->result_image)) {
    object_detector_tensorflow_interfaces__srv__DetectObjects_Response__fini(msg);
    return false;
  }
  return true;
}

void
object_detector_tensorflow_interfaces__srv__DetectObjects_Response__fini(object_detector_tensorflow_interfaces__srv__DetectObjects_Response * msg)
{
  if (!msg) {
    return;
  }
  // detections
  object_detector_tensorflow_interfaces__msg__Detections__fini(&msg->detections);
  // result_image
  sensor_msgs__msg__Image__fini(&msg->result_image);
}

bool
object_detector_tensorflow_interfaces__srv__DetectObjects_Response__are_equal(const object_detector_tensorflow_interfaces__srv__DetectObjects_Response * lhs, const object_detector_tensorflow_interfaces__srv__DetectObjects_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // detections
  if (!object_detector_tensorflow_interfaces__msg__Detections__are_equal(
      &(lhs->detections), &(rhs->detections)))
  {
    return false;
  }
  // result_image
  if (!sensor_msgs__msg__Image__are_equal(
      &(lhs->result_image), &(rhs->result_image)))
  {
    return false;
  }
  return true;
}

bool
object_detector_tensorflow_interfaces__srv__DetectObjects_Response__copy(
  const object_detector_tensorflow_interfaces__srv__DetectObjects_Response * input,
  object_detector_tensorflow_interfaces__srv__DetectObjects_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // detections
  if (!object_detector_tensorflow_interfaces__msg__Detections__copy(
      &(input->detections), &(output->detections)))
  {
    return false;
  }
  // result_image
  if (!sensor_msgs__msg__Image__copy(
      &(input->result_image), &(output->result_image)))
  {
    return false;
  }
  return true;
}

object_detector_tensorflow_interfaces__srv__DetectObjects_Response *
object_detector_tensorflow_interfaces__srv__DetectObjects_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  object_detector_tensorflow_interfaces__srv__DetectObjects_Response * msg = (object_detector_tensorflow_interfaces__srv__DetectObjects_Response *)allocator.allocate(sizeof(object_detector_tensorflow_interfaces__srv__DetectObjects_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(object_detector_tensorflow_interfaces__srv__DetectObjects_Response));
  bool success = object_detector_tensorflow_interfaces__srv__DetectObjects_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
object_detector_tensorflow_interfaces__srv__DetectObjects_Response__destroy(object_detector_tensorflow_interfaces__srv__DetectObjects_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    object_detector_tensorflow_interfaces__srv__DetectObjects_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
object_detector_tensorflow_interfaces__srv__DetectObjects_Response__Sequence__init(object_detector_tensorflow_interfaces__srv__DetectObjects_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  object_detector_tensorflow_interfaces__srv__DetectObjects_Response * data = NULL;

  if (size) {
    data = (object_detector_tensorflow_interfaces__srv__DetectObjects_Response *)allocator.zero_allocate(size, sizeof(object_detector_tensorflow_interfaces__srv__DetectObjects_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = object_detector_tensorflow_interfaces__srv__DetectObjects_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        object_detector_tensorflow_interfaces__srv__DetectObjects_Response__fini(&data[i - 1]);
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
object_detector_tensorflow_interfaces__srv__DetectObjects_Response__Sequence__fini(object_detector_tensorflow_interfaces__srv__DetectObjects_Response__Sequence * array)
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
      object_detector_tensorflow_interfaces__srv__DetectObjects_Response__fini(&array->data[i]);
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

object_detector_tensorflow_interfaces__srv__DetectObjects_Response__Sequence *
object_detector_tensorflow_interfaces__srv__DetectObjects_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  object_detector_tensorflow_interfaces__srv__DetectObjects_Response__Sequence * array = (object_detector_tensorflow_interfaces__srv__DetectObjects_Response__Sequence *)allocator.allocate(sizeof(object_detector_tensorflow_interfaces__srv__DetectObjects_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = object_detector_tensorflow_interfaces__srv__DetectObjects_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
object_detector_tensorflow_interfaces__srv__DetectObjects_Response__Sequence__destroy(object_detector_tensorflow_interfaces__srv__DetectObjects_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    object_detector_tensorflow_interfaces__srv__DetectObjects_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
object_detector_tensorflow_interfaces__srv__DetectObjects_Response__Sequence__are_equal(const object_detector_tensorflow_interfaces__srv__DetectObjects_Response__Sequence * lhs, const object_detector_tensorflow_interfaces__srv__DetectObjects_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!object_detector_tensorflow_interfaces__srv__DetectObjects_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
object_detector_tensorflow_interfaces__srv__DetectObjects_Response__Sequence__copy(
  const object_detector_tensorflow_interfaces__srv__DetectObjects_Response__Sequence * input,
  object_detector_tensorflow_interfaces__srv__DetectObjects_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(object_detector_tensorflow_interfaces__srv__DetectObjects_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    object_detector_tensorflow_interfaces__srv__DetectObjects_Response * data =
      (object_detector_tensorflow_interfaces__srv__DetectObjects_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!object_detector_tensorflow_interfaces__srv__DetectObjects_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          object_detector_tensorflow_interfaces__srv__DetectObjects_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!object_detector_tensorflow_interfaces__srv__DetectObjects_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
