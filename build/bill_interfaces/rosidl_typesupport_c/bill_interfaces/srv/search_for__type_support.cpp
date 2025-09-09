// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from bill_interfaces:srv/SearchFor.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "bill_interfaces/srv/detail/search_for__struct.h"
#include "bill_interfaces/srv/detail/search_for__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace bill_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SearchFor_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SearchFor_Request_type_support_ids_t;

static const _SearchFor_Request_type_support_ids_t _SearchFor_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SearchFor_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SearchFor_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SearchFor_Request_type_support_symbol_names_t _SearchFor_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, bill_interfaces, srv, SearchFor_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bill_interfaces, srv, SearchFor_Request)),
  }
};

typedef struct _SearchFor_Request_type_support_data_t
{
  void * data[2];
} _SearchFor_Request_type_support_data_t;

static _SearchFor_Request_type_support_data_t _SearchFor_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SearchFor_Request_message_typesupport_map = {
  2,
  "bill_interfaces",
  &_SearchFor_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SearchFor_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SearchFor_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SearchFor_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SearchFor_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace bill_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, bill_interfaces, srv, SearchFor_Request)() {
  return &::bill_interfaces::srv::rosidl_typesupport_c::SearchFor_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "bill_interfaces/srv/detail/search_for__struct.h"
// already included above
// #include "bill_interfaces/srv/detail/search_for__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace bill_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SearchFor_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SearchFor_Response_type_support_ids_t;

static const _SearchFor_Response_type_support_ids_t _SearchFor_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SearchFor_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SearchFor_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SearchFor_Response_type_support_symbol_names_t _SearchFor_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, bill_interfaces, srv, SearchFor_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bill_interfaces, srv, SearchFor_Response)),
  }
};

typedef struct _SearchFor_Response_type_support_data_t
{
  void * data[2];
} _SearchFor_Response_type_support_data_t;

static _SearchFor_Response_type_support_data_t _SearchFor_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SearchFor_Response_message_typesupport_map = {
  2,
  "bill_interfaces",
  &_SearchFor_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SearchFor_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SearchFor_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SearchFor_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SearchFor_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace bill_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, bill_interfaces, srv, SearchFor_Response)() {
  return &::bill_interfaces::srv::rosidl_typesupport_c::SearchFor_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "bill_interfaces/srv/detail/search_for__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace bill_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SearchFor_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SearchFor_type_support_ids_t;

static const _SearchFor_type_support_ids_t _SearchFor_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SearchFor_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SearchFor_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SearchFor_type_support_symbol_names_t _SearchFor_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, bill_interfaces, srv, SearchFor)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bill_interfaces, srv, SearchFor)),
  }
};

typedef struct _SearchFor_type_support_data_t
{
  void * data[2];
} _SearchFor_type_support_data_t;

static _SearchFor_type_support_data_t _SearchFor_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SearchFor_service_typesupport_map = {
  2,
  "bill_interfaces",
  &_SearchFor_service_typesupport_ids.typesupport_identifier[0],
  &_SearchFor_service_typesupport_symbol_names.symbol_name[0],
  &_SearchFor_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SearchFor_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SearchFor_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace bill_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, bill_interfaces, srv, SearchFor)() {
  return &::bill_interfaces::srv::rosidl_typesupport_c::SearchFor_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
