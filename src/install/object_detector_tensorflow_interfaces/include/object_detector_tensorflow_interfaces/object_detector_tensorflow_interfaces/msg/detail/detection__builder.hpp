// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from object_detector_tensorflow_interfaces:msg/Detection.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_DETECTOR_TENSORFLOW_INTERFACES__MSG__DETAIL__DETECTION__BUILDER_HPP_
#define OBJECT_DETECTOR_TENSORFLOW_INTERFACES__MSG__DETAIL__DETECTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "object_detector_tensorflow_interfaces/msg/detail/detection__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace object_detector_tensorflow_interfaces
{

namespace msg
{

namespace builder
{

class Init_Detection_bounding_box
{
public:
  explicit Init_Detection_bounding_box(::object_detector_tensorflow_interfaces::msg::Detection & msg)
  : msg_(msg)
  {}
  ::object_detector_tensorflow_interfaces::msg::Detection bounding_box(::object_detector_tensorflow_interfaces::msg::Detection::_bounding_box_type arg)
  {
    msg_.bounding_box = std::move(arg);
    return std::move(msg_);
  }

private:
  ::object_detector_tensorflow_interfaces::msg::Detection msg_;
};

class Init_Detection_center
{
public:
  explicit Init_Detection_center(::object_detector_tensorflow_interfaces::msg::Detection & msg)
  : msg_(msg)
  {}
  Init_Detection_bounding_box center(::object_detector_tensorflow_interfaces::msg::Detection::_center_type arg)
  {
    msg_.center = std::move(arg);
    return Init_Detection_bounding_box(msg_);
  }

private:
  ::object_detector_tensorflow_interfaces::msg::Detection msg_;
};

class Init_Detection_probability
{
public:
  explicit Init_Detection_probability(::object_detector_tensorflow_interfaces::msg::Detection & msg)
  : msg_(msg)
  {}
  Init_Detection_center probability(::object_detector_tensorflow_interfaces::msg::Detection::_probability_type arg)
  {
    msg_.probability = std::move(arg);
    return Init_Detection_center(msg_);
  }

private:
  ::object_detector_tensorflow_interfaces::msg::Detection msg_;
};

class Init_Detection_class_name
{
public:
  explicit Init_Detection_class_name(::object_detector_tensorflow_interfaces::msg::Detection & msg)
  : msg_(msg)
  {}
  Init_Detection_probability class_name(::object_detector_tensorflow_interfaces::msg::Detection::_class_name_type arg)
  {
    msg_.class_name = std::move(arg);
    return Init_Detection_probability(msg_);
  }

private:
  ::object_detector_tensorflow_interfaces::msg::Detection msg_;
};

class Init_Detection_class_id
{
public:
  Init_Detection_class_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Detection_class_name class_id(::object_detector_tensorflow_interfaces::msg::Detection::_class_id_type arg)
  {
    msg_.class_id = std::move(arg);
    return Init_Detection_class_name(msg_);
  }

private:
  ::object_detector_tensorflow_interfaces::msg::Detection msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::object_detector_tensorflow_interfaces::msg::Detection>()
{
  return object_detector_tensorflow_interfaces::msg::builder::Init_Detection_class_id();
}

}  // namespace object_detector_tensorflow_interfaces

#endif  // OBJECT_DETECTOR_TENSORFLOW_INTERFACES__MSG__DETAIL__DETECTION__BUILDER_HPP_
