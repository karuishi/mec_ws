// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bill_interfaces:msg/MissionStatus.idl
// generated code does not contain a copyright notice

#ifndef BILL_INTERFACES__MSG__DETAIL__MISSION_STATUS__TRAITS_HPP_
#define BILL_INTERFACES__MSG__DETAIL__MISSION_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bill_interfaces/msg/detail/mission_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace bill_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const MissionStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MissionStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MissionStatus & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace bill_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use bill_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const bill_interfaces::msg::MissionStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  bill_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bill_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const bill_interfaces::msg::MissionStatus & msg)
{
  return bill_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bill_interfaces::msg::MissionStatus>()
{
  return "bill_interfaces::msg::MissionStatus";
}

template<>
inline const char * name<bill_interfaces::msg::MissionStatus>()
{
  return "bill_interfaces/msg/MissionStatus";
}

template<>
struct has_fixed_size<bill_interfaces::msg::MissionStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bill_interfaces::msg::MissionStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bill_interfaces::msg::MissionStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BILL_INTERFACES__MSG__DETAIL__MISSION_STATUS__TRAITS_HPP_
