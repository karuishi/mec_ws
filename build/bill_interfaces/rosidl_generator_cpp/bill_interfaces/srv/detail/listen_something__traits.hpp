// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bill_interfaces:srv/ListenSomething.idl
// generated code does not contain a copyright notice

#ifndef BILL_INTERFACES__SRV__DETAIL__LISTEN_SOMETHING__TRAITS_HPP_
#define BILL_INTERFACES__SRV__DETAIL__LISTEN_SOMETHING__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bill_interfaces/srv/detail/listen_something__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace bill_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ListenSomething_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: default_text_listened
  {
    out << "default_text_listened: ";
    rosidl_generator_traits::value_to_yaml(msg.default_text_listened, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ListenSomething_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: default_text_listened
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "default_text_listened: ";
    rosidl_generator_traits::value_to_yaml(msg.default_text_listened, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ListenSomething_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace bill_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use bill_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const bill_interfaces::srv::ListenSomething_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  bill_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bill_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const bill_interfaces::srv::ListenSomething_Request & msg)
{
  return bill_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<bill_interfaces::srv::ListenSomething_Request>()
{
  return "bill_interfaces::srv::ListenSomething_Request";
}

template<>
inline const char * name<bill_interfaces::srv::ListenSomething_Request>()
{
  return "bill_interfaces/srv/ListenSomething_Request";
}

template<>
struct has_fixed_size<bill_interfaces::srv::ListenSomething_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bill_interfaces::srv::ListenSomething_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bill_interfaces::srv::ListenSomething_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace bill_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ListenSomething_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: text_listened
  {
    out << "text_listened: ";
    rosidl_generator_traits::value_to_yaml(msg.text_listened, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ListenSomething_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: text_listened
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "text_listened: ";
    rosidl_generator_traits::value_to_yaml(msg.text_listened, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ListenSomething_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace bill_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use bill_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const bill_interfaces::srv::ListenSomething_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  bill_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bill_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const bill_interfaces::srv::ListenSomething_Response & msg)
{
  return bill_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<bill_interfaces::srv::ListenSomething_Response>()
{
  return "bill_interfaces::srv::ListenSomething_Response";
}

template<>
inline const char * name<bill_interfaces::srv::ListenSomething_Response>()
{
  return "bill_interfaces/srv/ListenSomething_Response";
}

template<>
struct has_fixed_size<bill_interfaces::srv::ListenSomething_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bill_interfaces::srv::ListenSomething_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bill_interfaces::srv::ListenSomething_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<bill_interfaces::srv::ListenSomething>()
{
  return "bill_interfaces::srv::ListenSomething";
}

template<>
inline const char * name<bill_interfaces::srv::ListenSomething>()
{
  return "bill_interfaces/srv/ListenSomething";
}

template<>
struct has_fixed_size<bill_interfaces::srv::ListenSomething>
  : std::integral_constant<
    bool,
    has_fixed_size<bill_interfaces::srv::ListenSomething_Request>::value &&
    has_fixed_size<bill_interfaces::srv::ListenSomething_Response>::value
  >
{
};

template<>
struct has_bounded_size<bill_interfaces::srv::ListenSomething>
  : std::integral_constant<
    bool,
    has_bounded_size<bill_interfaces::srv::ListenSomething_Request>::value &&
    has_bounded_size<bill_interfaces::srv::ListenSomething_Response>::value
  >
{
};

template<>
struct is_service<bill_interfaces::srv::ListenSomething>
  : std::true_type
{
};

template<>
struct is_service_request<bill_interfaces::srv::ListenSomething_Request>
  : std::true_type
{
};

template<>
struct is_service_response<bill_interfaces::srv::ListenSomething_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // BILL_INTERFACES__SRV__DETAIL__LISTEN_SOMETHING__TRAITS_HPP_
