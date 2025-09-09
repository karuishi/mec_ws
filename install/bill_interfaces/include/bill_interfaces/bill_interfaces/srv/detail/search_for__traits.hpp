// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bill_interfaces:srv/SearchFor.idl
// generated code does not contain a copyright notice

#ifndef BILL_INTERFACES__SRV__DETAIL__SEARCH_FOR__TRAITS_HPP_
#define BILL_INTERFACES__SRV__DETAIL__SEARCH_FOR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bill_interfaces/srv/detail/search_for__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace bill_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SearchFor_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SearchFor_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SearchFor_Request & msg, bool use_flow_style = false)
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
  const bill_interfaces::srv::SearchFor_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  bill_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bill_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const bill_interfaces::srv::SearchFor_Request & msg)
{
  return bill_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<bill_interfaces::srv::SearchFor_Request>()
{
  return "bill_interfaces::srv::SearchFor_Request";
}

template<>
inline const char * name<bill_interfaces::srv::SearchFor_Request>()
{
  return "bill_interfaces/srv/SearchFor_Request";
}

template<>
struct has_fixed_size<bill_interfaces::srv::SearchFor_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bill_interfaces::srv::SearchFor_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bill_interfaces::srv::SearchFor_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace bill_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SearchFor_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: found
  {
    out << "found: ";
    rosidl_generator_traits::value_to_yaml(msg.found, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SearchFor_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: found
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "found: ";
    rosidl_generator_traits::value_to_yaml(msg.found, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SearchFor_Response & msg, bool use_flow_style = false)
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
  const bill_interfaces::srv::SearchFor_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  bill_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bill_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const bill_interfaces::srv::SearchFor_Response & msg)
{
  return bill_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<bill_interfaces::srv::SearchFor_Response>()
{
  return "bill_interfaces::srv::SearchFor_Response";
}

template<>
inline const char * name<bill_interfaces::srv::SearchFor_Response>()
{
  return "bill_interfaces/srv/SearchFor_Response";
}

template<>
struct has_fixed_size<bill_interfaces::srv::SearchFor_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<bill_interfaces::srv::SearchFor_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<bill_interfaces::srv::SearchFor_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<bill_interfaces::srv::SearchFor>()
{
  return "bill_interfaces::srv::SearchFor";
}

template<>
inline const char * name<bill_interfaces::srv::SearchFor>()
{
  return "bill_interfaces/srv/SearchFor";
}

template<>
struct has_fixed_size<bill_interfaces::srv::SearchFor>
  : std::integral_constant<
    bool,
    has_fixed_size<bill_interfaces::srv::SearchFor_Request>::value &&
    has_fixed_size<bill_interfaces::srv::SearchFor_Response>::value
  >
{
};

template<>
struct has_bounded_size<bill_interfaces::srv::SearchFor>
  : std::integral_constant<
    bool,
    has_bounded_size<bill_interfaces::srv::SearchFor_Request>::value &&
    has_bounded_size<bill_interfaces::srv::SearchFor_Response>::value
  >
{
};

template<>
struct is_service<bill_interfaces::srv::SearchFor>
  : std::true_type
{
};

template<>
struct is_service_request<bill_interfaces::srv::SearchFor_Request>
  : std::true_type
{
};

template<>
struct is_service_response<bill_interfaces::srv::SearchFor_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // BILL_INTERFACES__SRV__DETAIL__SEARCH_FOR__TRAITS_HPP_
