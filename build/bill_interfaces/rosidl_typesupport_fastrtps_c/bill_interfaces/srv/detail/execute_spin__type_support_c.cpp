// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from bill_interfaces:srv/ExecuteSpin.idl
// generated code does not contain a copyright notice
#include "bill_interfaces/srv/detail/execute_spin__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "bill_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "bill_interfaces/srv/detail/execute_spin__struct.h"
#include "bill_interfaces/srv/detail/execute_spin__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _ExecuteSpin_Request__ros_msg_type = bill_interfaces__srv__ExecuteSpin_Request;

static bool _ExecuteSpin_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ExecuteSpin_Request__ros_msg_type * ros_message = static_cast<const _ExecuteSpin_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: angle
  {
    cdr << ros_message->angle;
  }

  return true;
}

static bool _ExecuteSpin_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ExecuteSpin_Request__ros_msg_type * ros_message = static_cast<_ExecuteSpin_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: angle
  {
    cdr >> ros_message->angle;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_bill_interfaces
size_t get_serialized_size_bill_interfaces__srv__ExecuteSpin_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ExecuteSpin_Request__ros_msg_type * ros_message = static_cast<const _ExecuteSpin_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name angle
  {
    size_t item_size = sizeof(ros_message->angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ExecuteSpin_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_bill_interfaces__srv__ExecuteSpin_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_bill_interfaces
size_t max_serialized_size_bill_interfaces__srv__ExecuteSpin_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: angle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = bill_interfaces__srv__ExecuteSpin_Request;
    is_plain =
      (
      offsetof(DataType, angle) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _ExecuteSpin_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_bill_interfaces__srv__ExecuteSpin_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ExecuteSpin_Request = {
  "bill_interfaces::srv",
  "ExecuteSpin_Request",
  _ExecuteSpin_Request__cdr_serialize,
  _ExecuteSpin_Request__cdr_deserialize,
  _ExecuteSpin_Request__get_serialized_size,
  _ExecuteSpin_Request__max_serialized_size
};

static rosidl_message_type_support_t _ExecuteSpin_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ExecuteSpin_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, bill_interfaces, srv, ExecuteSpin_Request)() {
  return &_ExecuteSpin_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "bill_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "bill_interfaces/srv/detail/execute_spin__struct.h"
// already included above
// #include "bill_interfaces/srv/detail/execute_spin__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _ExecuteSpin_Response__ros_msg_type = bill_interfaces__srv__ExecuteSpin_Response;

static bool _ExecuteSpin_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ExecuteSpin_Response__ros_msg_type * ros_message = static_cast<const _ExecuteSpin_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: done
  {
    cdr << (ros_message->done ? true : false);
  }

  return true;
}

static bool _ExecuteSpin_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ExecuteSpin_Response__ros_msg_type * ros_message = static_cast<_ExecuteSpin_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: done
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->done = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_bill_interfaces
size_t get_serialized_size_bill_interfaces__srv__ExecuteSpin_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ExecuteSpin_Response__ros_msg_type * ros_message = static_cast<const _ExecuteSpin_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name done
  {
    size_t item_size = sizeof(ros_message->done);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ExecuteSpin_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_bill_interfaces__srv__ExecuteSpin_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_bill_interfaces
size_t max_serialized_size_bill_interfaces__srv__ExecuteSpin_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: done
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = bill_interfaces__srv__ExecuteSpin_Response;
    is_plain =
      (
      offsetof(DataType, done) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _ExecuteSpin_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_bill_interfaces__srv__ExecuteSpin_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ExecuteSpin_Response = {
  "bill_interfaces::srv",
  "ExecuteSpin_Response",
  _ExecuteSpin_Response__cdr_serialize,
  _ExecuteSpin_Response__cdr_deserialize,
  _ExecuteSpin_Response__get_serialized_size,
  _ExecuteSpin_Response__max_serialized_size
};

static rosidl_message_type_support_t _ExecuteSpin_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ExecuteSpin_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, bill_interfaces, srv, ExecuteSpin_Response)() {
  return &_ExecuteSpin_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "bill_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "bill_interfaces/srv/execute_spin.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t ExecuteSpin__callbacks = {
  "bill_interfaces::srv",
  "ExecuteSpin",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, bill_interfaces, srv, ExecuteSpin_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, bill_interfaces, srv, ExecuteSpin_Response)(),
};

static rosidl_service_type_support_t ExecuteSpin__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &ExecuteSpin__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, bill_interfaces, srv, ExecuteSpin)() {
  return &ExecuteSpin__handle;
}

#if defined(__cplusplus)
}
#endif
