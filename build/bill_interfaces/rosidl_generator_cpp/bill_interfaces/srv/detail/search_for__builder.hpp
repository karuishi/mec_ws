// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bill_interfaces:srv/SearchFor.idl
// generated code does not contain a copyright notice

#ifndef BILL_INTERFACES__SRV__DETAIL__SEARCH_FOR__BUILDER_HPP_
#define BILL_INTERFACES__SRV__DETAIL__SEARCH_FOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bill_interfaces/srv/detail/search_for__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bill_interfaces
{

namespace srv
{

namespace builder
{

class Init_SearchFor_Request_name
{
public:
  Init_SearchFor_Request_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::bill_interfaces::srv::SearchFor_Request name(::bill_interfaces::srv::SearchFor_Request::_name_type arg)
  {
    msg_.name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bill_interfaces::srv::SearchFor_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::bill_interfaces::srv::SearchFor_Request>()
{
  return bill_interfaces::srv::builder::Init_SearchFor_Request_name();
}

}  // namespace bill_interfaces


namespace bill_interfaces
{

namespace srv
{

namespace builder
{

class Init_SearchFor_Response_found
{
public:
  Init_SearchFor_Response_found()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::bill_interfaces::srv::SearchFor_Response found(::bill_interfaces::srv::SearchFor_Response::_found_type arg)
  {
    msg_.found = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bill_interfaces::srv::SearchFor_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::bill_interfaces::srv::SearchFor_Response>()
{
  return bill_interfaces::srv::builder::Init_SearchFor_Response_found();
}

}  // namespace bill_interfaces

#endif  // BILL_INTERFACES__SRV__DETAIL__SEARCH_FOR__BUILDER_HPP_
