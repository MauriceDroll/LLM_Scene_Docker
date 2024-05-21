// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from object_detector_tensorflow_interfaces:msg/Detections.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "object_detector_tensorflow_interfaces/msg/detail/detections__rosidl_typesupport_introspection_c.h"
#include "object_detector_tensorflow_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "object_detector_tensorflow_interfaces/msg/detail/detections__functions.h"
#include "object_detector_tensorflow_interfaces/msg/detail/detections__struct.h"


// Include directives for member types
// Member `header`
// Member `image_header`
#include "std_msgs/msg/header.h"
// Member `header`
// Member `image_header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `detections`
#include "object_detector_tensorflow_interfaces/msg/detection.h"
// Member `detections`
#include "object_detector_tensorflow_interfaces/msg/detail/detection__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void object_detector_tensorflow_interfaces__msg__Detections__rosidl_typesupport_introspection_c__Detections_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  object_detector_tensorflow_interfaces__msg__Detections__init(message_memory);
}

void object_detector_tensorflow_interfaces__msg__Detections__rosidl_typesupport_introspection_c__Detections_fini_function(void * message_memory)
{
  object_detector_tensorflow_interfaces__msg__Detections__fini(message_memory);
}

size_t object_detector_tensorflow_interfaces__msg__Detections__rosidl_typesupport_introspection_c__size_function__Detections__detections(
  const void * untyped_member)
{
  const object_detector_tensorflow_interfaces__msg__Detection__Sequence * member =
    (const object_detector_tensorflow_interfaces__msg__Detection__Sequence *)(untyped_member);
  return member->size;
}

const void * object_detector_tensorflow_interfaces__msg__Detections__rosidl_typesupport_introspection_c__get_const_function__Detections__detections(
  const void * untyped_member, size_t index)
{
  const object_detector_tensorflow_interfaces__msg__Detection__Sequence * member =
    (const object_detector_tensorflow_interfaces__msg__Detection__Sequence *)(untyped_member);
  return &member->data[index];
}

void * object_detector_tensorflow_interfaces__msg__Detections__rosidl_typesupport_introspection_c__get_function__Detections__detections(
  void * untyped_member, size_t index)
{
  object_detector_tensorflow_interfaces__msg__Detection__Sequence * member =
    (object_detector_tensorflow_interfaces__msg__Detection__Sequence *)(untyped_member);
  return &member->data[index];
}

void object_detector_tensorflow_interfaces__msg__Detections__rosidl_typesupport_introspection_c__fetch_function__Detections__detections(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const object_detector_tensorflow_interfaces__msg__Detection * item =
    ((const object_detector_tensorflow_interfaces__msg__Detection *)
    object_detector_tensorflow_interfaces__msg__Detections__rosidl_typesupport_introspection_c__get_const_function__Detections__detections(untyped_member, index));
  object_detector_tensorflow_interfaces__msg__Detection * value =
    (object_detector_tensorflow_interfaces__msg__Detection *)(untyped_value);
  *value = *item;
}

void object_detector_tensorflow_interfaces__msg__Detections__rosidl_typesupport_introspection_c__assign_function__Detections__detections(
  void * untyped_member, size_t index, const void * untyped_value)
{
  object_detector_tensorflow_interfaces__msg__Detection * item =
    ((object_detector_tensorflow_interfaces__msg__Detection *)
    object_detector_tensorflow_interfaces__msg__Detections__rosidl_typesupport_introspection_c__get_function__Detections__detections(untyped_member, index));
  const object_detector_tensorflow_interfaces__msg__Detection * value =
    (const object_detector_tensorflow_interfaces__msg__Detection *)(untyped_value);
  *item = *value;
}

bool object_detector_tensorflow_interfaces__msg__Detections__rosidl_typesupport_introspection_c__resize_function__Detections__detections(
  void * untyped_member, size_t size)
{
  object_detector_tensorflow_interfaces__msg__Detection__Sequence * member =
    (object_detector_tensorflow_interfaces__msg__Detection__Sequence *)(untyped_member);
  object_detector_tensorflow_interfaces__msg__Detection__Sequence__fini(member);
  return object_detector_tensorflow_interfaces__msg__Detection__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember object_detector_tensorflow_interfaces__msg__Detections__rosidl_typesupport_introspection_c__Detections_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(object_detector_tensorflow_interfaces__msg__Detections, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "image_header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(object_detector_tensorflow_interfaces__msg__Detections, image_header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "detections",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(object_detector_tensorflow_interfaces__msg__Detections, detections),  // bytes offset in struct
    NULL,  // default value
    object_detector_tensorflow_interfaces__msg__Detections__rosidl_typesupport_introspection_c__size_function__Detections__detections,  // size() function pointer
    object_detector_tensorflow_interfaces__msg__Detections__rosidl_typesupport_introspection_c__get_const_function__Detections__detections,  // get_const(index) function pointer
    object_detector_tensorflow_interfaces__msg__Detections__rosidl_typesupport_introspection_c__get_function__Detections__detections,  // get(index) function pointer
    object_detector_tensorflow_interfaces__msg__Detections__rosidl_typesupport_introspection_c__fetch_function__Detections__detections,  // fetch(index, &value) function pointer
    object_detector_tensorflow_interfaces__msg__Detections__rosidl_typesupport_introspection_c__assign_function__Detections__detections,  // assign(index, value) function pointer
    object_detector_tensorflow_interfaces__msg__Detections__rosidl_typesupport_introspection_c__resize_function__Detections__detections  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers object_detector_tensorflow_interfaces__msg__Detections__rosidl_typesupport_introspection_c__Detections_message_members = {
  "object_detector_tensorflow_interfaces__msg",  // message namespace
  "Detections",  // message name
  3,  // number of fields
  sizeof(object_detector_tensorflow_interfaces__msg__Detections),
  object_detector_tensorflow_interfaces__msg__Detections__rosidl_typesupport_introspection_c__Detections_message_member_array,  // message members
  object_detector_tensorflow_interfaces__msg__Detections__rosidl_typesupport_introspection_c__Detections_init_function,  // function to initialize message memory (memory has to be allocated)
  object_detector_tensorflow_interfaces__msg__Detections__rosidl_typesupport_introspection_c__Detections_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t object_detector_tensorflow_interfaces__msg__Detections__rosidl_typesupport_introspection_c__Detections_message_type_support_handle = {
  0,
  &object_detector_tensorflow_interfaces__msg__Detections__rosidl_typesupport_introspection_c__Detections_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_object_detector_tensorflow_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, object_detector_tensorflow_interfaces, msg, Detections)() {
  object_detector_tensorflow_interfaces__msg__Detections__rosidl_typesupport_introspection_c__Detections_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  object_detector_tensorflow_interfaces__msg__Detections__rosidl_typesupport_introspection_c__Detections_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  object_detector_tensorflow_interfaces__msg__Detections__rosidl_typesupport_introspection_c__Detections_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, object_detector_tensorflow_interfaces, msg, Detection)();
  if (!object_detector_tensorflow_interfaces__msg__Detections__rosidl_typesupport_introspection_c__Detections_message_type_support_handle.typesupport_identifier) {
    object_detector_tensorflow_interfaces__msg__Detections__rosidl_typesupport_introspection_c__Detections_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &object_detector_tensorflow_interfaces__msg__Detections__rosidl_typesupport_introspection_c__Detections_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
