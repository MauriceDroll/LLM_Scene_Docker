// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from llm_action_interfaces:srv/SolutionImage.idl
// generated code does not contain a copyright notice

#ifndef LLM_ACTION_INTERFACES__SRV__DETAIL__SOLUTION_IMAGE__BUILDER_HPP_
#define LLM_ACTION_INTERFACES__SRV__DETAIL__SOLUTION_IMAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "llm_action_interfaces/srv/detail/solution_image__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace llm_action_interfaces
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::llm_action_interfaces::srv::SolutionImage_Request>()
{
  return ::llm_action_interfaces::srv::SolutionImage_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace llm_action_interfaces


namespace llm_action_interfaces
{

namespace srv
{

namespace builder
{

class Init_SolutionImage_Response_image
{
public:
  Init_SolutionImage_Response_image()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::llm_action_interfaces::srv::SolutionImage_Response image(::llm_action_interfaces::srv::SolutionImage_Response::_image_type arg)
  {
    msg_.image = std::move(arg);
    return std::move(msg_);
  }

private:
  ::llm_action_interfaces::srv::SolutionImage_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::llm_action_interfaces::srv::SolutionImage_Response>()
{
  return llm_action_interfaces::srv::builder::Init_SolutionImage_Response_image();
}

}  // namespace llm_action_interfaces

#endif  // LLM_ACTION_INTERFACES__SRV__DETAIL__SOLUTION_IMAGE__BUILDER_HPP_
