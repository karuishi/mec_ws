// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bill_interfaces:msg/MissionStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bill_interfaces/msg/detail/mission_status__rosidl_typesupport_introspection_c.h"
#include "bill_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bill_interfaces/msg/detail/mission_status__functions.h"
#include "bill_interfaces/msg/detail/mission_status__struct.h"


// Include directives for member types
// Member `status`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void bill_interfaces__msg__MissionStatus__rosidl_typesupport_introspection_c__MissionStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bill_interfaces__msg__MissionStatus__init(message_memory);
}

void bill_interfaces__msg__MissionStatus__rosidl_typesupport_introspection_c__MissionStatus_fini_function(void * message_memory)
{
  bill_interfaces__msg__MissionStatus__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember bill_interfaces__msg__MissionStatus__rosidl_typesupport_introspection_c__MissionStatus_message_member_array[1] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bill_interfaces__msg__MissionStatus, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bill_interfaces__msg__MissionStatus__rosidl_typesupport_introspection_c__MissionStatus_message_members = {
  "bill_interfaces__msg",  // message namespace
  "MissionStatus",  // message name
  1,  // number of fields
  sizeof(bill_interfaces__msg__MissionStatus),
  bill_interfaces__msg__MissionStatus__rosidl_typesupport_introspection_c__MissionStatus_message_member_array,  // message members
  bill_interfaces__msg__MissionStatus__rosidl_typesupport_introspection_c__MissionStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  bill_interfaces__msg__MissionStatus__rosidl_typesupport_introspection_c__MissionStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bill_interfaces__msg__MissionStatus__rosidl_typesupport_introspection_c__MissionStatus_message_type_support_handle = {
  0,
  &bill_interfaces__msg__MissionStatus__rosidl_typesupport_introspection_c__MissionStatus_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bill_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bill_interfaces, msg, MissionStatus)() {
  if (!bill_interfaces__msg__MissionStatus__rosidl_typesupport_introspection_c__MissionStatus_message_type_support_handle.typesupport_identifier) {
    bill_interfaces__msg__MissionStatus__rosidl_typesupport_introspection_c__MissionStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bill_interfaces__msg__MissionStatus__rosidl_typesupport_introspection_c__MissionStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
