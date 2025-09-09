// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bill_interfaces:srv/ExecuteSpin.idl
// generated code does not contain a copyright notice

#ifndef BILL_INTERFACES__SRV__DETAIL__EXECUTE_SPIN__STRUCT_H_
#define BILL_INTERFACES__SRV__DETAIL__EXECUTE_SPIN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/ExecuteSpin in the package bill_interfaces.
typedef struct bill_interfaces__srv__ExecuteSpin_Request
{
  double angle;
} bill_interfaces__srv__ExecuteSpin_Request;

// Struct for a sequence of bill_interfaces__srv__ExecuteSpin_Request.
typedef struct bill_interfaces__srv__ExecuteSpin_Request__Sequence
{
  bill_interfaces__srv__ExecuteSpin_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bill_interfaces__srv__ExecuteSpin_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/ExecuteSpin in the package bill_interfaces.
typedef struct bill_interfaces__srv__ExecuteSpin_Response
{
  bool done;
} bill_interfaces__srv__ExecuteSpin_Response;

// Struct for a sequence of bill_interfaces__srv__ExecuteSpin_Response.
typedef struct bill_interfaces__srv__ExecuteSpin_Response__Sequence
{
  bill_interfaces__srv__ExecuteSpin_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bill_interfaces__srv__ExecuteSpin_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BILL_INTERFACES__SRV__DETAIL__EXECUTE_SPIN__STRUCT_H_
