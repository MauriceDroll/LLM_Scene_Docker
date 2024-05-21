// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from object_detector_tensorflow_interfaces:msg/Detection.idl
// generated code does not contain a copyright notice
#include "object_detector_tensorflow_interfaces/msg/detail/detection__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `class_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `center`
#include "geometry_msgs/msg/detail/point__functions.h"
// Member `bounding_box`
#include "sensor_msgs/msg/detail/region_of_interest__functions.h"

bool
object_detector_tensorflow_interfaces__msg__Detection__init(object_detector_tensorflow_interfaces__msg__Detection * msg)
{
  if (!msg) {
    return false;
  }
  // class_id
  // class_name
  if (!rosidl_runtime_c__String__init(&msg->class_name)) {
    object_detector_tensorflow_interfaces__msg__Detection__fini(msg);
    return false;
  }
  // probability
  // center
  if (!geometry_msgs__msg__Point__init(&msg->center)) {
    object_detector_tensorflow_interfaces__msg__Detection__fini(msg);
    return false;
  }
  // bounding_box
  if (!sensor_msgs__msg__RegionOfInterest__init(&msg->bounding_box)) {
    object_detector_tensorflow_interfaces__msg__Detection__fini(msg);
    return false;
  }
  return true;
}

void
object_detector_tensorflow_interfaces__msg__Detection__fini(object_detector_tensorflow_interfaces__msg__Detection * msg)
{
  if (!msg) {
    return;
  }
  // class_id
  // class_name
  rosidl_runtime_c__String__fini(&msg->class_name);
  // probability
  // center
  geometry_msgs__msg__Point__fini(&msg->center);
  // bounding_box
  sensor_msgs__msg__RegionOfInterest__fini(&msg->bounding_box);
}

bool
object_detector_tensorflow_interfaces__msg__Detection__are_equal(const object_detector_tensorflow_interfaces__msg__Detection * lhs, const object_detector_tensorflow_interfaces__msg__Detection * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // class_id
  if (lhs->class_id != rhs->class_id) {
    return false;
  }
  // class_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->class_name), &(rhs->class_name)))
  {
    return false;
  }
  // probability
  if (lhs->probability != rhs->probability) {
    return false;
  }
  // center
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->center), &(rhs->center)))
  {
    return false;
  }
  // bounding_box
  if (!sensor_msgs__msg__RegionOfInterest__are_equal(
      &(lhs->bounding_box), &(rhs->bounding_box)))
  {
    return false;
  }
  return true;
}

bool
object_detector_tensorflow_interfaces__msg__Detection__copy(
  const object_detector_tensorflow_interfaces__msg__Detection * input,
  object_detector_tensorflow_interfaces__msg__Detection * output)
{
  if (!input || !output) {
    return false;
  }
  // class_id
  output->class_id = input->class_id;
  // class_name
  if (!rosidl_runtime_c__String__copy(
      &(input->class_name), &(output->class_name)))
  {
    return false;
  }
  // probability
  output->probability = input->probability;
  // center
  if (!geometry_msgs__msg__Point__copy(
      &(input->center), &(output->center)))
  {
    return false;
  }
  // bounding_box
  if (!sensor_msgs__msg__RegionOfInterest__copy(
      &(input->bounding_box), &(output->bounding_box)))
  {
    return false;
  }
  return true;
}

object_detector_tensorflow_interfaces__msg__Detection *
object_detector_tensorflow_interfaces__msg__Detection__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  object_detector_tensorflow_interfaces__msg__Detection * msg = (object_detector_tensorflow_interfaces__msg__Detection *)allocator.allocate(sizeof(object_detector_tensorflow_interfaces__msg__Detection), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(object_detector_tensorflow_interfaces__msg__Detection));
  bool success = object_detector_tensorflow_interfaces__msg__Detection__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
object_detector_tensorflow_interfaces__msg__Detection__destroy(object_detector_tensorflow_interfaces__msg__Detection * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    object_detector_tensorflow_interfaces__msg__Detection__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
object_detector_tensorflow_interfaces__msg__Detection__Sequence__init(object_detector_tensorflow_interfaces__msg__Detection__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  object_detector_tensorflow_interfaces__msg__Detection * data = NULL;

  if (size) {
    data = (object_detector_tensorflow_interfaces__msg__Detection *)allocator.zero_allocate(size, sizeof(object_detector_tensorflow_interfaces__msg__Detection), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = object_detector_tensorflow_interfaces__msg__Detection__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        object_detector_tensorflow_interfaces__msg__Detection__fini(&data[i - 1]);
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
object_detector_tensorflow_interfaces__msg__Detection__Sequence__fini(object_detector_tensorflow_interfaces__msg__Detection__Sequence * array)
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
      object_detector_tensorflow_interfaces__msg__Detection__fini(&array->data[i]);
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

object_detector_tensorflow_interfaces__msg__Detection__Sequence *
object_detector_tensorflow_interfaces__msg__Detection__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  object_detector_tensorflow_interfaces__msg__Detection__Sequence * array = (object_detector_tensorflow_interfaces__msg__Detection__Sequence *)allocator.allocate(sizeof(object_detector_tensorflow_interfaces__msg__Detection__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = object_detector_tensorflow_interfaces__msg__Detection__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
object_detector_tensorflow_interfaces__msg__Detection__Sequence__destroy(object_detector_tensorflow_interfaces__msg__Detection__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    object_detector_tensorflow_interfaces__msg__Detection__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
object_detector_tensorflow_interfaces__msg__Detection__Sequence__are_equal(const object_detector_tensorflow_interfaces__msg__Detection__Sequence * lhs, const object_detector_tensorflow_interfaces__msg__Detection__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!object_detector_tensorflow_interfaces__msg__Detection__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
object_detector_tensorflow_interfaces__msg__Detection__Sequence__copy(
  const object_detector_tensorflow_interfaces__msg__Detection__Sequence * input,
  object_detector_tensorflow_interfaces__msg__Detection__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(object_detector_tensorflow_interfaces__msg__Detection);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    object_detector_tensorflow_interfaces__msg__Detection * data =
      (object_detector_tensorflow_interfaces__msg__Detection *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!object_detector_tensorflow_interfaces__msg__Detection__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          object_detector_tensorflow_interfaces__msg__Detection__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!object_detector_tensorflow_interfaces__msg__Detection__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
