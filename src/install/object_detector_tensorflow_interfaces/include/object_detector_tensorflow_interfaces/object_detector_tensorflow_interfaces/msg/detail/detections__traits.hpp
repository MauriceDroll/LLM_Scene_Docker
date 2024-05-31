// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from object_detector_tensorflow_interfaces:msg/Detections.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_DETECTOR_TENSORFLOW_INTERFACES__MSG__DETAIL__DETECTIONS__TRAITS_HPP_
#define OBJECT_DETECTOR_TENSORFLOW_INTERFACES__MSG__DETAIL__DETECTIONS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "object_detector_tensorflow_interfaces/msg/detail/detections__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
// Member 'image_header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'detections'
#include "object_detector_tensorflow_interfaces/msg/detail/detection__traits.hpp"

namespace object_detector_tensorflow_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Detections & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: image_header
  {
    out << "image_header: ";
    to_flow_style_yaml(msg.image_header, out);
    out << ", ";
  }

  // member: detections
  {
    if (msg.detections.size() == 0) {
      out << "detections: []";
    } else {
      out << "detections: [";
      size_t pending_items = msg.detections.size();
      for (auto item : msg.detections) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Detections & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: image_header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "image_header:\n";
    to_block_style_yaml(msg.image_header, out, indentation + 2);
  }

  // member: detections
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.detections.size() == 0) {
      out << "detections: []\n";
    } else {
      out << "detections:\n";
      for (auto item : msg.detections) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Detections & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace object_detector_tensorflow_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use object_detector_tensorflow_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const object_detector_tensorflow_interfaces::msg::Detections & msg,
  std::ostream & out, size_t indentation = 0)
{
  object_detector_tensorflow_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use object_detector_tensorflow_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const object_detector_tensorflow_interfaces::msg::Detections & msg)
{
  return object_detector_tensorflow_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<object_detector_tensorflow_interfaces::msg::Detections>()
{
  return "object_detector_tensorflow_interfaces::msg::Detections";
}

template<>
inline const char * name<object_detector_tensorflow_interfaces::msg::Detections>()
{
  return "object_detector_tensorflow_interfaces/msg/Detections";
}

template<>
struct has_fixed_size<object_detector_tensorflow_interfaces::msg::Detections>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<object_detector_tensorflow_interfaces::msg::Detections>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<object_detector_tensorflow_interfaces::msg::Detections>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // OBJECT_DETECTOR_TENSORFLOW_INTERFACES__MSG__DETAIL__DETECTIONS__TRAITS_HPP_
