// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from object_detector_tensorflow_interfaces:msg/Detections.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_DETECTOR_TENSORFLOW_INTERFACES__MSG__DETAIL__DETECTIONS__STRUCT_HPP_
#define OBJECT_DETECTOR_TENSORFLOW_INTERFACES__MSG__DETAIL__DETECTIONS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
// Member 'image_header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'detections'
#include "object_detector_tensorflow_interfaces/msg/detail/detection__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__object_detector_tensorflow_interfaces__msg__Detections __attribute__((deprecated))
#else
# define DEPRECATED__object_detector_tensorflow_interfaces__msg__Detections __declspec(deprecated)
#endif

namespace object_detector_tensorflow_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Detections_
{
  using Type = Detections_<ContainerAllocator>;

  explicit Detections_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    image_header(_init)
  {
    (void)_init;
  }

  explicit Detections_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    image_header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _image_header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _image_header_type image_header;
  using _detections_type =
    std::vector<object_detector_tensorflow_interfaces::msg::Detection_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<object_detector_tensorflow_interfaces::msg::Detection_<ContainerAllocator>>>;
  _detections_type detections;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__image_header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->image_header = _arg;
    return *this;
  }
  Type & set__detections(
    const std::vector<object_detector_tensorflow_interfaces::msg::Detection_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<object_detector_tensorflow_interfaces::msg::Detection_<ContainerAllocator>>> & _arg)
  {
    this->detections = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    object_detector_tensorflow_interfaces::msg::Detections_<ContainerAllocator> *;
  using ConstRawPtr =
    const object_detector_tensorflow_interfaces::msg::Detections_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<object_detector_tensorflow_interfaces::msg::Detections_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<object_detector_tensorflow_interfaces::msg::Detections_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      object_detector_tensorflow_interfaces::msg::Detections_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<object_detector_tensorflow_interfaces::msg::Detections_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      object_detector_tensorflow_interfaces::msg::Detections_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<object_detector_tensorflow_interfaces::msg::Detections_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<object_detector_tensorflow_interfaces::msg::Detections_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<object_detector_tensorflow_interfaces::msg::Detections_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__object_detector_tensorflow_interfaces__msg__Detections
    std::shared_ptr<object_detector_tensorflow_interfaces::msg::Detections_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__object_detector_tensorflow_interfaces__msg__Detections
    std::shared_ptr<object_detector_tensorflow_interfaces::msg::Detections_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Detections_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->image_header != other.image_header) {
      return false;
    }
    if (this->detections != other.detections) {
      return false;
    }
    return true;
  }
  bool operator!=(const Detections_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Detections_

// alias to use template instance with default allocator
using Detections =
  object_detector_tensorflow_interfaces::msg::Detections_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace object_detector_tensorflow_interfaces

#endif  // OBJECT_DETECTOR_TENSORFLOW_INTERFACES__MSG__DETAIL__DETECTIONS__STRUCT_HPP_
