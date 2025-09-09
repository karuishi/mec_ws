// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from bill_interfaces:srv/SaySomething.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "bill_interfaces/srv/detail/say_something__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace bill_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void SaySomething_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) bill_interfaces::srv::SaySomething_Request(_init);
}

void SaySomething_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<bill_interfaces::srv::SaySomething_Request *>(message_memory);
  typed_message->~SaySomething_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SaySomething_Request_message_member_array[1] = {
  {
    "something",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bill_interfaces::srv::SaySomething_Request, something),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SaySomething_Request_message_members = {
  "bill_interfaces::srv",  // message namespace
  "SaySomething_Request",  // message name
  1,  // number of fields
  sizeof(bill_interfaces::srv::SaySomething_Request),
  SaySomething_Request_message_member_array,  // message members
  SaySomething_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  SaySomething_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SaySomething_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SaySomething_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace bill_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<bill_interfaces::srv::SaySomething_Request>()
{
  return &::bill_interfaces::srv::rosidl_typesupport_introspection_cpp::SaySomething_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, bill_interfaces, srv, SaySomething_Request)() {
  return &::bill_interfaces::srv::rosidl_typesupport_introspection_cpp::SaySomething_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "bill_interfaces/srv/detail/say_something__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace bill_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void SaySomething_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) bill_interfaces::srv::SaySomething_Response(_init);
}

void SaySomething_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<bill_interfaces::srv::SaySomething_Response *>(message_memory);
  typed_message->~SaySomething_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SaySomething_Response_message_member_array[1] = {
  {
    "said",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bill_interfaces::srv::SaySomething_Response, said),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SaySomething_Response_message_members = {
  "bill_interfaces::srv",  // message namespace
  "SaySomething_Response",  // message name
  1,  // number of fields
  sizeof(bill_interfaces::srv::SaySomething_Response),
  SaySomething_Response_message_member_array,  // message members
  SaySomething_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  SaySomething_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SaySomething_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SaySomething_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace bill_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<bill_interfaces::srv::SaySomething_Response>()
{
  return &::bill_interfaces::srv::rosidl_typesupport_introspection_cpp::SaySomething_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, bill_interfaces, srv, SaySomething_Response)() {
  return &::bill_interfaces::srv::rosidl_typesupport_introspection_cpp::SaySomething_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "bill_interfaces/srv/detail/say_something__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace bill_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers SaySomething_service_members = {
  "bill_interfaces::srv",  // service namespace
  "SaySomething",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<bill_interfaces::srv::SaySomething>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t SaySomething_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SaySomething_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace bill_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<bill_interfaces::srv::SaySomething>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::bill_interfaces::srv::rosidl_typesupport_introspection_cpp::SaySomething_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::bill_interfaces::srv::SaySomething_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::bill_interfaces::srv::SaySomething_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, bill_interfaces, srv, SaySomething)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<bill_interfaces::srv::SaySomething>();
}

#ifdef __cplusplus
}
#endif
