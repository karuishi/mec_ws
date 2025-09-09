// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bill_interfaces:srv/SearchFor.idl
// generated code does not contain a copyright notice

#ifndef BILL_INTERFACES__SRV__DETAIL__SEARCH_FOR__STRUCT_HPP_
#define BILL_INTERFACES__SRV__DETAIL__SEARCH_FOR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__bill_interfaces__srv__SearchFor_Request __attribute__((deprecated))
#else
# define DEPRECATED__bill_interfaces__srv__SearchFor_Request __declspec(deprecated)
#endif

namespace bill_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SearchFor_Request_
{
  using Type = SearchFor_Request_<ContainerAllocator>;

  explicit SearchFor_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
    }
  }

  explicit SearchFor_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    bill_interfaces::srv::SearchFor_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const bill_interfaces::srv::SearchFor_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bill_interfaces::srv::SearchFor_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bill_interfaces::srv::SearchFor_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bill_interfaces::srv::SearchFor_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bill_interfaces::srv::SearchFor_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bill_interfaces::srv::SearchFor_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bill_interfaces::srv::SearchFor_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bill_interfaces::srv::SearchFor_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bill_interfaces::srv::SearchFor_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bill_interfaces__srv__SearchFor_Request
    std::shared_ptr<bill_interfaces::srv::SearchFor_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bill_interfaces__srv__SearchFor_Request
    std::shared_ptr<bill_interfaces::srv::SearchFor_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SearchFor_Request_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    return true;
  }
  bool operator!=(const SearchFor_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SearchFor_Request_

// alias to use template instance with default allocator
using SearchFor_Request =
  bill_interfaces::srv::SearchFor_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace bill_interfaces


#ifndef _WIN32
# define DEPRECATED__bill_interfaces__srv__SearchFor_Response __attribute__((deprecated))
#else
# define DEPRECATED__bill_interfaces__srv__SearchFor_Response __declspec(deprecated)
#endif

namespace bill_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SearchFor_Response_
{
  using Type = SearchFor_Response_<ContainerAllocator>;

  explicit SearchFor_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->found = false;
    }
  }

  explicit SearchFor_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->found = false;
    }
  }

  // field types and members
  using _found_type =
    bool;
  _found_type found;

  // setters for named parameter idiom
  Type & set__found(
    const bool & _arg)
  {
    this->found = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bill_interfaces::srv::SearchFor_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const bill_interfaces::srv::SearchFor_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bill_interfaces::srv::SearchFor_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bill_interfaces::srv::SearchFor_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bill_interfaces::srv::SearchFor_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bill_interfaces::srv::SearchFor_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bill_interfaces::srv::SearchFor_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bill_interfaces::srv::SearchFor_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bill_interfaces::srv::SearchFor_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bill_interfaces::srv::SearchFor_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bill_interfaces__srv__SearchFor_Response
    std::shared_ptr<bill_interfaces::srv::SearchFor_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bill_interfaces__srv__SearchFor_Response
    std::shared_ptr<bill_interfaces::srv::SearchFor_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SearchFor_Response_ & other) const
  {
    if (this->found != other.found) {
      return false;
    }
    return true;
  }
  bool operator!=(const SearchFor_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SearchFor_Response_

// alias to use template instance with default allocator
using SearchFor_Response =
  bill_interfaces::srv::SearchFor_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace bill_interfaces

namespace bill_interfaces
{

namespace srv
{

struct SearchFor
{
  using Request = bill_interfaces::srv::SearchFor_Request;
  using Response = bill_interfaces::srv::SearchFor_Response;
};

}  // namespace srv

}  // namespace bill_interfaces

#endif  // BILL_INTERFACES__SRV__DETAIL__SEARCH_FOR__STRUCT_HPP_
