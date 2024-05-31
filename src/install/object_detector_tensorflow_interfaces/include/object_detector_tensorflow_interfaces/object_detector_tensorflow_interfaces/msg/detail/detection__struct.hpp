// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from object_detector_tensorflow_interfaces:msg/Detection.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_DETECTOR_TENSORFLOW_INTERFACES__MSG__DETAIL__DETECTION__STRUCT_HPP_
#define OBJECT_DETECTOR_TENSORFLOW_INTERFACES__MSG__DETAIL__DETECTION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'center'
#include "geometry_msgs/msg/detail/point__struct.hpp"
// Member 'bounding_box'
#include "sensor_msgs/msg/detail/region_of_interest__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__object_detector_tensorflow_interfaces__msg__Detection __attribute__((deprecated))
#else
# define DEPRECATED__object_detector_tensorflow_interfaces__msg__Detection __declspec(deprecated)
#endif

namespace object_detector_tensorflow_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Detection_
{
  using Type = Detection_<ContainerAllocator>;

  explicit Detection_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : center(_init),
    bounding_box(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->class_id = 0ul;
      this->class_name = "";
      this->probability = 0.0f;
    }
  }

  explicit Detection_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : class_name(_alloc),
    center(_alloc, _init),
    bounding_box(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->class_id = 0ul;
      this->class_name = "";
      this->probability = 0.0f;
    }
  }

  // field types and members
  using _class_id_type =
    uint32_t;
  _class_id_type class_id;
  using _class_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _class_name_type class_name;
  using _probability_type =
    float;
  _probability_type probability;
  using _center_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _center_type center;
  using _bounding_box_type =
    sensor_msgs::msg::RegionOfInterest_<ContainerAllocator>;
  _bounding_box_type bounding_box;

  // setters for named parameter idiom
  Type & set__class_id(
    const uint32_t & _arg)
  {
    this->class_id = _arg;
    return *this;
  }
  Type & set__class_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->class_name = _arg;
    return *this;
  }
  Type & set__probability(
    const float & _arg)
  {
    this->probability = _arg;
    return *this;
  }
  Type & set__center(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->center = _arg;
    return *this;
  }
  Type & set__bounding_box(
    const sensor_msgs::msg::RegionOfInterest_<ContainerAllocator> & _arg)
  {
    this->bounding_box = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    object_detector_tensorflow_interfaces::msg::Detection_<ContainerAllocator> *;
  using ConstRawPtr =
    const object_detector_tensorflow_interfaces::msg::Detection_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<object_detector_tensorflow_interfaces::msg::Detection_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<object_detector_tensorflow_interfaces::msg::Detection_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      object_detector_tensorflow_interfaces::msg::Detection_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<object_detector_tensorflow_interfaces::msg::Detection_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      object_detector_tensorflow_interfaces::msg::Detection_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<object_detector_tensorflow_interfaces::msg::Detection_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<object_detector_tensorflow_interfaces::msg::Detection_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<object_detector_tensorflow_interfaces::msg::Detection_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__object_detector_tensorflow_interfaces__msg__Detection
    std::shared_ptr<object_detector_tensorflow_interfaces::msg::Detection_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__object_detector_tensorflow_interfaces__msg__Detection
    std::shared_ptr<object_detector_tensorflow_interfaces::msg::Detection_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Detection_ & other) const
  {
    if (this->class_id != other.class_id) {
      return false;
    }
    if (this->class_name != other.class_name) {
      return false;
    }
    if (this->probability != other.probability) {
      return false;
    }
    if (this->center != other.center) {
      return false;
    }
    if (this->bounding_box != other.bounding_box) {
      return false;
    }
    return true;
  }
  bool operator!=(const Detection_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Detection_

// alias to use template instance with default allocator
using Detection =
  object_detector_tensorflow_interfaces::msg::Detection_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace object_detector_tensorflow_interfaces

#endif  // OBJECT_DETECTOR_TENSORFLOW_INTERFACES__MSG__DETAIL__DETECTION__STRUCT_HPP_
