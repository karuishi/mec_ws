// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bill_interfaces:srv/SaySomething.idl
// generated code does not contain a copyright notice
#include "bill_interfaces/srv/detail/say_something__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `something`
#include "rosidl_runtime_c/string_functions.h"

bool
bill_interfaces__srv__SaySomething_Request__init(bill_interfaces__srv__SaySomething_Request * msg)
{
  if (!msg) {
    return false;
  }
  // something
  if (!rosidl_runtime_c__String__init(&msg->something)) {
    bill_interfaces__srv__SaySomething_Request__fini(msg);
    return false;
  }
  return true;
}

void
bill_interfaces__srv__SaySomething_Request__fini(bill_interfaces__srv__SaySomething_Request * msg)
{
  if (!msg) {
    return;
  }
  // something
  rosidl_runtime_c__String__fini(&msg->something);
}

bool
bill_interfaces__srv__SaySomething_Request__are_equal(const bill_interfaces__srv__SaySomething_Request * lhs, const bill_interfaces__srv__SaySomething_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // something
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->something), &(rhs->something)))
  {
    return false;
  }
  return true;
}

bool
bill_interfaces__srv__SaySomething_Request__copy(
  const bill_interfaces__srv__SaySomething_Request * input,
  bill_interfaces__srv__SaySomething_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // something
  if (!rosidl_runtime_c__String__copy(
      &(input->something), &(output->something)))
  {
    return false;
  }
  return true;
}

bill_interfaces__srv__SaySomething_Request *
bill_interfaces__srv__SaySomething_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bill_interfaces__srv__SaySomething_Request * msg = (bill_interfaces__srv__SaySomething_Request *)allocator.allocate(sizeof(bill_interfaces__srv__SaySomething_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bill_interfaces__srv__SaySomething_Request));
  bool success = bill_interfaces__srv__SaySomething_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bill_interfaces__srv__SaySomething_Request__destroy(bill_interfaces__srv__SaySomething_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bill_interfaces__srv__SaySomething_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bill_interfaces__srv__SaySomething_Request__Sequence__init(bill_interfaces__srv__SaySomething_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bill_interfaces__srv__SaySomething_Request * data = NULL;

  if (size) {
    data = (bill_interfaces__srv__SaySomething_Request *)allocator.zero_allocate(size, sizeof(bill_interfaces__srv__SaySomething_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bill_interfaces__srv__SaySomething_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bill_interfaces__srv__SaySomething_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
bill_interfaces__srv__SaySomething_Request__Sequence__fini(bill_interfaces__srv__SaySomething_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      bill_interfaces__srv__SaySomething_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

bill_interfaces__srv__SaySomething_Request__Sequence *
bill_interfaces__srv__SaySomething_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bill_interfaces__srv__SaySomething_Request__Sequence * array = (bill_interfaces__srv__SaySomething_Request__Sequence *)allocator.allocate(sizeof(bill_interfaces__srv__SaySomething_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bill_interfaces__srv__SaySomething_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bill_interfaces__srv__SaySomething_Request__Sequence__destroy(bill_interfaces__srv__SaySomething_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bill_interfaces__srv__SaySomething_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bill_interfaces__srv__SaySomething_Request__Sequence__are_equal(const bill_interfaces__srv__SaySomething_Request__Sequence * lhs, const bill_interfaces__srv__SaySomething_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bill_interfaces__srv__SaySomething_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bill_interfaces__srv__SaySomething_Request__Sequence__copy(
  const bill_interfaces__srv__SaySomething_Request__Sequence * input,
  bill_interfaces__srv__SaySomething_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bill_interfaces__srv__SaySomething_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bill_interfaces__srv__SaySomething_Request * data =
      (bill_interfaces__srv__SaySomething_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bill_interfaces__srv__SaySomething_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bill_interfaces__srv__SaySomething_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bill_interfaces__srv__SaySomething_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
bill_interfaces__srv__SaySomething_Response__init(bill_interfaces__srv__SaySomething_Response * msg)
{
  if (!msg) {
    return false;
  }
  // said
  return true;
}

void
bill_interfaces__srv__SaySomething_Response__fini(bill_interfaces__srv__SaySomething_Response * msg)
{
  if (!msg) {
    return;
  }
  // said
}

bool
bill_interfaces__srv__SaySomething_Response__are_equal(const bill_interfaces__srv__SaySomething_Response * lhs, const bill_interfaces__srv__SaySomething_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // said
  if (lhs->said != rhs->said) {
    return false;
  }
  return true;
}

bool
bill_interfaces__srv__SaySomething_Response__copy(
  const bill_interfaces__srv__SaySomething_Response * input,
  bill_interfaces__srv__SaySomething_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // said
  output->said = input->said;
  return true;
}

bill_interfaces__srv__SaySomething_Response *
bill_interfaces__srv__SaySomething_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bill_interfaces__srv__SaySomething_Response * msg = (bill_interfaces__srv__SaySomething_Response *)allocator.allocate(sizeof(bill_interfaces__srv__SaySomething_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bill_interfaces__srv__SaySomething_Response));
  bool success = bill_interfaces__srv__SaySomething_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bill_interfaces__srv__SaySomething_Response__destroy(bill_interfaces__srv__SaySomething_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bill_interfaces__srv__SaySomething_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bill_interfaces__srv__SaySomething_Response__Sequence__init(bill_interfaces__srv__SaySomething_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bill_interfaces__srv__SaySomething_Response * data = NULL;

  if (size) {
    data = (bill_interfaces__srv__SaySomething_Response *)allocator.zero_allocate(size, sizeof(bill_interfaces__srv__SaySomething_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bill_interfaces__srv__SaySomething_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bill_interfaces__srv__SaySomething_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
bill_interfaces__srv__SaySomething_Response__Sequence__fini(bill_interfaces__srv__SaySomething_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      bill_interfaces__srv__SaySomething_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

bill_interfaces__srv__SaySomething_Response__Sequence *
bill_interfaces__srv__SaySomething_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bill_interfaces__srv__SaySomething_Response__Sequence * array = (bill_interfaces__srv__SaySomething_Response__Sequence *)allocator.allocate(sizeof(bill_interfaces__srv__SaySomething_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bill_interfaces__srv__SaySomething_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bill_interfaces__srv__SaySomething_Response__Sequence__destroy(bill_interfaces__srv__SaySomething_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bill_interfaces__srv__SaySomething_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bill_interfaces__srv__SaySomething_Response__Sequence__are_equal(const bill_interfaces__srv__SaySomething_Response__Sequence * lhs, const bill_interfaces__srv__SaySomething_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bill_interfaces__srv__SaySomething_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bill_interfaces__srv__SaySomething_Response__Sequence__copy(
  const bill_interfaces__srv__SaySomething_Response__Sequence * input,
  bill_interfaces__srv__SaySomething_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bill_interfaces__srv__SaySomething_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bill_interfaces__srv__SaySomething_Response * data =
      (bill_interfaces__srv__SaySomething_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bill_interfaces__srv__SaySomething_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bill_interfaces__srv__SaySomething_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bill_interfaces__srv__SaySomething_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
