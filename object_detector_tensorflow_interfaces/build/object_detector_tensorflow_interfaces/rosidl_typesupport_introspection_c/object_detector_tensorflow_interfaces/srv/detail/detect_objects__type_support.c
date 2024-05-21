// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from object_detector_tensorflow_interfaces:srv/DetectObjects.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "object_detector_tensorflow_interfaces/srv/detail/detect_objects__rosidl_typesupport_introspection_c.h"
#include "object_detector_tensorflow_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "object_detector_tensorflow_interfaces/srv/detail/detect_objects__functions.h"
#include "object_detector_tensorflow_interfaces/srv/detail/detect_objects__struct.h"


// Include directives for member types
// Member `image`
#include "sensor_msgs/msg/image.h"
// Member `image`
#include "sensor_msgs/msg/detail/image__rosidl_typesupport_introspection_c.h"
// Member `roi`
#include "sensor_msgs/msg/region_of_interest.h"
// Member `roi`
#include "sensor_msgs/msg/detail/region_of_interest__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void object_detector_tensorflow_interfaces__srv__DetectObjects_Request__rosidl_typesupport_introspection_c__DetectObjects_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  object_detector_tensorflow_interfaces__srv__DetectObjects_Request__init(message_memory);
}

void object_detector_tensorflow_interfaces__srv__DetectObjects_Request__rosidl_typesupport_introspection_c__DetectObjects_Request_fini_function(void * message_memory)
{
  object_detector_tensorflow_interfaces__srv__DetectObjects_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember object_detector_tensorflow_interfaces__srv__DetectObjects_Request__rosidl_typesupport_introspection_c__DetectObjects_Request_message_member_array[2] = {
  {
    "image",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(object_detector_tensorflow_interfaces__srv__DetectObjects_Request, image),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "roi",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(object_detector_tensorflow_interfaces__srv__DetectObjects_Request, roi),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers object_detector_tensorflow_interfaces__srv__DetectObjects_Request__rosidl_typesupport_introspection_c__DetectObjects_Request_message_members = {
  "object_detector_tensorflow_interfaces__srv",  // message namespace
  "DetectObjects_Request",  // message name
  2,  // number of fields
  sizeof(object_detector_tensorflow_interfaces__srv__DetectObjects_Request),
  object_detector_tensorflow_interfaces__srv__DetectObjects_Request__rosidl_typesupport_introspection_c__DetectObjects_Request_message_member_array,  // message members
  object_detector_tensorflow_interfaces__srv__DetectObjects_Request__rosidl_typesupport_introspection_c__DetectObjects_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  object_detector_tensorflow_interfaces__srv__DetectObjects_Request__rosidl_typesupport_introspection_c__DetectObjects_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t object_detector_tensorflow_interfaces__srv__DetectObjects_Request__rosidl_typesupport_introspection_c__DetectObjects_Request_message_type_support_handle = {
  0,
  &object_detector_tensorflow_interfaces__srv__DetectObjects_Request__rosidl_typesupport_introspection_c__DetectObjects_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_object_detector_tensorflow_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, object_detector_tensorflow_interfaces, srv, DetectObjects_Request)() {
  object_detector_tensorflow_interfaces__srv__DetectObjects_Request__rosidl_typesupport_introspection_c__DetectObjects_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, Image)();
  object_detector_tensorflow_interfaces__srv__DetectObjects_Request__rosidl_typesupport_introspection_c__DetectObjects_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, RegionOfInterest)();
  if (!object_detector_tensorflow_interfaces__srv__DetectObjects_Request__rosidl_typesupport_introspection_c__DetectObjects_Request_message_type_support_handle.typesupport_identifier) {
    object_detector_tensorflow_interfaces__srv__DetectObjects_Request__rosidl_typesupport_introspection_c__DetectObjects_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &object_detector_tensorflow_interfaces__srv__DetectObjects_Request__rosidl_typesupport_introspection_c__DetectObjects_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "object_detector_tensorflow_interfaces/srv/detail/detect_objects__rosidl_typesupport_introspection_c.h"
// already included above
// #include "object_detector_tensorflow_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "object_detector_tensorflow_interfaces/srv/detail/detect_objects__functions.h"
// already included above
// #include "object_detector_tensorflow_interfaces/srv/detail/detect_objects__struct.h"


// Include directives for member types
// Member `detections`
#include "object_detector_tensorflow_interfaces/msg/detections.h"
// Member `detections`
#include "object_detector_tensorflow_interfaces/msg/detail/detections__rosidl_typesupport_introspection_c.h"
// Member `result_image`
// already included above
// #include "sensor_msgs/msg/image.h"
// Member `result_image`
// already included above
// #include "sensor_msgs/msg/detail/image__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void object_detector_tensorflow_interfaces__srv__DetectObjects_Response__rosidl_typesupport_introspection_c__DetectObjects_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  object_detector_tensorflow_interfaces__srv__DetectObjects_Response__init(message_memory);
}

void object_detector_tensorflow_interfaces__srv__DetectObjects_Response__rosidl_typesupport_introspection_c__DetectObjects_Response_fini_function(void * message_memory)
{
  object_detector_tensorflow_interfaces__srv__DetectObjects_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember object_detector_tensorflow_interfaces__srv__DetectObjects_Response__rosidl_typesupport_introspection_c__DetectObjects_Response_message_member_array[2] = {
  {
    "detections",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(object_detector_tensorflow_interfaces__srv__DetectObjects_Response, detections),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result_image",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(object_detector_tensorflow_interfaces__srv__DetectObjects_Response, result_image),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers object_detector_tensorflow_interfaces__srv__DetectObjects_Response__rosidl_typesupport_introspection_c__DetectObjects_Response_message_members = {
  "object_detector_tensorflow_interfaces__srv",  // message namespace
  "DetectObjects_Response",  // message name
  2,  // number of fields
  sizeof(object_detector_tensorflow_interfaces__srv__DetectObjects_Response),
  object_detector_tensorflow_interfaces__srv__DetectObjects_Response__rosidl_typesupport_introspection_c__DetectObjects_Response_message_member_array,  // message members
  object_detector_tensorflow_interfaces__srv__DetectObjects_Response__rosidl_typesupport_introspection_c__DetectObjects_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  object_detector_tensorflow_interfaces__srv__DetectObjects_Response__rosidl_typesupport_introspection_c__DetectObjects_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t object_detector_tensorflow_interfaces__srv__DetectObjects_Response__rosidl_typesupport_introspection_c__DetectObjects_Response_message_type_support_handle = {
  0,
  &object_detector_tensorflow_interfaces__srv__DetectObjects_Response__rosidl_typesupport_introspection_c__DetectObjects_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_object_detector_tensorflow_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, object_detector_tensorflow_interfaces, srv, DetectObjects_Response)() {
  object_detector_tensorflow_interfaces__srv__DetectObjects_Response__rosidl_typesupport_introspection_c__DetectObjects_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, object_detector_tensorflow_interfaces, msg, Detections)();
  object_detector_tensorflow_interfaces__srv__DetectObjects_Response__rosidl_typesupport_introspection_c__DetectObjects_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, Image)();
  if (!object_detector_tensorflow_interfaces__srv__DetectObjects_Response__rosidl_typesupport_introspection_c__DetectObjects_Response_message_type_support_handle.typesupport_identifier) {
    object_detector_tensorflow_interfaces__srv__DetectObjects_Response__rosidl_typesupport_introspection_c__DetectObjects_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &object_detector_tensorflow_interfaces__srv__DetectObjects_Response__rosidl_typesupport_introspection_c__DetectObjects_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "object_detector_tensorflow_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "object_detector_tensorflow_interfaces/srv/detail/detect_objects__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers object_detector_tensorflow_interfaces__srv__detail__detect_objects__rosidl_typesupport_introspection_c__DetectObjects_service_members = {
  "object_detector_tensorflow_interfaces__srv",  // service namespace
  "DetectObjects",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // object_detector_tensorflow_interfaces__srv__detail__detect_objects__rosidl_typesupport_introspection_c__DetectObjects_Request_message_type_support_handle,
  NULL  // response message
  // object_detector_tensorflow_interfaces__srv__detail__detect_objects__rosidl_typesupport_introspection_c__DetectObjects_Response_message_type_support_handle
};

static rosidl_service_type_support_t object_detector_tensorflow_interfaces__srv__detail__detect_objects__rosidl_typesupport_introspection_c__DetectObjects_service_type_support_handle = {
  0,
  &object_detector_tensorflow_interfaces__srv__detail__detect_objects__rosidl_typesupport_introspection_c__DetectObjects_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, object_detector_tensorflow_interfaces, srv, DetectObjects_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, object_detector_tensorflow_interfaces, srv, DetectObjects_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_object_detector_tensorflow_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, object_detector_tensorflow_interfaces, srv, DetectObjects)() {
  if (!object_detector_tensorflow_interfaces__srv__detail__detect_objects__rosidl_typesupport_introspection_c__DetectObjects_service_type_support_handle.typesupport_identifier) {
    object_detector_tensorflow_interfaces__srv__detail__detect_objects__rosidl_typesupport_introspection_c__DetectObjects_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)object_detector_tensorflow_interfaces__srv__detail__detect_objects__rosidl_typesupport_introspection_c__DetectObjects_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, object_detector_tensorflow_interfaces, srv, DetectObjects_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, object_detector_tensorflow_interfaces, srv, DetectObjects_Response)()->data;
  }

  return &object_detector_tensorflow_interfaces__srv__detail__detect_objects__rosidl_typesupport_introspection_c__DetectObjects_service_type_support_handle;
}
