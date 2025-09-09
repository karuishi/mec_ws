// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bill_interfaces:srv/ExecuteSpin.idl
// generated code does not contain a copyright notice

#ifndef BILL_INTERFACES__SRV__DETAIL__EXECUTE_SPIN__BUILDER_HPP_
#define BILL_INTERFACES__SRV__DETAIL__EXECUTE_SPIN__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bill_interfaces/srv/detail/execute_spin__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bill_interfaces
{

namespace srv
{

namespace builder
{

class Init_ExecuteSpin_Request_angle
{
public:
  Init_ExecuteSpin_Request_angle()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::bill_interfaces::srv::ExecuteSpin_Request angle(::bill_interfaces::srv::ExecuteSpin_Request::_angle_type arg)
  {
    msg_.angle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bill_interfaces::srv::ExecuteSpin_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::bill_interfaces::srv::ExecuteSpin_Request>()
{
  return bill_interfaces::srv::builder::Init_ExecuteSpin_Request_angle();
}

}  // namespace bill_interfaces


namespace bill_interfaces
{

namespace srv
{

namespace builder
{

class Init_ExecuteSpin_Response_done
{
public:
  Init_ExecuteSpin_Response_done()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::bill_interfaces::srv::ExecuteSpin_Response done(::bill_interfaces::srv::ExecuteSpin_Response::_done_type arg)
  {
    msg_.done = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bill_interfaces::srv::ExecuteSpin_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::bill_interfaces::srv::ExecuteSpin_Response>()
{
  return bill_interfaces::srv::builder::Init_ExecuteSpin_Response_done();
}

}  // namespace bill_interfaces

#endif  // BILL_INTERFACES__SRV__DETAIL__EXECUTE_SPIN__BUILDER_HPP_
