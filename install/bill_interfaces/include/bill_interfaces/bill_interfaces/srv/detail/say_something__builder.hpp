// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bill_interfaces:srv/SaySomething.idl
// generated code does not contain a copyright notice

#ifndef BILL_INTERFACES__SRV__DETAIL__SAY_SOMETHING__BUILDER_HPP_
#define BILL_INTERFACES__SRV__DETAIL__SAY_SOMETHING__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bill_interfaces/srv/detail/say_something__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bill_interfaces
{

namespace srv
{

namespace builder
{

class Init_SaySomething_Request_something
{
public:
  Init_SaySomething_Request_something()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::bill_interfaces::srv::SaySomething_Request something(::bill_interfaces::srv::SaySomething_Request::_something_type arg)
  {
    msg_.something = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bill_interfaces::srv::SaySomething_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::bill_interfaces::srv::SaySomething_Request>()
{
  return bill_interfaces::srv::builder::Init_SaySomething_Request_something();
}

}  // namespace bill_interfaces


namespace bill_interfaces
{

namespace srv
{

namespace builder
{

class Init_SaySomething_Response_said
{
public:
  Init_SaySomething_Response_said()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::bill_interfaces::srv::SaySomething_Response said(::bill_interfaces::srv::SaySomething_Response::_said_type arg)
  {
    msg_.said = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bill_interfaces::srv::SaySomething_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::bill_interfaces::srv::SaySomething_Response>()
{
  return bill_interfaces::srv::builder::Init_SaySomething_Response_said();
}

}  // namespace bill_interfaces

#endif  // BILL_INTERFACES__SRV__DETAIL__SAY_SOMETHING__BUILDER_HPP_
