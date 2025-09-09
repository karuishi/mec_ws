// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bill_interfaces:srv/GetTrained.idl
// generated code does not contain a copyright notice

#ifndef BILL_INTERFACES__SRV__DETAIL__GET_TRAINED__STRUCT_HPP_
#define BILL_INTERFACES__SRV__DETAIL__GET_TRAINED__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__bill_interfaces__srv__GetTrained_Request __attribute__((deprecated))
#else
# define DEPRECATED__bill_interfaces__srv__GetTrained_Request __declspec(deprecated)
#endif

namespace bill_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetTrained_Request_
{
  using Type = GetTrained_Request_<ContainerAllocator>;

  explicit GetTrained_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
    }
  }

  explicit GetTrained_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bill_interfaces::srv::GetTrained_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const bill_interfaces::srv::GetTrained_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bill_interfaces::srv::GetTrained_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bill_interfaces::srv::GetTrained_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bill_interfaces::srv::GetTrained_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bill_interfaces::srv::GetTrained_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bill_interfaces::srv::GetTrained_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bill_interfaces::srv::GetTrained_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bill_interfaces::srv::GetTrained_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bill_interfaces::srv::GetTrained_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bill_interfaces__srv__GetTrained_Request
    std::shared_ptr<bill_interfaces::srv::GetTrained_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bill_interfaces__srv__GetTrained_Request
    std::shared_ptr<bill_interfaces::srv::GetTrained_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetTrained_Request_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetTrained_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetTrained_Request_

// alias to use template instance with default allocator
using GetTrained_Request =
  bill_interfaces::srv::GetTrained_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace bill_interfaces


#ifndef _WIN32
# define DEPRECATED__bill_interfaces__srv__GetTrained_Response __attribute__((deprecated))
#else
# define DEPRECATED__bill_interfaces__srv__GetTrained_Response __declspec(deprecated)
#endif

namespace bill_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetTrained_Response_
{
  using Type = GetTrained_Response_<ContainerAllocator>;

  explicit GetTrained_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->trained = false;
    }
  }

  explicit GetTrained_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->trained = false;
    }
  }

  // field types and members
  using _trained_type =
    bool;
  _trained_type trained;

  // setters for named parameter idiom
  Type & set__trained(
    const bool & _arg)
  {
    this->trained = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bill_interfaces::srv::GetTrained_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const bill_interfaces::srv::GetTrained_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bill_interfaces::srv::GetTrained_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bill_interfaces::srv::GetTrained_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bill_interfaces::srv::GetTrained_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bill_interfaces::srv::GetTrained_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bill_interfaces::srv::GetTrained_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bill_interfaces::srv::GetTrained_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bill_interfaces::srv::GetTrained_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bill_interfaces::srv::GetTrained_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bill_interfaces__srv__GetTrained_Response
    std::shared_ptr<bill_interfaces::srv::GetTrained_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bill_interfaces__srv__GetTrained_Response
    std::shared_ptr<bill_interfaces::srv::GetTrained_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetTrained_Response_ & other) const
  {
    if (this->trained != other.trained) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetTrained_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetTrained_Response_

// alias to use template instance with default allocator
using GetTrained_Response =
  bill_interfaces::srv::GetTrained_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace bill_interfaces

namespace bill_interfaces
{

namespace srv
{

struct GetTrained
{
  using Request = bill_interfaces::srv::GetTrained_Request;
  using Response = bill_interfaces::srv::GetTrained_Response;
};

}  // namespace srv

}  // namespace bill_interfaces

#endif  // BILL_INTERFACES__SRV__DETAIL__GET_TRAINED__STRUCT_HPP_
