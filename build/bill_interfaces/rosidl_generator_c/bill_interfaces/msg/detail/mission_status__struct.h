// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bill_interfaces:msg/MissionStatus.idl
// generated code does not contain a copyright notice

#ifndef BILL_INTERFACES__MSG__DETAIL__MISSION_STATUS__STRUCT_H_
#define BILL_INTERFACES__MSG__DETAIL__MISSION_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'status'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/MissionStatus in the package bill_interfaces.
typedef struct bill_interfaces__msg__MissionStatus
{
  rosidl_runtime_c__String status;
} bill_interfaces__msg__MissionStatus;

// Struct for a sequence of bill_interfaces__msg__MissionStatus.
typedef struct bill_interfaces__msg__MissionStatus__Sequence
{
  bill_interfaces__msg__MissionStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bill_interfaces__msg__MissionStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BILL_INTERFACES__MSG__DETAIL__MISSION_STATUS__STRUCT_H_
