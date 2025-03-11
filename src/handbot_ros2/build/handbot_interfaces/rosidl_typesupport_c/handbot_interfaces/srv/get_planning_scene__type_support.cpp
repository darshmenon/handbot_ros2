// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from handbot_interfaces:srv/GetPlanningScene.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "handbot_interfaces/srv/detail/get_planning_scene__struct.h"
#include "handbot_interfaces/srv/detail/get_planning_scene__type_support.h"
#include "handbot_interfaces/srv/detail/get_planning_scene__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace handbot_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _GetPlanningScene_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetPlanningScene_Request_type_support_ids_t;

static const _GetPlanningScene_Request_type_support_ids_t _GetPlanningScene_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetPlanningScene_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetPlanningScene_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetPlanningScene_Request_type_support_symbol_names_t _GetPlanningScene_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, handbot_interfaces, srv, GetPlanningScene_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, handbot_interfaces, srv, GetPlanningScene_Request)),
  }
};

typedef struct _GetPlanningScene_Request_type_support_data_t
{
  void * data[2];
} _GetPlanningScene_Request_type_support_data_t;

static _GetPlanningScene_Request_type_support_data_t _GetPlanningScene_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetPlanningScene_Request_message_typesupport_map = {
  2,
  "handbot_interfaces",
  &_GetPlanningScene_Request_message_typesupport_ids.typesupport_identifier[0],
  &_GetPlanningScene_Request_message_typesupport_symbol_names.symbol_name[0],
  &_GetPlanningScene_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetPlanningScene_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetPlanningScene_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &handbot_interfaces__srv__GetPlanningScene_Request__get_type_hash,
  &handbot_interfaces__srv__GetPlanningScene_Request__get_type_description,
  &handbot_interfaces__srv__GetPlanningScene_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace handbot_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, handbot_interfaces, srv, GetPlanningScene_Request)() {
  return &::handbot_interfaces::srv::rosidl_typesupport_c::GetPlanningScene_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "handbot_interfaces/srv/detail/get_planning_scene__struct.h"
// already included above
// #include "handbot_interfaces/srv/detail/get_planning_scene__type_support.h"
// already included above
// #include "handbot_interfaces/srv/detail/get_planning_scene__functions.h"
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

namespace handbot_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _GetPlanningScene_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetPlanningScene_Response_type_support_ids_t;

static const _GetPlanningScene_Response_type_support_ids_t _GetPlanningScene_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetPlanningScene_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetPlanningScene_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetPlanningScene_Response_type_support_symbol_names_t _GetPlanningScene_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, handbot_interfaces, srv, GetPlanningScene_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, handbot_interfaces, srv, GetPlanningScene_Response)),
  }
};

typedef struct _GetPlanningScene_Response_type_support_data_t
{
  void * data[2];
} _GetPlanningScene_Response_type_support_data_t;

static _GetPlanningScene_Response_type_support_data_t _GetPlanningScene_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetPlanningScene_Response_message_typesupport_map = {
  2,
  "handbot_interfaces",
  &_GetPlanningScene_Response_message_typesupport_ids.typesupport_identifier[0],
  &_GetPlanningScene_Response_message_typesupport_symbol_names.symbol_name[0],
  &_GetPlanningScene_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetPlanningScene_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetPlanningScene_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &handbot_interfaces__srv__GetPlanningScene_Response__get_type_hash,
  &handbot_interfaces__srv__GetPlanningScene_Response__get_type_description,
  &handbot_interfaces__srv__GetPlanningScene_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace handbot_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, handbot_interfaces, srv, GetPlanningScene_Response)() {
  return &::handbot_interfaces::srv::rosidl_typesupport_c::GetPlanningScene_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "handbot_interfaces/srv/detail/get_planning_scene__struct.h"
// already included above
// #include "handbot_interfaces/srv/detail/get_planning_scene__type_support.h"
// already included above
// #include "handbot_interfaces/srv/detail/get_planning_scene__functions.h"
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

namespace handbot_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _GetPlanningScene_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetPlanningScene_Event_type_support_ids_t;

static const _GetPlanningScene_Event_type_support_ids_t _GetPlanningScene_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetPlanningScene_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetPlanningScene_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetPlanningScene_Event_type_support_symbol_names_t _GetPlanningScene_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, handbot_interfaces, srv, GetPlanningScene_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, handbot_interfaces, srv, GetPlanningScene_Event)),
  }
};

typedef struct _GetPlanningScene_Event_type_support_data_t
{
  void * data[2];
} _GetPlanningScene_Event_type_support_data_t;

static _GetPlanningScene_Event_type_support_data_t _GetPlanningScene_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetPlanningScene_Event_message_typesupport_map = {
  2,
  "handbot_interfaces",
  &_GetPlanningScene_Event_message_typesupport_ids.typesupport_identifier[0],
  &_GetPlanningScene_Event_message_typesupport_symbol_names.symbol_name[0],
  &_GetPlanningScene_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetPlanningScene_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetPlanningScene_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &handbot_interfaces__srv__GetPlanningScene_Event__get_type_hash,
  &handbot_interfaces__srv__GetPlanningScene_Event__get_type_description,
  &handbot_interfaces__srv__GetPlanningScene_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace handbot_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, handbot_interfaces, srv, GetPlanningScene_Event)() {
  return &::handbot_interfaces::srv::rosidl_typesupport_c::GetPlanningScene_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "handbot_interfaces/srv/detail/get_planning_scene__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace handbot_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _GetPlanningScene_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetPlanningScene_type_support_ids_t;

static const _GetPlanningScene_type_support_ids_t _GetPlanningScene_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetPlanningScene_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetPlanningScene_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetPlanningScene_type_support_symbol_names_t _GetPlanningScene_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, handbot_interfaces, srv, GetPlanningScene)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, handbot_interfaces, srv, GetPlanningScene)),
  }
};

typedef struct _GetPlanningScene_type_support_data_t
{
  void * data[2];
} _GetPlanningScene_type_support_data_t;

static _GetPlanningScene_type_support_data_t _GetPlanningScene_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetPlanningScene_service_typesupport_map = {
  2,
  "handbot_interfaces",
  &_GetPlanningScene_service_typesupport_ids.typesupport_identifier[0],
  &_GetPlanningScene_service_typesupport_symbol_names.symbol_name[0],
  &_GetPlanningScene_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t GetPlanningScene_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetPlanningScene_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &GetPlanningScene_Request_message_type_support_handle,
  &GetPlanningScene_Response_message_type_support_handle,
  &GetPlanningScene_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    handbot_interfaces,
    srv,
    GetPlanningScene
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    handbot_interfaces,
    srv,
    GetPlanningScene
  ),
  &handbot_interfaces__srv__GetPlanningScene__get_type_hash,
  &handbot_interfaces__srv__GetPlanningScene__get_type_description,
  &handbot_interfaces__srv__GetPlanningScene__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace handbot_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, handbot_interfaces, srv, GetPlanningScene)() {
  return &::handbot_interfaces::srv::rosidl_typesupport_c::GetPlanningScene_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
