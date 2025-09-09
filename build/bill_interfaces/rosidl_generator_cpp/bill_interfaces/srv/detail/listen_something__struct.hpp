// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bill_interfaces:srv/ListenSomething.idl
// generated code does not contain a copyright notice

#ifndef BILL_INTERFACES__SRV__DETAIL__LISTEN_SOMETHING__STRUCT_HPP_
#define BILL_INTERFACES__SRV__DETAIL__LISTEN_SOMETHING__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__bill_interfaces__srv__ListenSomething_Request __attribute__((deprecated))
#else
# define DEPRECATED__bill_interfaces__srv__ListenSomething_Request __declspec(deprecated)
#endif

namespace bill_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ListenSomething_Request_
{
  using Type = ListenSomething_Request_<ContainerAllocator>;

  explicit ListenSomething_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->default_text_listened = "";
    }
  }

  explicit ListenSomething_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : default_text_listened(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->default_text_listened = "";
    }
  }

  // field types and members
  using _default_text_listened_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _default_text_listened_type default_text_listened;

  // setters for named parameter idiom
  Type & set__default_text_listened(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->default_text_listened = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bill_interfaces::srv::ListenSomething_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const bill_interfaces::srv::ListenSomething_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bill_interfaces::srv::ListenSomething_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bill_interfaces::srv::ListenSomething_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bill_interfaces::srv::ListenSomething_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bill_interfaces::srv::ListenSomething_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bill_interfaces::srv::ListenSomething_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bill_interfaces::srv::ListenSomething_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bill_interfaces::srv::ListenSomething_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bill_interfaces::srv::ListenSomething_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bill_interfaces__srv__ListenSomething_Request
    std::shared_ptr<bill_interfaces::srv::ListenSomething_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bill_interfaces__srv__ListenSomething_Request
    std::shared_ptr<bill_interfaces::srv::ListenSomething_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ListenSomething_Request_ & other) const
  {
    if (this->default_text_listened != other.default_text_listened) {
      return false;
    }
    return true;
  }
  bool operator!=(const ListenSomething_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ListenSomething_Request_

// alias to use template instance with default allocator
using ListenSomething_Request =
  bill_interfaces::srv::ListenSomething_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace bill_interfaces


#ifndef _WIN32
# define DEPRECATED__bill_interfaces__srv__ListenSomething_Response __attribute__((deprecated))
#else
# define DEPRECATED__bill_interfaces__srv__ListenSomething_Response __declspec(deprecated)
#endif

namespace bill_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ListenSomething_Response_
{
  using Type = ListenSomething_Response_<ContainerAllocator>;

  explicit ListenSomething_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->text_listened = "";
    }
  }

  explicit ListenSomething_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : text_listened(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->text_listened = "";
    }
  }

  // field types and members
  using _text_listened_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _text_listened_type text_listened;

  // setters for named parameter idiom
  Type & set__text_listened(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->text_listened = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bill_interfaces::srv::ListenSomething_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const bill_interfaces::srv::ListenSomething_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bill_interfaces::srv::ListenSomething_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bill_interfaces::srv::ListenSomething_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bill_interfaces::srv::ListenSomething_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bill_interfaces::srv::ListenSomething_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bill_interfaces::srv::ListenSomething_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bill_interfaces::srv::ListenSomething_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bill_interfaces::srv::ListenSomething_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bill_interfaces::srv::ListenSomething_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bill_interfaces__srv__ListenSomething_Response
    std::shared_ptr<bill_interfaces::srv::ListenSomething_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bill_interfaces__srv__ListenSomething_Response
    std::shared_ptr<bill_interfaces::srv::ListenSomething_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ListenSomething_Response_ & other) const
  {
    if (this->text_listened != other.text_listened) {
      return false;
    }
    return true;
  }
  bool operator!=(const ListenSomething_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ListenSomething_Response_

// alias to use template instance with default allocator
using ListenSomething_Response =
  bill_interfaces::srv::ListenSomething_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace bill_interfaces

namespace bill_interfaces
{

namespace srv
{

struct ListenSomething
{
  using Request = bill_interfaces::srv::ListenSomething_Request;
  using Response = bill_interfaces::srv::ListenSomething_Response;
};

}  // namespace srv

}  // namespace bill_interfaces

#endif  // BILL_INTERFACES__SRV__DETAIL__LISTEN_SOMETHING__STRUCT_HPP_
