// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from object_detector_tensorflow_interfaces:srv/DetectObjects.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_DETECTOR_TENSORFLOW_INTERFACES__SRV__DETAIL__DETECT_OBJECTS__BUILDER_HPP_
#define OBJECT_DETECTOR_TENSORFLOW_INTERFACES__SRV__DETAIL__DETECT_OBJECTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "object_detector_tensorflow_interfaces/srv/detail/detect_objects__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace object_detector_tensorflow_interfaces
{

namespace srv
{

namespace builder
{

class Init_DetectObjects_Request_roi
{
public:
  explicit Init_DetectObjects_Request_roi(::object_detector_tensorflow_interfaces::srv::DetectObjects_Request & msg)
  : msg_(msg)
  {}
  ::object_detector_tensorflow_interfaces::srv::DetectObjects_Request roi(::object_detector_tensorflow_interfaces::srv::DetectObjects_Request::_roi_type arg)
  {
    msg_.roi = std::move(arg);
    return std::move(msg_);
  }

private:
  ::object_detector_tensorflow_interfaces::srv::DetectObjects_Request msg_;
};

class Init_DetectObjects_Request_image
{
public:
  Init_DetectObjects_Request_image()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DetectObjects_Request_roi image(::object_detector_tensorflow_interfaces::srv::DetectObjects_Request::_image_type arg)
  {
    msg_.image = std::move(arg);
    return Init_DetectObjects_Request_roi(msg_);
  }

private:
  ::object_detector_tensorflow_interfaces::srv::DetectObjects_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::object_detector_tensorflow_interfaces::srv::DetectObjects_Request>()
{
  return object_detector_tensorflow_interfaces::srv::builder::Init_DetectObjects_Request_image();
}

}  // namespace object_detector_tensorflow_interfaces


namespace object_detector_tensorflow_interfaces
{

namespace srv
{

namespace builder
{

class Init_DetectObjects_Response_result_image
{
public:
  explicit Init_DetectObjects_Response_result_image(::object_detector_tensorflow_interfaces::srv::DetectObjects_Response & msg)
  : msg_(msg)
  {}
  ::object_detector_tensorflow_interfaces::srv::DetectObjects_Response result_image(::object_detector_tensorflow_interfaces::srv::DetectObjects_Response::_result_image_type arg)
  {
    msg_.result_image = std::move(arg);
    return std::move(msg_);
  }

private:
  ::object_detector_tensorflow_interfaces::srv::DetectObjects_Response msg_;
};

class Init_DetectObjects_Response_detections
{
public:
  Init_DetectObjects_Response_detections()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DetectObjects_Response_result_image detections(::object_detector_tensorflow_interfaces::srv::DetectObjects_Response::_detections_type arg)
  {
    msg_.detections = std::move(arg);
    return Init_DetectObjects_Response_result_image(msg_);
  }

private:
  ::object_detector_tensorflow_interfaces::srv::DetectObjects_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::object_detector_tensorflow_interfaces::srv::DetectObjects_Response>()
{
  return object_detector_tensorflow_interfaces::srv::builder::Init_DetectObjects_Response_detections();
}

}  // namespace object_detector_tensorflow_interfaces

#endif  // OBJECT_DETECTOR_TENSORFLOW_INTERFACES__SRV__DETAIL__DETECT_OBJECTS__BUILDER_HPP_
