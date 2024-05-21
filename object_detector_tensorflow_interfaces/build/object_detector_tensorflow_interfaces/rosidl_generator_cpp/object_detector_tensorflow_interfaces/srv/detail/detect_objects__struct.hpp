// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from object_detector_tensorflow_interfaces:srv/DetectObjects.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_DETECTOR_TENSORFLOW_INTERFACES__SRV__DETAIL__DETECT_OBJECTS__STRUCT_HPP_
#define OBJECT_DETECTOR_TENSORFLOW_INTERFACES__SRV__DETAIL__DETECT_OBJECTS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'image'
#include "sensor_msgs/msg/detail/image__struct.hpp"
// Member 'roi'
#include "sensor_msgs/msg/detail/region_of_interest__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__object_detector_tensorflow_interfaces__srv__DetectObjects_Request __attribute__((deprecated))
#else
# define DEPRECATED__object_detector_tensorflow_interfaces__srv__DetectObjects_Request __declspec(deprecated)
#endif

namespace object_detector_tensorflow_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct DetectObjects_Request_
{
  using Type = DetectObjects_Request_<ContainerAllocator>;

  explicit DetectObjects_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : image(_init),
    roi(_init)
  {
    (void)_init;
  }

  explicit DetectObjects_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : image(_alloc, _init),
    roi(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _image_type =
    sensor_msgs::msg::Image_<ContainerAllocator>;
  _image_type image;
  using _roi_type =
    sensor_msgs::msg::RegionOfInterest_<ContainerAllocator>;
  _roi_type roi;

  // setters for named parameter idiom
  Type & set__image(
    const sensor_msgs::msg::Image_<ContainerAllocator> & _arg)
  {
    this->image = _arg;
    return *this;
  }
  Type & set__roi(
    const sensor_msgs::msg::RegionOfInterest_<ContainerAllocator> & _arg)
  {
    this->roi = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    object_detector_tensorflow_interfaces::srv::DetectObjects_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const object_detector_tensorflow_interfaces::srv::DetectObjects_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<object_detector_tensorflow_interfaces::srv::DetectObjects_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<object_detector_tensorflow_interfaces::srv::DetectObjects_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      object_detector_tensorflow_interfaces::srv::DetectObjects_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<object_detector_tensorflow_interfaces::srv::DetectObjects_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      object_detector_tensorflow_interfaces::srv::DetectObjects_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<object_detector_tensorflow_interfaces::srv::DetectObjects_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<object_detector_tensorflow_interfaces::srv::DetectObjects_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<object_detector_tensorflow_interfaces::srv::DetectObjects_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__object_detector_tensorflow_interfaces__srv__DetectObjects_Request
    std::shared_ptr<object_detector_tensorflow_interfaces::srv::DetectObjects_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__object_detector_tensorflow_interfaces__srv__DetectObjects_Request
    std::shared_ptr<object_detector_tensorflow_interfaces::srv::DetectObjects_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DetectObjects_Request_ & other) const
  {
    if (this->image != other.image) {
      return false;
    }
    if (this->roi != other.roi) {
      return false;
    }
    return true;
  }
  bool operator!=(const DetectObjects_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DetectObjects_Request_

// alias to use template instance with default allocator
using DetectObjects_Request =
  object_detector_tensorflow_interfaces::srv::DetectObjects_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace object_detector_tensorflow_interfaces


// Include directives for member types
// Member 'detections'
#include "object_detector_tensorflow_interfaces/msg/detail/detections__struct.hpp"
// Member 'result_image'
// already included above
// #include "sensor_msgs/msg/detail/image__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__object_detector_tensorflow_interfaces__srv__DetectObjects_Response __attribute__((deprecated))
#else
# define DEPRECATED__object_detector_tensorflow_interfaces__srv__DetectObjects_Response __declspec(deprecated)
#endif

namespace object_detector_tensorflow_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct DetectObjects_Response_
{
  using Type = DetectObjects_Response_<ContainerAllocator>;

  explicit DetectObjects_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : detections(_init),
    result_image(_init)
  {
    (void)_init;
  }

  explicit DetectObjects_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : detections(_alloc, _init),
    result_image(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _detections_type =
    object_detector_tensorflow_interfaces::msg::Detections_<ContainerAllocator>;
  _detections_type detections;
  using _result_image_type =
    sensor_msgs::msg::Image_<ContainerAllocator>;
  _result_image_type result_image;

  // setters for named parameter idiom
  Type & set__detections(
    const object_detector_tensorflow_interfaces::msg::Detections_<ContainerAllocator> & _arg)
  {
    this->detections = _arg;
    return *this;
  }
  Type & set__result_image(
    const sensor_msgs::msg::Image_<ContainerAllocator> & _arg)
  {
    this->result_image = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    object_detector_tensorflow_interfaces::srv::DetectObjects_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const object_detector_tensorflow_interfaces::srv::DetectObjects_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<object_detector_tensorflow_interfaces::srv::DetectObjects_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<object_detector_tensorflow_interfaces::srv::DetectObjects_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      object_detector_tensorflow_interfaces::srv::DetectObjects_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<object_detector_tensorflow_interfaces::srv::DetectObjects_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      object_detector_tensorflow_interfaces::srv::DetectObjects_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<object_detector_tensorflow_interfaces::srv::DetectObjects_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<object_detector_tensorflow_interfaces::srv::DetectObjects_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<object_detector_tensorflow_interfaces::srv::DetectObjects_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__object_detector_tensorflow_interfaces__srv__DetectObjects_Response
    std::shared_ptr<object_detector_tensorflow_interfaces::srv::DetectObjects_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__object_detector_tensorflow_interfaces__srv__DetectObjects_Response
    std::shared_ptr<object_detector_tensorflow_interfaces::srv::DetectObjects_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DetectObjects_Response_ & other) const
  {
    if (this->detections != other.detections) {
      return false;
    }
    if (this->result_image != other.result_image) {
      return false;
    }
    return true;
  }
  bool operator!=(const DetectObjects_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DetectObjects_Response_

// alias to use template instance with default allocator
using DetectObjects_Response =
  object_detector_tensorflow_interfaces::srv::DetectObjects_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace object_detector_tensorflow_interfaces

namespace object_detector_tensorflow_interfaces
{

namespace srv
{

struct DetectObjects
{
  using Request = object_detector_tensorflow_interfaces::srv::DetectObjects_Request;
  using Response = object_detector_tensorflow_interfaces::srv::DetectObjects_Response;
};

}  // namespace srv

}  // namespace object_detector_tensorflow_interfaces

#endif  // OBJECT_DETECTOR_TENSORFLOW_INTERFACES__SRV__DETAIL__DETECT_OBJECTS__STRUCT_HPP_
