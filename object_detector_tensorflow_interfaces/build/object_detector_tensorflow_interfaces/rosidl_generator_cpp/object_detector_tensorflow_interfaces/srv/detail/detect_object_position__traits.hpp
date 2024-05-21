// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from object_detector_tensorflow_interfaces:srv/DetectObjectPosition.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_DETECTOR_TENSORFLOW_INTERFACES__SRV__DETAIL__DETECT_OBJECT_POSITION__TRAITS_HPP_
#define OBJECT_DETECTOR_TENSORFLOW_INTERFACES__SRV__DETAIL__DETECT_OBJECT_POSITION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "object_detector_tensorflow_interfaces/srv/detail/detect_object_position__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace object_detector_tensorflow_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const DetectObjectPosition_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: class_name
  {
    out << "class_name: ";
    rosidl_generator_traits::value_to_yaml(msg.class_name, out);
    out << ", ";
  }

  // member: base_frame
  {
    out << "base_frame: ";
    rosidl_generator_traits::value_to_yaml(msg.base_frame, out);
    out << ", ";
  }

  // member: camera_type
  {
    out << "camera_type: ";
    rosidl_generator_traits::value_to_yaml(msg.camera_type, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DetectObjectPosition_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: class_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "class_name: ";
    rosidl_generator_traits::value_to_yaml(msg.class_name, out);
    out << "\n";
  }

  // member: base_frame
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "base_frame: ";
    rosidl_generator_traits::value_to_yaml(msg.base_frame, out);
    out << "\n";
  }

  // member: camera_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "camera_type: ";
    rosidl_generator_traits::value_to_yaml(msg.camera_type, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DetectObjectPosition_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace object_detector_tensorflow_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use object_detector_tensorflow_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const object_detector_tensorflow_interfaces::srv::DetectObjectPosition_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  object_detector_tensorflow_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use object_detector_tensorflow_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const object_detector_tensorflow_interfaces::srv::DetectObjectPosition_Request & msg)
{
  return object_detector_tensorflow_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<object_detector_tensorflow_interfaces::srv::DetectObjectPosition_Request>()
{
  return "object_detector_tensorflow_interfaces::srv::DetectObjectPosition_Request";
}

template<>
inline const char * name<object_detector_tensorflow_interfaces::srv::DetectObjectPosition_Request>()
{
  return "object_detector_tensorflow_interfaces/srv/DetectObjectPosition_Request";
}

template<>
struct has_fixed_size<object_detector_tensorflow_interfaces::srv::DetectObjectPosition_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<object_detector_tensorflow_interfaces::srv::DetectObjectPosition_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<object_detector_tensorflow_interfaces::srv::DetectObjectPosition_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'point'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace object_detector_tensorflow_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const DetectObjectPosition_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: point
  {
    out << "point: ";
    to_flow_style_yaml(msg.point, out);
    out << ", ";
  }

  // member: probability
  {
    out << "probability: ";
    rosidl_generator_traits::value_to_yaml(msg.probability, out);
    out << ", ";
  }

  // member: class_name
  {
    out << "class_name: ";
    rosidl_generator_traits::value_to_yaml(msg.class_name, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DetectObjectPosition_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "point:\n";
    to_block_style_yaml(msg.point, out, indentation + 2);
  }

  // member: probability
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "probability: ";
    rosidl_generator_traits::value_to_yaml(msg.probability, out);
    out << "\n";
  }

  // member: class_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "class_name: ";
    rosidl_generator_traits::value_to_yaml(msg.class_name, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DetectObjectPosition_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace object_detector_tensorflow_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use object_detector_tensorflow_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const object_detector_tensorflow_interfaces::srv::DetectObjectPosition_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  object_detector_tensorflow_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use object_detector_tensorflow_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const object_detector_tensorflow_interfaces::srv::DetectObjectPosition_Response & msg)
{
  return object_detector_tensorflow_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<object_detector_tensorflow_interfaces::srv::DetectObjectPosition_Response>()
{
  return "object_detector_tensorflow_interfaces::srv::DetectObjectPosition_Response";
}

template<>
inline const char * name<object_detector_tensorflow_interfaces::srv::DetectObjectPosition_Response>()
{
  return "object_detector_tensorflow_interfaces/srv/DetectObjectPosition_Response";
}

template<>
struct has_fixed_size<object_detector_tensorflow_interfaces::srv::DetectObjectPosition_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<object_detector_tensorflow_interfaces::srv::DetectObjectPosition_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<object_detector_tensorflow_interfaces::srv::DetectObjectPosition_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<object_detector_tensorflow_interfaces::srv::DetectObjectPosition>()
{
  return "object_detector_tensorflow_interfaces::srv::DetectObjectPosition";
}

template<>
inline const char * name<object_detector_tensorflow_interfaces::srv::DetectObjectPosition>()
{
  return "object_detector_tensorflow_interfaces/srv/DetectObjectPosition";
}

template<>
struct has_fixed_size<object_detector_tensorflow_interfaces::srv::DetectObjectPosition>
  : std::integral_constant<
    bool,
    has_fixed_size<object_detector_tensorflow_interfaces::srv::DetectObjectPosition_Request>::value &&
    has_fixed_size<object_detector_tensorflow_interfaces::srv::DetectObjectPosition_Response>::value
  >
{
};

template<>
struct has_bounded_size<object_detector_tensorflow_interfaces::srv::DetectObjectPosition>
  : std::integral_constant<
    bool,
    has_bounded_size<object_detector_tensorflow_interfaces::srv::DetectObjectPosition_Request>::value &&
    has_bounded_size<object_detector_tensorflow_interfaces::srv::DetectObjectPosition_Response>::value
  >
{
};

template<>
struct is_service<object_detector_tensorflow_interfaces::srv::DetectObjectPosition>
  : std::true_type
{
};

template<>
struct is_service_request<object_detector_tensorflow_interfaces::srv::DetectObjectPosition_Request>
  : std::true_type
{
};

template<>
struct is_service_response<object_detector_tensorflow_interfaces::srv::DetectObjectPosition_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // OBJECT_DETECTOR_TENSORFLOW_INTERFACES__SRV__DETAIL__DETECT_OBJECT_POSITION__TRAITS_HPP_
