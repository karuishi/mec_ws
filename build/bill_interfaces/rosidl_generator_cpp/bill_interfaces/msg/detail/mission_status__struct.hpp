// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bill_interfaces:msg/MissionStatus.idl
// generated code does not contain a copyright notice

#ifndef BILL_INTERFACES__MSG__DETAIL__MISSION_STATUS__STRUCT_HPP_
#define BILL_INTERFACES__MSG__DETAIL__MISSION_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__bill_interfaces__msg__MissionStatus __attribute__((deprecated))
#else
# define DEPRECATED__bill_interfaces__msg__MissionStatus __declspec(deprecated)
#endif

namespace bill_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MissionStatus_
{
  using Type = MissionStatus_<ContainerAllocator>;

  explicit MissionStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = "";
    }
  }

  explicit MissionStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : status(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = "";
    }
  }

  // field types and members
  using _status_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _status_type status;

  // setters for named parameter idiom
  Type & set__status(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bill_interfaces::msg::MissionStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const bill_interfaces::msg::MissionStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bill_interfaces::msg::MissionStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bill_interfaces::msg::MissionStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bill_interfaces::msg::MissionStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bill_interfaces::msg::MissionStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bill_interfaces::msg::MissionStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bill_interfaces::msg::MissionStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bill_interfaces::msg::MissionStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bill_interfaces::msg::MissionStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bill_interfaces__msg__MissionStatus
    std::shared_ptr<bill_interfaces::msg::MissionStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bill_interfaces__msg__MissionStatus
    std::shared_ptr<bill_interfaces::msg::MissionStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MissionStatus_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const MissionStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MissionStatus_

// alias to use template instance with default allocator
using MissionStatus =
  bill_interfaces::msg::MissionStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bill_interfaces

#endif  // BILL_INTERFACES__MSG__DETAIL__MISSION_STATUS__STRUCT_HPP_
