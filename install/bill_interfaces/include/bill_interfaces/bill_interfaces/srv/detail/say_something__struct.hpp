// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bill_interfaces:srv/SaySomething.idl
// generated code does not contain a copyright notice

#ifndef BILL_INTERFACES__SRV__DETAIL__SAY_SOMETHING__STRUCT_HPP_
#define BILL_INTERFACES__SRV__DETAIL__SAY_SOMETHING__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__bill_interfaces__srv__SaySomething_Request __attribute__((deprecated))
#else
# define DEPRECATED__bill_interfaces__srv__SaySomething_Request __declspec(deprecated)
#endif

namespace bill_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SaySomething_Request_
{
  using Type = SaySomething_Request_<ContainerAllocator>;

  explicit SaySomething_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->something = "";
    }
  }

  explicit SaySomething_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : something(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->something = "";
    }
  }

  // field types and members
  using _something_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _something_type something;

  // setters for named parameter idiom
  Type & set__something(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->something = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bill_interfaces::srv::SaySomething_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const bill_interfaces::srv::SaySomething_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bill_interfaces::srv::SaySomething_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bill_interfaces::srv::SaySomething_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bill_interfaces::srv::SaySomething_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bill_interfaces::srv::SaySomething_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bill_interfaces::srv::SaySomething_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bill_interfaces::srv::SaySomething_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bill_interfaces::srv::SaySomething_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bill_interfaces::srv::SaySomething_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bill_interfaces__srv__SaySomething_Request
    std::shared_ptr<bill_interfaces::srv::SaySomething_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bill_interfaces__srv__SaySomething_Request
    std::shared_ptr<bill_interfaces::srv::SaySomething_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SaySomething_Request_ & other) const
  {
    if (this->something != other.something) {
      return false;
    }
    return true;
  }
  bool operator!=(const SaySomething_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SaySomething_Request_

// alias to use template instance with default allocator
using SaySomething_Request =
  bill_interfaces::srv::SaySomething_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace bill_interfaces


#ifndef _WIN32
# define DEPRECATED__bill_interfaces__srv__SaySomething_Response __attribute__((deprecated))
#else
# define DEPRECATED__bill_interfaces__srv__SaySomething_Response __declspec(deprecated)
#endif

namespace bill_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SaySomething_Response_
{
  using Type = SaySomething_Response_<ContainerAllocator>;

  explicit SaySomething_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->said = false;
    }
  }

  explicit SaySomething_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->said = false;
    }
  }

  // field types and members
  using _said_type =
    bool;
  _said_type said;

  // setters for named parameter idiom
  Type & set__said(
    const bool & _arg)
  {
    this->said = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bill_interfaces::srv::SaySomething_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const bill_interfaces::srv::SaySomething_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bill_interfaces::srv::SaySomething_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bill_interfaces::srv::SaySomething_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bill_interfaces::srv::SaySomething_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bill_interfaces::srv::SaySomething_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bill_interfaces::srv::SaySomething_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bill_interfaces::srv::SaySomething_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bill_interfaces::srv::SaySomething_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bill_interfaces::srv::SaySomething_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bill_interfaces__srv__SaySomething_Response
    std::shared_ptr<bill_interfaces::srv::SaySomething_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bill_interfaces__srv__SaySomething_Response
    std::shared_ptr<bill_interfaces::srv::SaySomething_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SaySomething_Response_ & other) const
  {
    if (this->said != other.said) {
      return false;
    }
    return true;
  }
  bool operator!=(const SaySomething_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SaySomething_Response_

// alias to use template instance with default allocator
using SaySomething_Response =
  bill_interfaces::srv::SaySomething_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace bill_interfaces

namespace bill_interfaces
{

namespace srv
{

struct SaySomething
{
  using Request = bill_interfaces::srv::SaySomething_Request;
  using Response = bill_interfaces::srv::SaySomething_Response;
};

}  // namespace srv

}  // namespace bill_interfaces

#endif  // BILL_INTERFACES__SRV__DETAIL__SAY_SOMETHING__STRUCT_HPP_
