// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from object_detector_tensorflow_interfaces:srv/DetectObjects.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_DETECTOR_TENSORFLOW_INTERFACES__SRV__DETAIL__DETECT_OBJECTS__TRAITS_HPP_
#define OBJECT_DETECTOR_TENSORFLOW_INTERFACES__SRV__DETAIL__DETECT_OBJECTS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "object_detector_tensorflow_interfaces/srv/detail/detect_objects__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'image'
#include "sensor_msgs/msg/detail/image__traits.hpp"
// Member 'roi'
#include "sensor_msgs/msg/detail/region_of_interest__traits.hpp"

namespace object_detector_tensorflow_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const DetectObjects_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: image
  {
    out << "image: ";
    to_flow_style_yaml(msg.image, out);
    out << ", ";
  }

  // member: roi
  {
    out << "roi: ";
    to_flow_style_yaml(msg.roi, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DetectObjects_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: image
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "image:\n";
    to_block_style_yaml(msg.image, out, indentation + 2);
  }

  // member: roi
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "roi:\n";
    to_block_style_yaml(msg.roi, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DetectObjects_Request & msg, bool use_flow_style = false)
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
  const object_detector_tensorflow_interfaces::srv::DetectObjects_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  object_detector_tensorflow_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use object_detector_tensorflow_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const object_detector_tensorflow_interfaces::srv::DetectObjects_Request & msg)
{
  return object_detector_tensorflow_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<object_detector_tensorflow_interfaces::srv::DetectObjects_Request>()
{
  return "object_detector_tensorflow_interfaces::srv::DetectObjects_Request";
}

template<>
inline const char * name<object_detector_tensorflow_interfaces::srv::DetectObjects_Request>()
{
  return "object_detector_tensorflow_interfaces/srv/DetectObjects_Request";
}

template<>
struct has_fixed_size<object_detector_tensorflow_interfaces::srv::DetectObjects_Request>
  : std::integral_constant<bool, has_fixed_size<sensor_msgs::msg::Image>::value && has_fixed_size<sensor_msgs::msg::RegionOfInterest>::value> {};

template<>
struct has_bounded_size<object_detector_tensorflow_interfaces::srv::DetectObjects_Request>
  : std::integral_constant<bool, has_bounded_size<sensor_msgs::msg::Image>::value && has_bounded_size<sensor_msgs::msg::RegionOfInterest>::value> {};

template<>
struct is_message<object_detector_tensorflow_interfaces::srv::DetectObjects_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'detections'
#include "object_detector_tensorflow_interfaces/msg/detail/detections__traits.hpp"
// Member 'result_image'
// already included above
// #include "sensor_msgs/msg/detail/image__traits.hpp"

namespace object_detector_tensorflow_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const DetectObjects_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: detections
  {
    out << "detections: ";
    to_flow_style_yaml(msg.detections, out);
    out << ", ";
  }

  // member: result_image
  {
    out << "result_image: ";
    to_flow_style_yaml(msg.result_image, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DetectObjects_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: detections
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "detections:\n";
    to_block_style_yaml(msg.detections, out, indentation + 2);
  }

  // member: result_image
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result_image:\n";
    to_block_style_yaml(msg.result_image, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DetectObjects_Response & msg, bool use_flow_style = false)
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
  const object_detector_tensorflow_interfaces::srv::DetectObjects_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  object_detector_tensorflow_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use object_detector_tensorflow_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const object_detector_tensorflow_interfaces::srv::DetectObjects_Response & msg)
{
  return object_detector_tensorflow_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<object_detector_tensorflow_interfaces::srv::DetectObjects_Response>()
{
  return "object_detector_tensorflow_interfaces::srv::DetectObjects_Response";
}

template<>
inline const char * name<object_detector_tensorflow_interfaces::srv::DetectObjects_Response>()
{
  return "object_detector_tensorflow_interfaces/srv/DetectObjects_Response";
}

template<>
struct has_fixed_size<object_detector_tensorflow_interfaces::srv::DetectObjects_Response>
  : std::integral_constant<bool, has_fixed_size<object_detector_tensorflow_interfaces::msg::Detections>::value && has_fixed_size<sensor_msgs::msg::Image>::value> {};

template<>
struct has_bounded_size<object_detector_tensorflow_interfaces::srv::DetectObjects_Response>
  : std::integral_constant<bool, has_bounded_size<object_detector_tensorflow_interfaces::msg::Detections>::value && has_bounded_size<sensor_msgs::msg::Image>::value> {};

template<>
struct is_message<object_detector_tensorflow_interfaces::srv::DetectObjects_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<object_detector_tensorflow_interfaces::srv::DetectObjects>()
{
  return "object_detector_tensorflow_interfaces::srv::DetectObjects";
}

template<>
inline const char * name<object_detector_tensorflow_interfaces::srv::DetectObjects>()
{
  return "object_detector_tensorflow_interfaces/srv/DetectObjects";
}

template<>
struct has_fixed_size<object_detector_tensorflow_interfaces::srv::DetectObjects>
  : std::integral_constant<
    bool,
    has_fixed_size<object_detector_tensorflow_interfaces::srv::DetectObjects_Request>::value &&
    has_fixed_size<object_detector_tensorflow_interfaces::srv::DetectObjects_Response>::value
  >
{
};

template<>
struct has_bounded_size<object_detector_tensorflow_interfaces::srv::DetectObjects>
  : std::integral_constant<
    bool,
    has_bounded_size<object_detector_tensorflow_interfaces::srv::DetectObjects_Request>::value &&
    has_bounded_size<object_detector_tensorflow_interfaces::srv::DetectObjects_Response>::value
  >
{
};

template<>
struct is_service<object_detector_tensorflow_interfaces::srv::DetectObjects>
  : std::true_type
{
};

template<>
struct is_service_request<object_detector_tensorflow_interfaces::srv::DetectObjects_Request>
  : std::true_type
{
};

template<>
struct is_service_response<object_detector_tensorflow_interfaces::srv::DetectObjects_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // OBJECT_DETECTOR_TENSORFLOW_INTERFACES__SRV__DETAIL__DETECT_OBJECTS__TRAITS_HPP_
