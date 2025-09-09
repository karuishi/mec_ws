// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from bill_interfaces:srv/ListenSomething.idl
// generated code does not contain a copyright notice
#include "bill_interfaces/srv/detail/listen_something__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "bill_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "bill_interfaces/srv/detail/listen_something__struct.h"
#include "bill_interfaces/srv/detail/listen_something__functions.h"
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

#include "rosidl_runtime_c/string.h"  // default_text_listened
#include "rosidl_runtime_c/string_functions.h"  // default_text_listened

// forward declare type support functions


using _ListenSomething_Request__ros_msg_type = bill_interfaces__srv__ListenSomething_Request;

static bool _ListenSomething_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ListenSomething_Request__ros_msg_type * ros_message = static_cast<const _ListenSomething_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: default_text_listened
  {
    const rosidl_runtime_c__String * str = &ros_message->default_text_listened;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _ListenSomething_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ListenSomething_Request__ros_msg_type * ros_message = static_cast<_ListenSomething_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: default_text_listened
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->default_text_listened.data) {
      rosidl_runtime_c__String__init(&ros_message->default_text_listened);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->default_text_listened,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'default_text_listened'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_bill_interfaces
size_t get_serialized_size_bill_interfaces__srv__ListenSomething_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ListenSomething_Request__ros_msg_type * ros_message = static_cast<const _ListenSomething_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name default_text_listened
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->default_text_listened.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _ListenSomething_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_bill_interfaces__srv__ListenSomething_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_bill_interfaces
size_t max_serialized_size_bill_interfaces__srv__ListenSomething_Request(
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

  // member: default_text_listened
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = bill_interfaces__srv__ListenSomething_Request;
    is_plain =
      (
      offsetof(DataType, default_text_listened) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _ListenSomething_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_bill_interfaces__srv__ListenSomething_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ListenSomething_Request = {
  "bill_interfaces::srv",
  "ListenSomething_Request",
  _ListenSomething_Request__cdr_serialize,
  _ListenSomething_Request__cdr_deserialize,
  _ListenSomething_Request__get_serialized_size,
  _ListenSomething_Request__max_serialized_size
};

static rosidl_message_type_support_t _ListenSomething_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ListenSomething_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, bill_interfaces, srv, ListenSomething_Request)() {
  return &_ListenSomething_Request__type_support;
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
// #include "bill_interfaces/srv/detail/listen_something__struct.h"
// already included above
// #include "bill_interfaces/srv/detail/listen_something__functions.h"
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

// already included above
// #include "rosidl_runtime_c/string.h"  // text_listened
// already included above
// #include "rosidl_runtime_c/string_functions.h"  // text_listened

// forward declare type support functions


using _ListenSomething_Response__ros_msg_type = bill_interfaces__srv__ListenSomething_Response;

static bool _ListenSomething_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ListenSomething_Response__ros_msg_type * ros_message = static_cast<const _ListenSomething_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: text_listened
  {
    const rosidl_runtime_c__String * str = &ros_message->text_listened;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _ListenSomething_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ListenSomething_Response__ros_msg_type * ros_message = static_cast<_ListenSomething_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: text_listened
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->text_listened.data) {
      rosidl_runtime_c__String__init(&ros_message->text_listened);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->text_listened,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'text_listened'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_bill_interfaces
size_t get_serialized_size_bill_interfaces__srv__ListenSomething_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ListenSomething_Response__ros_msg_type * ros_message = static_cast<const _ListenSomething_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name text_listened
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->text_listened.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _ListenSomething_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_bill_interfaces__srv__ListenSomething_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_bill_interfaces
size_t max_serialized_size_bill_interfaces__srv__ListenSomething_Response(
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

  // member: text_listened
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = bill_interfaces__srv__ListenSomething_Response;
    is_plain =
      (
      offsetof(DataType, text_listened) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _ListenSomething_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_bill_interfaces__srv__ListenSomething_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ListenSomething_Response = {
  "bill_interfaces::srv",
  "ListenSomething_Response",
  _ListenSomething_Response__cdr_serialize,
  _ListenSomething_Response__cdr_deserialize,
  _ListenSomething_Response__get_serialized_size,
  _ListenSomething_Response__max_serialized_size
};

static rosidl_message_type_support_t _ListenSomething_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ListenSomething_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, bill_interfaces, srv, ListenSomething_Response)() {
  return &_ListenSomething_Response__type_support;
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
#include "bill_interfaces/srv/listen_something.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t ListenSomething__callbacks = {
  "bill_interfaces::srv",
  "ListenSomething",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, bill_interfaces, srv, ListenSomething_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, bill_interfaces, srv, ListenSomething_Response)(),
};

static rosidl_service_type_support_t ListenSomething__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &ListenSomething__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, bill_interfaces, srv, ListenSomething)() {
  return &ListenSomething__handle;
}

#if defined(__cplusplus)
}
#endif
