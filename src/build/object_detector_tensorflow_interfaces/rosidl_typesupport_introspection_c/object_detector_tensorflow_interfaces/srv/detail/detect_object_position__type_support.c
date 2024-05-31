// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from object_detector_tensorflow_interfaces:srv/DetectObjectPosition.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "object_detector_tensorflow_interfaces/srv/detail/detect_object_position__rosidl_typesupport_introspection_c.h"
#include "object_detector_tensorflow_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "object_detector_tensorflow_interfaces/srv/detail/detect_object_position__functions.h"
#include "object_detector_tensorflow_interfaces/srv/detail/detect_object_position__struct.h"


// Include directives for member types
// Member `class_name`
// Member `base_frame`
// Member `camera_type`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Request__rosidl_typesupport_introspection_c__DetectObjectPosition_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Request__init(message_memory);
}

void object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Request__rosidl_typesupport_introspection_c__DetectObjectPosition_Request_fini_function(void * message_memory)
{
  object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Request__rosidl_typesupport_introspection_c__DetectObjectPosition_Request_message_member_array[3] = {
  {
    "class_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Request, class_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "base_frame",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Request, base_frame),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "camera_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Request, camera_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Request__rosidl_typesupport_introspection_c__DetectObjectPosition_Request_message_members = {
  "object_detector_tensorflow_interfaces__srv",  // message namespace
  "DetectObjectPosition_Request",  // message name
  3,  // number of fields
  sizeof(object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Request),
  object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Request__rosidl_typesupport_introspection_c__DetectObjectPosition_Request_message_member_array,  // message members
  object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Request__rosidl_typesupport_introspection_c__DetectObjectPosition_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Request__rosidl_typesupport_introspection_c__DetectObjectPosition_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Request__rosidl_typesupport_introspection_c__DetectObjectPosition_Request_message_type_support_handle = {
  0,
  &object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Request__rosidl_typesupport_introspection_c__DetectObjectPosition_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_object_detector_tensorflow_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, object_detector_tensorflow_interfaces, srv, DetectObjectPosition_Request)() {
  if (!object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Request__rosidl_typesupport_introspection_c__DetectObjectPosition_Request_message_type_support_handle.typesupport_identifier) {
    object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Request__rosidl_typesupport_introspection_c__DetectObjectPosition_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Request__rosidl_typesupport_introspection_c__DetectObjectPosition_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "object_detector_tensorflow_interfaces/srv/detail/detect_object_position__rosidl_typesupport_introspection_c.h"
// already included above
// #include "object_detector_tensorflow_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "object_detector_tensorflow_interfaces/srv/detail/detect_object_position__functions.h"
// already included above
// #include "object_detector_tensorflow_interfaces/srv/detail/detect_object_position__struct.h"


// Include directives for member types
// Member `point`
#include "geometry_msgs/msg/point.h"
// Member `point`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"
// Member `class_name`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Response__rosidl_typesupport_introspection_c__DetectObjectPosition_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Response__init(message_memory);
}

void object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Response__rosidl_typesupport_introspection_c__DetectObjectPosition_Response_fini_function(void * message_memory)
{
  object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Response__rosidl_typesupport_introspection_c__DetectObjectPosition_Response_message_member_array[3] = {
  {
    "point",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Response, point),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "probability",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Response, probability),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "class_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Response, class_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Response__rosidl_typesupport_introspection_c__DetectObjectPosition_Response_message_members = {
  "object_detector_tensorflow_interfaces__srv",  // message namespace
  "DetectObjectPosition_Response",  // message name
  3,  // number of fields
  sizeof(object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Response),
  object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Response__rosidl_typesupport_introspection_c__DetectObjectPosition_Response_message_member_array,  // message members
  object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Response__rosidl_typesupport_introspection_c__DetectObjectPosition_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Response__rosidl_typesupport_introspection_c__DetectObjectPosition_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Response__rosidl_typesupport_introspection_c__DetectObjectPosition_Response_message_type_support_handle = {
  0,
  &object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Response__rosidl_typesupport_introspection_c__DetectObjectPosition_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_object_detector_tensorflow_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, object_detector_tensorflow_interfaces, srv, DetectObjectPosition_Response)() {
  object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Response__rosidl_typesupport_introspection_c__DetectObjectPosition_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  if (!object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Response__rosidl_typesupport_introspection_c__DetectObjectPosition_Response_message_type_support_handle.typesupport_identifier) {
    object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Response__rosidl_typesupport_introspection_c__DetectObjectPosition_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Response__rosidl_typesupport_introspection_c__DetectObjectPosition_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "object_detector_tensorflow_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "object_detector_tensorflow_interfaces/srv/detail/detect_object_position__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers object_detector_tensorflow_interfaces__srv__detail__detect_object_position__rosidl_typesupport_introspection_c__DetectObjectPosition_service_members = {
  "object_detector_tensorflow_interfaces__srv",  // service namespace
  "DetectObjectPosition",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // object_detector_tensorflow_interfaces__srv__detail__detect_object_position__rosidl_typesupport_introspection_c__DetectObjectPosition_Request_message_type_support_handle,
  NULL  // response message
  // object_detector_tensorflow_interfaces__srv__detail__detect_object_position__rosidl_typesupport_introspection_c__DetectObjectPosition_Response_message_type_support_handle
};

static rosidl_service_type_support_t object_detector_tensorflow_interfaces__srv__detail__detect_object_position__rosidl_typesupport_introspection_c__DetectObjectPosition_service_type_support_handle = {
  0,
  &object_detector_tensorflow_interfaces__srv__detail__detect_object_position__rosidl_typesupport_introspection_c__DetectObjectPosition_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, object_detector_tensorflow_interfaces, srv, DetectObjectPosition_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, object_detector_tensorflow_interfaces, srv, DetectObjectPosition_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_object_detector_tensorflow_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, object_detector_tensorflow_interfaces, srv, DetectObjectPosition)() {
  if (!object_detector_tensorflow_interfaces__srv__detail__detect_object_position__rosidl_typesupport_introspection_c__DetectObjectPosition_service_type_support_handle.typesupport_identifier) {
    object_detector_tensorflow_interfaces__srv__detail__detect_object_position__rosidl_typesupport_introspection_c__DetectObjectPosition_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)object_detector_tensorflow_interfaces__srv__detail__detect_object_position__rosidl_typesupport_introspection_c__DetectObjectPosition_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, object_detector_tensorflow_interfaces, srv, DetectObjectPosition_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, object_detector_tensorflow_interfaces, srv, DetectObjectPosition_Response)()->data;
  }

  return &object_detector_tensorflow_interfaces__srv__detail__detect_object_position__rosidl_typesupport_introspection_c__DetectObjectPosition_service_type_support_handle;
}
