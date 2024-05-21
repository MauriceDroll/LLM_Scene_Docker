// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from object_detector_tensorflow_interfaces:msg/Detection.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_DETECTOR_TENSORFLOW_INTERFACES__MSG__DETAIL__DETECTION__TRAITS_HPP_
#define OBJECT_DETECTOR_TENSORFLOW_INTERFACES__MSG__DETAIL__DETECTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "object_detector_tensorflow_interfaces/msg/detail/detection__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'center'
#include "geometry_msgs/msg/detail/point__traits.hpp"
// Member 'bounding_box'
#include "sensor_msgs/msg/detail/region_of_interest__traits.hpp"

namespace object_detector_tensorflow_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Detection & msg,
  std::ostream & out)
{
  out << "{";
  // member: class_id
  {
    out << "class_id: ";
    rosidl_generator_traits::value_to_yaml(msg.class_id, out);
    out << ", ";
  }

  // member: class_name
  {
    out << "class_name: ";
    rosidl_generator_traits::value_to_yaml(msg.class_name, out);
    out << ", ";
  }

  // member: probability
  {
    out << "probability: ";
    rosidl_generator_traits::value_to_yaml(msg.probability, out);
    out << ", ";
  }

  // member: center
  {
    out << "center: ";
    to_flow_style_yaml(msg.center, out);
    out << ", ";
  }

  // member: bounding_box
  {
    out << "bounding_box: ";
    to_flow_style_yaml(msg.bounding_box, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Detection & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: class_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "class_id: ";
    rosidl_generator_traits::value_to_yaml(msg.class_id, out);
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

  // member: probability
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "probability: ";
    rosidl_generator_traits::value_to_yaml(msg.probability, out);
    out << "\n";
  }

  // member: center
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "center:\n";
    to_block_style_yaml(msg.center, out, indentation + 2);
  }

  // member: bounding_box
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bounding_box:\n";
    to_block_style_yaml(msg.bounding_box, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Detection & msg, bool use_flow_style = false)
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
  const object_detector_tensorflow_interfaces::msg::Detection & msg,
  std::ostream & out, size_t indentation = 0)
{
  object_detector_tensorflow_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use object_detector_tensorflow_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const object_detector_tensorflow_interfaces::msg::Detection & msg)
{
  return object_detector_tensorflow_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<object_detector_tensorflow_interfaces::msg::Detection>()
{
  return "object_detector_tensorflow_interfaces::msg::Detection";
}

template<>
inline const char * name<object_detector_tensorflow_interfaces::msg::Detection>()
{
  return "object_detector_tensorflow_interfaces/msg/Detection";
}

template<>
struct has_fixed_size<object_detector_tensorflow_interfaces::msg::Detection>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<object_detector_tensorflow_interfaces::msg::Detection>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<object_detector_tensorflow_interfaces::msg::Detection>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // OBJECT_DETECTOR_TENSORFLOW_INTERFACES__MSG__DETAIL__DETECTION__TRAITS_HPP_
