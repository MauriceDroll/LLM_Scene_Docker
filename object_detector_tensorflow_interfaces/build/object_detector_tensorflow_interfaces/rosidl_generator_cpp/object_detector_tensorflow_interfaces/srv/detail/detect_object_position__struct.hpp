// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from object_detector_tensorflow_interfaces:srv/DetectObjectPosition.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_DETECTOR_TENSORFLOW_INTERFACES__SRV__DETAIL__DETECT_OBJECT_POSITION__STRUCT_HPP_
#define OBJECT_DETECTOR_TENSORFLOW_INTERFACES__SRV__DETAIL__DETECT_OBJECT_POSITION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Request __attribute__((deprecated))
#else
# define DEPRECATED__object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Request __declspec(deprecated)
#endif

namespace object_detector_tensorflow_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct DetectObjectPosition_Request_
{
  using Type = DetectObjectPosition_Request_<ContainerAllocator>;

  explicit DetectObjectPosition_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->class_name = "";
      this->base_frame = "";
      this->camera_type = "";
    }
  }

  explicit DetectObjectPosition_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : class_name(_alloc),
    base_frame(_alloc),
    camera_type(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->class_name = "";
      this->base_frame = "";
      this->camera_type = "";
    }
  }

  // field types and members
  using _class_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _class_name_type class_name;
  using _base_frame_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _base_frame_type base_frame;
  using _camera_type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _camera_type_type camera_type;

  // setters for named parameter idiom
  Type & set__class_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->class_name = _arg;
    return *this;
  }
  Type & set__base_frame(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->base_frame = _arg;
    return *this;
  }
  Type & set__camera_type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->camera_type = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    object_detector_tensorflow_interfaces::srv::DetectObjectPosition_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const object_detector_tensorflow_interfaces::srv::DetectObjectPosition_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<object_detector_tensorflow_interfaces::srv::DetectObjectPosition_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<object_detector_tensorflow_interfaces::srv::DetectObjectPosition_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      object_detector_tensorflow_interfaces::srv::DetectObjectPosition_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<object_detector_tensorflow_interfaces::srv::DetectObjectPosition_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      object_detector_tensorflow_interfaces::srv::DetectObjectPosition_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<object_detector_tensorflow_interfaces::srv::DetectObjectPosition_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<object_detector_tensorflow_interfaces::srv::DetectObjectPosition_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<object_detector_tensorflow_interfaces::srv::DetectObjectPosition_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Request
    std::shared_ptr<object_detector_tensorflow_interfaces::srv::DetectObjectPosition_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Request
    std::shared_ptr<object_detector_tensorflow_interfaces::srv::DetectObjectPosition_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DetectObjectPosition_Request_ & other) const
  {
    if (this->class_name != other.class_name) {
      return false;
    }
    if (this->base_frame != other.base_frame) {
      return false;
    }
    if (this->camera_type != other.camera_type) {
      return false;
    }
    return true;
  }
  bool operator!=(const DetectObjectPosition_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DetectObjectPosition_Request_

// alias to use template instance with default allocator
using DetectObjectPosition_Request =
  object_detector_tensorflow_interfaces::srv::DetectObjectPosition_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace object_detector_tensorflow_interfaces


// Include directives for member types
// Member 'point'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Response __attribute__((deprecated))
#else
# define DEPRECATED__object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Response __declspec(deprecated)
#endif

namespace object_detector_tensorflow_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct DetectObjectPosition_Response_
{
  using Type = DetectObjectPosition_Response_<ContainerAllocator>;

  explicit DetectObjectPosition_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : point(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->probability = 0.0f;
      this->class_name = "";
    }
  }

  explicit DetectObjectPosition_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : point(_alloc, _init),
    class_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->probability = 0.0f;
      this->class_name = "";
    }
  }

  // field types and members
  using _point_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _point_type point;
  using _probability_type =
    float;
  _probability_type probability;
  using _class_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _class_name_type class_name;

  // setters for named parameter idiom
  Type & set__point(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->point = _arg;
    return *this;
  }
  Type & set__probability(
    const float & _arg)
  {
    this->probability = _arg;
    return *this;
  }
  Type & set__class_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->class_name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    object_detector_tensorflow_interfaces::srv::DetectObjectPosition_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const object_detector_tensorflow_interfaces::srv::DetectObjectPosition_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<object_detector_tensorflow_interfaces::srv::DetectObjectPosition_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<object_detector_tensorflow_interfaces::srv::DetectObjectPosition_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      object_detector_tensorflow_interfaces::srv::DetectObjectPosition_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<object_detector_tensorflow_interfaces::srv::DetectObjectPosition_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      object_detector_tensorflow_interfaces::srv::DetectObjectPosition_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<object_detector_tensorflow_interfaces::srv::DetectObjectPosition_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<object_detector_tensorflow_interfaces::srv::DetectObjectPosition_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<object_detector_tensorflow_interfaces::srv::DetectObjectPosition_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Response
    std::shared_ptr<object_detector_tensorflow_interfaces::srv::DetectObjectPosition_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__object_detector_tensorflow_interfaces__srv__DetectObjectPosition_Response
    std::shared_ptr<object_detector_tensorflow_interfaces::srv::DetectObjectPosition_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DetectObjectPosition_Response_ & other) const
  {
    if (this->point != other.point) {
      return false;
    }
    if (this->probability != other.probability) {
      return false;
    }
    if (this->class_name != other.class_name) {
      return false;
    }
    return true;
  }
  bool operator!=(const DetectObjectPosition_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DetectObjectPosition_Response_

// alias to use template instance with default allocator
using DetectObjectPosition_Response =
  object_detector_tensorflow_interfaces::srv::DetectObjectPosition_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace object_detector_tensorflow_interfaces

namespace object_detector_tensorflow_interfaces
{

namespace srv
{

struct DetectObjectPosition
{
  using Request = object_detector_tensorflow_interfaces::srv::DetectObjectPosition_Request;
  using Response = object_detector_tensorflow_interfaces::srv::DetectObjectPosition_Response;
};

}  // namespace srv

}  // namespace object_detector_tensorflow_interfaces

#endif  // OBJECT_DETECTOR_TENSORFLOW_INTERFACES__SRV__DETAIL__DETECT_OBJECT_POSITION__STRUCT_HPP_
