// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bill_interfaces:srv/ListenSomething.idl
// generated code does not contain a copyright notice

#ifndef BILL_INTERFACES__SRV__DETAIL__LISTEN_SOMETHING__BUILDER_HPP_
#define BILL_INTERFACES__SRV__DETAIL__LISTEN_SOMETHING__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bill_interfaces/srv/detail/listen_something__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bill_interfaces
{

namespace srv
{

namespace builder
{

class Init_ListenSomething_Request_default_text_listened
{
public:
  Init_ListenSomething_Request_default_text_listened()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::bill_interfaces::srv::ListenSomething_Request default_text_listened(::bill_interfaces::srv::ListenSomething_Request::_default_text_listened_type arg)
  {
    msg_.default_text_listened = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bill_interfaces::srv::ListenSomething_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::bill_interfaces::srv::ListenSomething_Request>()
{
  return bill_interfaces::srv::builder::Init_ListenSomething_Request_default_text_listened();
}

}  // namespace bill_interfaces


namespace bill_interfaces
{

namespace srv
{

namespace builder
{

class Init_ListenSomething_Response_text_listened
{
public:
  Init_ListenSomething_Response_text_listened()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::bill_interfaces::srv::ListenSomething_Response text_listened(::bill_interfaces::srv::ListenSomething_Response::_text_listened_type arg)
  {
    msg_.text_listened = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bill_interfaces::srv::ListenSomething_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::bill_interfaces::srv::ListenSomething_Response>()
{
  return bill_interfaces::srv::builder::Init_ListenSomething_Response_text_listened();
}

}  // namespace bill_interfaces

#endif  // BILL_INTERFACES__SRV__DETAIL__LISTEN_SOMETHING__BUILDER_HPP_
