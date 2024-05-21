// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from object_detector_tensorflow_interfaces:msg/Detections.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_DETECTOR_TENSORFLOW_INTERFACES__MSG__DETAIL__DETECTIONS__BUILDER_HPP_
#define OBJECT_DETECTOR_TENSORFLOW_INTERFACES__MSG__DETAIL__DETECTIONS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "object_detector_tensorflow_interfaces/msg/detail/detections__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace object_detector_tensorflow_interfaces
{

namespace msg
{

namespace builder
{

class Init_Detections_detections
{
public:
  explicit Init_Detections_detections(::object_detector_tensorflow_interfaces::msg::Detections & msg)
  : msg_(msg)
  {}
  ::object_detector_tensorflow_interfaces::msg::Detections detections(::object_detector_tensorflow_interfaces::msg::Detections::_detections_type arg)
  {
    msg_.detections = std::move(arg);
    return std::move(msg_);
  }

private:
  ::object_detector_tensorflow_interfaces::msg::Detections msg_;
};

class Init_Detections_image_header
{
public:
  explicit Init_Detections_image_header(::object_detector_tensorflow_interfaces::msg::Detections & msg)
  : msg_(msg)
  {}
  Init_Detections_detections image_header(::object_detector_tensorflow_interfaces::msg::Detections::_image_header_type arg)
  {
    msg_.image_header = std::move(arg);
    return Init_Detections_detections(msg_);
  }

private:
  ::object_detector_tensorflow_interfaces::msg::Detections msg_;
};

class Init_Detections_header
{
public:
  Init_Detections_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Detections_image_header header(::object_detector_tensorflow_interfaces::msg::Detections::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Detections_image_header(msg_);
  }

private:
  ::object_detector_tensorflow_interfaces::msg::Detections msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::object_detector_tensorflow_interfaces::msg::Detections>()
{
  return object_detector_tensorflow_interfaces::msg::builder::Init_Detections_header();
}

}  // namespace object_detector_tensorflow_interfaces

#endif  // OBJECT_DETECTOR_TENSORFLOW_INTERFACES__MSG__DETAIL__DETECTIONS__BUILDER_HPP_
