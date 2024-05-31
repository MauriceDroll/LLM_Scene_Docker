// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from object_detector_tensorflow_interfaces:srv/DetectObjectPosition.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_DETECTOR_TENSORFLOW_INTERFACES__SRV__DETAIL__DETECT_OBJECT_POSITION__BUILDER_HPP_
#define OBJECT_DETECTOR_TENSORFLOW_INTERFACES__SRV__DETAIL__DETECT_OBJECT_POSITION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "object_detector_tensorflow_interfaces/srv/detail/detect_object_position__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace object_detector_tensorflow_interfaces
{

namespace srv
{

namespace builder
{

class Init_DetectObjectPosition_Request_camera_type
{
public:
  explicit Init_DetectObjectPosition_Request_camera_type(::object_detector_tensorflow_interfaces::srv::DetectObjectPosition_Request & msg)
  : msg_(msg)
  {}
  ::object_detector_tensorflow_interfaces::srv::DetectObjectPosition_Request camera_type(::object_detector_tensorflow_interfaces::srv::DetectObjectPosition_Request::_camera_type_type arg)
  {
    msg_.camera_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::object_detector_tensorflow_interfaces::srv::DetectObjectPosition_Request msg_;
};

class Init_DetectObjectPosition_Request_base_frame
{
public:
  explicit Init_DetectObjectPosition_Request_base_frame(::object_detector_tensorflow_interfaces::srv::DetectObjectPosition_Request & msg)
  : msg_(msg)
  {}
  Init_DetectObjectPosition_Request_camera_type base_frame(::object_detector_tensorflow_interfaces::srv::DetectObjectPosition_Request::_base_frame_type arg)
  {
    msg_.base_frame = std::move(arg);
    return Init_DetectObjectPosition_Request_camera_type(msg_);
  }

private:
  ::object_detector_tensorflow_interfaces::srv::DetectObjectPosition_Request msg_;
};

class Init_DetectObjectPosition_Request_class_name
{
public:
  Init_DetectObjectPosition_Request_class_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DetectObjectPosition_Request_base_frame class_name(::object_detector_tensorflow_interfaces::srv::DetectObjectPosition_Request::_class_name_type arg)
  {
    msg_.class_name = std::move(arg);
    return Init_DetectObjectPosition_Request_base_frame(msg_);
  }

private:
  ::object_detector_tensorflow_interfaces::srv::DetectObjectPosition_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::object_detector_tensorflow_interfaces::srv::DetectObjectPosition_Request>()
{
  return object_detector_tensorflow_interfaces::srv::builder::Init_DetectObjectPosition_Request_class_name();
}

}  // namespace object_detector_tensorflow_interfaces


namespace object_detector_tensorflow_interfaces
{

namespace srv
{

namespace builder
{

class Init_DetectObjectPosition_Response_class_name
{
public:
  explicit Init_DetectObjectPosition_Response_class_name(::object_detector_tensorflow_interfaces::srv::DetectObjectPosition_Response & msg)
  : msg_(msg)
  {}
  ::object_detector_tensorflow_interfaces::srv::DetectObjectPosition_Response class_name(::object_detector_tensorflow_interfaces::srv::DetectObjectPosition_Response::_class_name_type arg)
  {
    msg_.class_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::object_detector_tensorflow_interfaces::srv::DetectObjectPosition_Response msg_;
};

class Init_DetectObjectPosition_Response_probability
{
public:
  explicit Init_DetectObjectPosition_Response_probability(::object_detector_tensorflow_interfaces::srv::DetectObjectPosition_Response & msg)
  : msg_(msg)
  {}
  Init_DetectObjectPosition_Response_class_name probability(::object_detector_tensorflow_interfaces::srv::DetectObjectPosition_Response::_probability_type arg)
  {
    msg_.probability = std::move(arg);
    return Init_DetectObjectPosition_Response_class_name(msg_);
  }

private:
  ::object_detector_tensorflow_interfaces::srv::DetectObjectPosition_Response msg_;
};

class Init_DetectObjectPosition_Response_point
{
public:
  Init_DetectObjectPosition_Response_point()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DetectObjectPosition_Response_probability point(::object_detector_tensorflow_interfaces::srv::DetectObjectPosition_Response::_point_type arg)
  {
    msg_.point = std::move(arg);
    return Init_DetectObjectPosition_Response_probability(msg_);
  }

private:
  ::object_detector_tensorflow_interfaces::srv::DetectObjectPosition_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::object_detector_tensorflow_interfaces::srv::DetectObjectPosition_Response>()
{
  return object_detector_tensorflow_interfaces::srv::builder::Init_DetectObjectPosition_Response_point();
}

}  // namespace object_detector_tensorflow_interfaces

#endif  // OBJECT_DETECTOR_TENSORFLOW_INTERFACES__SRV__DETAIL__DETECT_OBJECT_POSITION__BUILDER_HPP_
