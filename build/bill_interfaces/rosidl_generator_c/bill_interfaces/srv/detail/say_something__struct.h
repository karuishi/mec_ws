// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bill_interfaces:srv/SaySomething.idl
// generated code does not contain a copyright notice

#ifndef BILL_INTERFACES__SRV__DETAIL__SAY_SOMETHING__STRUCT_H_
#define BILL_INTERFACES__SRV__DETAIL__SAY_SOMETHING__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'something'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SaySomething in the package bill_interfaces.
typedef struct bill_interfaces__srv__SaySomething_Request
{
  rosidl_runtime_c__String something;
} bill_interfaces__srv__SaySomething_Request;

// Struct for a sequence of bill_interfaces__srv__SaySomething_Request.
typedef struct bill_interfaces__srv__SaySomething_Request__Sequence
{
  bill_interfaces__srv__SaySomething_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bill_interfaces__srv__SaySomething_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/SaySomething in the package bill_interfaces.
typedef struct bill_interfaces__srv__SaySomething_Response
{
  bool said;
} bill_interfaces__srv__SaySomething_Response;

// Struct for a sequence of bill_interfaces__srv__SaySomething_Response.
typedef struct bill_interfaces__srv__SaySomething_Response__Sequence
{
  bill_interfaces__srv__SaySomething_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bill_interfaces__srv__SaySomething_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BILL_INTERFACES__SRV__DETAIL__SAY_SOMETHING__STRUCT_H_
