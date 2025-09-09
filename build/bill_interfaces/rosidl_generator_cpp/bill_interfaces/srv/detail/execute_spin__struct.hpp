// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bill_interfaces:srv/ExecuteSpin.idl
// generated code does not contain a copyright notice

#ifndef BILL_INTERFACES__SRV__DETAIL__EXECUTE_SPIN__STRUCT_HPP_
#define BILL_INTERFACES__SRV__DETAIL__EXECUTE_SPIN__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__bill_interfaces__srv__ExecuteSpin_Request __attribute__((deprecated))
#else
# define DEPRECATED__bill_interfaces__srv__ExecuteSpin_Request __declspec(deprecated)
#endif

namespace bill_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ExecuteSpin_Request_
{
  using Type = ExecuteSpin_Request_<ContainerAllocator>;

  explicit ExecuteSpin_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->angle = 0.0;
    }
  }

  explicit ExecuteSpin_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->angle = 0.0;
    }
  }

  // field types and members
  using _angle_type =
    double;
  _angle_type angle;

  // setters for named parameter idiom
  Type & set__angle(
    const double & _arg)
  {
    this->angle = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bill_interfaces::srv::ExecuteSpin_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const bill_interfaces::srv::ExecuteSpin_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bill_interfaces::srv::ExecuteSpin_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bill_interfaces::srv::ExecuteSpin_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bill_interfaces::srv::ExecuteSpin_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bill_interfaces::srv::ExecuteSpin_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bill_interfaces::srv::ExecuteSpin_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bill_interfaces::srv::ExecuteSpin_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bill_interfaces::srv::ExecuteSpin_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bill_interfaces::srv::ExecuteSpin_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bill_interfaces__srv__ExecuteSpin_Request
    std::shared_ptr<bill_interfaces::srv::ExecuteSpin_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bill_interfaces__srv__ExecuteSpin_Request
    std::shared_ptr<bill_interfaces::srv::ExecuteSpin_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExecuteSpin_Request_ & other) const
  {
    if (this->angle != other.angle) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExecuteSpin_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExecuteSpin_Request_

// alias to use template instance with default allocator
using ExecuteSpin_Request =
  bill_interfaces::srv::ExecuteSpin_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace bill_interfaces


#ifndef _WIN32
# define DEPRECATED__bill_interfaces__srv__ExecuteSpin_Response __attribute__((deprecated))
#else
# define DEPRECATED__bill_interfaces__srv__ExecuteSpin_Response __declspec(deprecated)
#endif

namespace bill_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ExecuteSpin_Response_
{
  using Type = ExecuteSpin_Response_<ContainerAllocator>;

  explicit ExecuteSpin_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->done = false;
    }
  }

  explicit ExecuteSpin_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->done = false;
    }
  }

  // field types and members
  using _done_type =
    bool;
  _done_type done;

  // setters for named parameter idiom
  Type & set__done(
    const bool & _arg)
  {
    this->done = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bill_interfaces::srv::ExecuteSpin_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const bill_interfaces::srv::ExecuteSpin_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bill_interfaces::srv::ExecuteSpin_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bill_interfaces::srv::ExecuteSpin_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bill_interfaces::srv::ExecuteSpin_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bill_interfaces::srv::ExecuteSpin_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bill_interfaces::srv::ExecuteSpin_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bill_interfaces::srv::ExecuteSpin_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bill_interfaces::srv::ExecuteSpin_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bill_interfaces::srv::ExecuteSpin_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bill_interfaces__srv__ExecuteSpin_Response
    std::shared_ptr<bill_interfaces::srv::ExecuteSpin_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bill_interfaces__srv__ExecuteSpin_Response
    std::shared_ptr<bill_interfaces::srv::ExecuteSpin_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExecuteSpin_Response_ & other) const
  {
    if (this->done != other.done) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExecuteSpin_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExecuteSpin_Response_

// alias to use template instance with default allocator
using ExecuteSpin_Response =
  bill_interfaces::srv::ExecuteSpin_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace bill_interfaces

namespace bill_interfaces
{

namespace srv
{

struct ExecuteSpin
{
  using Request = bill_interfaces::srv::ExecuteSpin_Request;
  using Response = bill_interfaces::srv::ExecuteSpin_Response;
};

}  // namespace srv

}  // namespace bill_interfaces

#endif  // BILL_INTERFACES__SRV__DETAIL__EXECUTE_SPIN__STRUCT_HPP_
