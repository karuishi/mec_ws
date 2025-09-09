// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bill_interfaces:srv/GetName.idl
// generated code does not contain a copyright notice

#ifndef BILL_INTERFACES__SRV__DETAIL__GET_NAME__BUILDER_HPP_
#define BILL_INTERFACES__SRV__DETAIL__GET_NAME__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bill_interfaces/srv/detail/get_name__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bill_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetName_Request_default_name
{
public:
  Init_GetName_Request_default_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::bill_interfaces::srv::GetName_Request default_name(::bill_interfaces::srv::GetName_Request::_default_name_type arg)
  {
    msg_.default_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bill_interfaces::srv::GetName_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::bill_interfaces::srv::GetName_Request>()
{
  return bill_interfaces::srv::builder::Init_GetName_Request_default_name();
}

}  // namespace bill_interfaces


namespace bill_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetName_Response_name_listened
{
public:
  Init_GetName_Response_name_listened()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::bill_interfaces::srv::GetName_Response name_listened(::bill_interfaces::srv::GetName_Response::_name_listened_type arg)
  {
    msg_.name_listened = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bill_interfaces::srv::GetName_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::bill_interfaces::srv::GetName_Response>()
{
  return bill_interfaces::srv::builder::Init_GetName_Response_name_listened();
}

}  // namespace bill_interfaces

#endif  // BILL_INTERFACES__SRV__DETAIL__GET_NAME__BUILDER_HPP_
