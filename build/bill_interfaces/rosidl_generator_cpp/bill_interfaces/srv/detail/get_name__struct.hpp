// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bill_interfaces:srv/GetName.idl
// generated code does not contain a copyright notice

#ifndef BILL_INTERFACES__SRV__DETAIL__GET_NAME__STRUCT_HPP_
#define BILL_INTERFACES__SRV__DETAIL__GET_NAME__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__bill_interfaces__srv__GetName_Request __attribute__((deprecated))
#else
# define DEPRECATED__bill_interfaces__srv__GetName_Request __declspec(deprecated)
#endif

namespace bill_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetName_Request_
{
  using Type = GetName_Request_<ContainerAllocator>;

  explicit GetName_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->default_name = "";
    }
  }

  explicit GetName_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : default_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->default_name = "";
    }
  }

  // field types and members
  using _default_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _default_name_type default_name;

  // setters for named parameter idiom
  Type & set__default_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->default_name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bill_interfaces::srv::GetName_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const bill_interfaces::srv::GetName_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bill_interfaces::srv::GetName_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bill_interfaces::srv::GetName_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bill_interfaces::srv::GetName_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bill_interfaces::srv::GetName_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bill_interfaces::srv::GetName_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bill_interfaces::srv::GetName_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bill_interfaces::srv::GetName_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bill_interfaces::srv::GetName_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bill_interfaces__srv__GetName_Request
    std::shared_ptr<bill_interfaces::srv::GetName_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bill_interfaces__srv__GetName_Request
    std::shared_ptr<bill_interfaces::srv::GetName_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetName_Request_ & other) const
  {
    if (this->default_name != other.default_name) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetName_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetName_Request_

// alias to use template instance with default allocator
using GetName_Request =
  bill_interfaces::srv::GetName_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace bill_interfaces


#ifndef _WIN32
# define DEPRECATED__bill_interfaces__srv__GetName_Response __attribute__((deprecated))
#else
# define DEPRECATED__bill_interfaces__srv__GetName_Response __declspec(deprecated)
#endif

namespace bill_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetName_Response_
{
  using Type = GetName_Response_<ContainerAllocator>;

  explicit GetName_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name_listened = "";
    }
  }

  explicit GetName_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name_listened(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name_listened = "";
    }
  }

  // field types and members
  using _name_listened_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_listened_type name_listened;

  // setters for named parameter idiom
  Type & set__name_listened(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name_listened = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bill_interfaces::srv::GetName_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const bill_interfaces::srv::GetName_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bill_interfaces::srv::GetName_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bill_interfaces::srv::GetName_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bill_interfaces::srv::GetName_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bill_interfaces::srv::GetName_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bill_interfaces::srv::GetName_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bill_interfaces::srv::GetName_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bill_interfaces::srv::GetName_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bill_interfaces::srv::GetName_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bill_interfaces__srv__GetName_Response
    std::shared_ptr<bill_interfaces::srv::GetName_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bill_interfaces__srv__GetName_Response
    std::shared_ptr<bill_interfaces::srv::GetName_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetName_Response_ & other) const
  {
    if (this->name_listened != other.name_listened) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetName_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetName_Response_

// alias to use template instance with default allocator
using GetName_Response =
  bill_interfaces::srv::GetName_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace bill_interfaces

namespace bill_interfaces
{

namespace srv
{

struct GetName
{
  using Request = bill_interfaces::srv::GetName_Request;
  using Response = bill_interfaces::srv::GetName_Response;
};

}  // namespace srv

}  // namespace bill_interfaces

#endif  // BILL_INTERFACES__SRV__DETAIL__GET_NAME__STRUCT_HPP_
