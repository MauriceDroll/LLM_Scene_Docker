// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from llm_action_interfaces:srv/SolutionImage.idl
// generated code does not contain a copyright notice

#ifndef LLM_ACTION_INTERFACES__SRV__DETAIL__SOLUTION_IMAGE__TRAITS_HPP_
#define LLM_ACTION_INTERFACES__SRV__DETAIL__SOLUTION_IMAGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "llm_action_interfaces/srv/detail/solution_image__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace llm_action_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SolutionImage_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SolutionImage_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SolutionImage_Request & msg, bool use_flow_style = false)
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

}  // namespace llm_action_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use llm_action_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const llm_action_interfaces::srv::SolutionImage_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  llm_action_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use llm_action_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const llm_action_interfaces::srv::SolutionImage_Request & msg)
{
  return llm_action_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<llm_action_interfaces::srv::SolutionImage_Request>()
{
  return "llm_action_interfaces::srv::SolutionImage_Request";
}

template<>
inline const char * name<llm_action_interfaces::srv::SolutionImage_Request>()
{
  return "llm_action_interfaces/srv/SolutionImage_Request";
}

template<>
struct has_fixed_size<llm_action_interfaces::srv::SolutionImage_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<llm_action_interfaces::srv::SolutionImage_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<llm_action_interfaces::srv::SolutionImage_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'image'
#include "sensor_msgs/msg/detail/image__traits.hpp"

namespace llm_action_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SolutionImage_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: image
  {
    out << "image: ";
    to_flow_style_yaml(msg.image, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SolutionImage_Response & msg,
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SolutionImage_Response & msg, bool use_flow_style = false)
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

}  // namespace llm_action_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use llm_action_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const llm_action_interfaces::srv::SolutionImage_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  llm_action_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use llm_action_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const llm_action_interfaces::srv::SolutionImage_Response & msg)
{
  return llm_action_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<llm_action_interfaces::srv::SolutionImage_Response>()
{
  return "llm_action_interfaces::srv::SolutionImage_Response";
}

template<>
inline const char * name<llm_action_interfaces::srv::SolutionImage_Response>()
{
  return "llm_action_interfaces/srv/SolutionImage_Response";
}

template<>
struct has_fixed_size<llm_action_interfaces::srv::SolutionImage_Response>
  : std::integral_constant<bool, has_fixed_size<sensor_msgs::msg::Image>::value> {};

template<>
struct has_bounded_size<llm_action_interfaces::srv::SolutionImage_Response>
  : std::integral_constant<bool, has_bounded_size<sensor_msgs::msg::Image>::value> {};

template<>
struct is_message<llm_action_interfaces::srv::SolutionImage_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<llm_action_interfaces::srv::SolutionImage>()
{
  return "llm_action_interfaces::srv::SolutionImage";
}

template<>
inline const char * name<llm_action_interfaces::srv::SolutionImage>()
{
  return "llm_action_interfaces/srv/SolutionImage";
}

template<>
struct has_fixed_size<llm_action_interfaces::srv::SolutionImage>
  : std::integral_constant<
    bool,
    has_fixed_size<llm_action_interfaces::srv::SolutionImage_Request>::value &&
    has_fixed_size<llm_action_interfaces::srv::SolutionImage_Response>::value
  >
{
};

template<>
struct has_bounded_size<llm_action_interfaces::srv::SolutionImage>
  : std::integral_constant<
    bool,
    has_bounded_size<llm_action_interfaces::srv::SolutionImage_Request>::value &&
    has_bounded_size<llm_action_interfaces::srv::SolutionImage_Response>::value
  >
{
};

template<>
struct is_service<llm_action_interfaces::srv::SolutionImage>
  : std::true_type
{
};

template<>
struct is_service_request<llm_action_interfaces::srv::SolutionImage_Request>
  : std::true_type
{
};

template<>
struct is_service_response<llm_action_interfaces::srv::SolutionImage_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // LLM_ACTION_INTERFACES__SRV__DETAIL__SOLUTION_IMAGE__TRAITS_HPP_
