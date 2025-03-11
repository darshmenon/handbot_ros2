// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from handbot_interfaces:srv/GetPlanningScene.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "handbot_interfaces/srv/detail/get_planning_scene__functions.h"
#include "handbot_interfaces/srv/detail/get_planning_scene__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace handbot_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void GetPlanningScene_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) handbot_interfaces::srv::GetPlanningScene_Request(_init);
}

void GetPlanningScene_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<handbot_interfaces::srv::GetPlanningScene_Request *>(message_memory);
  typed_message->~GetPlanningScene_Request();
}

size_t size_function__GetPlanningScene_Request__target_dimensions(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GetPlanningScene_Request__target_dimensions(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__GetPlanningScene_Request__target_dimensions(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__GetPlanningScene_Request__target_dimensions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__GetPlanningScene_Request__target_dimensions(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__GetPlanningScene_Request__target_dimensions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__GetPlanningScene_Request__target_dimensions(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__GetPlanningScene_Request__target_dimensions(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GetPlanningScene_Request_message_member_array[2] = {
  {
    "target_shape",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(handbot_interfaces::srv::GetPlanningScene_Request, target_shape),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "target_dimensions",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(handbot_interfaces::srv::GetPlanningScene_Request, target_dimensions),  // bytes offset in struct
    nullptr,  // default value
    size_function__GetPlanningScene_Request__target_dimensions,  // size() function pointer
    get_const_function__GetPlanningScene_Request__target_dimensions,  // get_const(index) function pointer
    get_function__GetPlanningScene_Request__target_dimensions,  // get(index) function pointer
    fetch_function__GetPlanningScene_Request__target_dimensions,  // fetch(index, &value) function pointer
    assign_function__GetPlanningScene_Request__target_dimensions,  // assign(index, value) function pointer
    resize_function__GetPlanningScene_Request__target_dimensions  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GetPlanningScene_Request_message_members = {
  "handbot_interfaces::srv",  // message namespace
  "GetPlanningScene_Request",  // message name
  2,  // number of fields
  sizeof(handbot_interfaces::srv::GetPlanningScene_Request),
  false,  // has_any_key_member_
  GetPlanningScene_Request_message_member_array,  // message members
  GetPlanningScene_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GetPlanningScene_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GetPlanningScene_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetPlanningScene_Request_message_members,
  get_message_typesupport_handle_function,
  &handbot_interfaces__srv__GetPlanningScene_Request__get_type_hash,
  &handbot_interfaces__srv__GetPlanningScene_Request__get_type_description,
  &handbot_interfaces__srv__GetPlanningScene_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace handbot_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<handbot_interfaces::srv::GetPlanningScene_Request>()
{
  return &::handbot_interfaces::srv::rosidl_typesupport_introspection_cpp::GetPlanningScene_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, handbot_interfaces, srv, GetPlanningScene_Request)() {
  return &::handbot_interfaces::srv::rosidl_typesupport_introspection_cpp::GetPlanningScene_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "handbot_interfaces/srv/detail/get_planning_scene__functions.h"
// already included above
// #include "handbot_interfaces/srv/detail/get_planning_scene__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace handbot_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void GetPlanningScene_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) handbot_interfaces::srv::GetPlanningScene_Response(_init);
}

void GetPlanningScene_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<handbot_interfaces::srv::GetPlanningScene_Response *>(message_memory);
  typed_message->~GetPlanningScene_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GetPlanningScene_Response_message_member_array[6] = {
  {
    "scene_world",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<moveit_msgs::msg::PlanningSceneWorld>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(handbot_interfaces::srv::GetPlanningScene_Response, scene_world),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "full_cloud",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<sensor_msgs::msg::PointCloud2>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(handbot_interfaces::srv::GetPlanningScene_Response, full_cloud),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "rgb_image",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<sensor_msgs::msg::Image>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(handbot_interfaces::srv::GetPlanningScene_Response, rgb_image),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "target_object_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(handbot_interfaces::srv::GetPlanningScene_Response, target_object_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "support_surface_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(handbot_interfaces::srv::GetPlanningScene_Response, support_surface_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "success",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(handbot_interfaces::srv::GetPlanningScene_Response, success),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GetPlanningScene_Response_message_members = {
  "handbot_interfaces::srv",  // message namespace
  "GetPlanningScene_Response",  // message name
  6,  // number of fields
  sizeof(handbot_interfaces::srv::GetPlanningScene_Response),
  false,  // has_any_key_member_
  GetPlanningScene_Response_message_member_array,  // message members
  GetPlanningScene_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GetPlanningScene_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GetPlanningScene_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetPlanningScene_Response_message_members,
  get_message_typesupport_handle_function,
  &handbot_interfaces__srv__GetPlanningScene_Response__get_type_hash,
  &handbot_interfaces__srv__GetPlanningScene_Response__get_type_description,
  &handbot_interfaces__srv__GetPlanningScene_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace handbot_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<handbot_interfaces::srv::GetPlanningScene_Response>()
{
  return &::handbot_interfaces::srv::rosidl_typesupport_introspection_cpp::GetPlanningScene_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, handbot_interfaces, srv, GetPlanningScene_Response)() {
  return &::handbot_interfaces::srv::rosidl_typesupport_introspection_cpp::GetPlanningScene_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "handbot_interfaces/srv/detail/get_planning_scene__functions.h"
// already included above
// #include "handbot_interfaces/srv/detail/get_planning_scene__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace handbot_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void GetPlanningScene_Event_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) handbot_interfaces::srv::GetPlanningScene_Event(_init);
}

void GetPlanningScene_Event_fini_function(void * message_memory)
{
  auto typed_message = static_cast<handbot_interfaces::srv::GetPlanningScene_Event *>(message_memory);
  typed_message->~GetPlanningScene_Event();
}

size_t size_function__GetPlanningScene_Event__request(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<handbot_interfaces::srv::GetPlanningScene_Request> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GetPlanningScene_Event__request(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<handbot_interfaces::srv::GetPlanningScene_Request> *>(untyped_member);
  return &member[index];
}

void * get_function__GetPlanningScene_Event__request(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<handbot_interfaces::srv::GetPlanningScene_Request> *>(untyped_member);
  return &member[index];
}

void fetch_function__GetPlanningScene_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const handbot_interfaces::srv::GetPlanningScene_Request *>(
    get_const_function__GetPlanningScene_Event__request(untyped_member, index));
  auto & value = *reinterpret_cast<handbot_interfaces::srv::GetPlanningScene_Request *>(untyped_value);
  value = item;
}

void assign_function__GetPlanningScene_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<handbot_interfaces::srv::GetPlanningScene_Request *>(
    get_function__GetPlanningScene_Event__request(untyped_member, index));
  const auto & value = *reinterpret_cast<const handbot_interfaces::srv::GetPlanningScene_Request *>(untyped_value);
  item = value;
}

void resize_function__GetPlanningScene_Event__request(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<handbot_interfaces::srv::GetPlanningScene_Request> *>(untyped_member);
  member->resize(size);
}

size_t size_function__GetPlanningScene_Event__response(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<handbot_interfaces::srv::GetPlanningScene_Response> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GetPlanningScene_Event__response(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<handbot_interfaces::srv::GetPlanningScene_Response> *>(untyped_member);
  return &member[index];
}

void * get_function__GetPlanningScene_Event__response(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<handbot_interfaces::srv::GetPlanningScene_Response> *>(untyped_member);
  return &member[index];
}

void fetch_function__GetPlanningScene_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const handbot_interfaces::srv::GetPlanningScene_Response *>(
    get_const_function__GetPlanningScene_Event__response(untyped_member, index));
  auto & value = *reinterpret_cast<handbot_interfaces::srv::GetPlanningScene_Response *>(untyped_value);
  value = item;
}

void assign_function__GetPlanningScene_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<handbot_interfaces::srv::GetPlanningScene_Response *>(
    get_function__GetPlanningScene_Event__response(untyped_member, index));
  const auto & value = *reinterpret_cast<const handbot_interfaces::srv::GetPlanningScene_Response *>(untyped_value);
  item = value;
}

void resize_function__GetPlanningScene_Event__response(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<handbot_interfaces::srv::GetPlanningScene_Response> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GetPlanningScene_Event_message_member_array[3] = {
  {
    "info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<service_msgs::msg::ServiceEventInfo>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(handbot_interfaces::srv::GetPlanningScene_Event, info),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "request",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<handbot_interfaces::srv::GetPlanningScene_Request>(),  // members of sub message
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(handbot_interfaces::srv::GetPlanningScene_Event, request),  // bytes offset in struct
    nullptr,  // default value
    size_function__GetPlanningScene_Event__request,  // size() function pointer
    get_const_function__GetPlanningScene_Event__request,  // get_const(index) function pointer
    get_function__GetPlanningScene_Event__request,  // get(index) function pointer
    fetch_function__GetPlanningScene_Event__request,  // fetch(index, &value) function pointer
    assign_function__GetPlanningScene_Event__request,  // assign(index, value) function pointer
    resize_function__GetPlanningScene_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<handbot_interfaces::srv::GetPlanningScene_Response>(),  // members of sub message
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(handbot_interfaces::srv::GetPlanningScene_Event, response),  // bytes offset in struct
    nullptr,  // default value
    size_function__GetPlanningScene_Event__response,  // size() function pointer
    get_const_function__GetPlanningScene_Event__response,  // get_const(index) function pointer
    get_function__GetPlanningScene_Event__response,  // get(index) function pointer
    fetch_function__GetPlanningScene_Event__response,  // fetch(index, &value) function pointer
    assign_function__GetPlanningScene_Event__response,  // assign(index, value) function pointer
    resize_function__GetPlanningScene_Event__response  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GetPlanningScene_Event_message_members = {
  "handbot_interfaces::srv",  // message namespace
  "GetPlanningScene_Event",  // message name
  3,  // number of fields
  sizeof(handbot_interfaces::srv::GetPlanningScene_Event),
  false,  // has_any_key_member_
  GetPlanningScene_Event_message_member_array,  // message members
  GetPlanningScene_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  GetPlanningScene_Event_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GetPlanningScene_Event_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetPlanningScene_Event_message_members,
  get_message_typesupport_handle_function,
  &handbot_interfaces__srv__GetPlanningScene_Event__get_type_hash,
  &handbot_interfaces__srv__GetPlanningScene_Event__get_type_description,
  &handbot_interfaces__srv__GetPlanningScene_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace handbot_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<handbot_interfaces::srv::GetPlanningScene_Event>()
{
  return &::handbot_interfaces::srv::rosidl_typesupport_introspection_cpp::GetPlanningScene_Event_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, handbot_interfaces, srv, GetPlanningScene_Event)() {
  return &::handbot_interfaces::srv::rosidl_typesupport_introspection_cpp::GetPlanningScene_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "handbot_interfaces/srv/detail/get_planning_scene__functions.h"
// already included above
// #include "handbot_interfaces/srv/detail/get_planning_scene__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace handbot_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers GetPlanningScene_service_members = {
  "handbot_interfaces::srv",  // service namespace
  "GetPlanningScene",  // service name
  // the following fields are initialized below on first access
  // see get_service_type_support_handle<handbot_interfaces::srv::GetPlanningScene>()
  nullptr,  // request message
  nullptr,  // response message
  nullptr,  // event message
};

static const rosidl_service_type_support_t GetPlanningScene_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetPlanningScene_service_members,
  get_service_typesupport_handle_function,
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<handbot_interfaces::srv::GetPlanningScene_Request>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<handbot_interfaces::srv::GetPlanningScene_Response>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<handbot_interfaces::srv::GetPlanningScene_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<handbot_interfaces::srv::GetPlanningScene>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<handbot_interfaces::srv::GetPlanningScene>,
  &handbot_interfaces__srv__GetPlanningScene__get_type_hash,
  &handbot_interfaces__srv__GetPlanningScene__get_type_description,
  &handbot_interfaces__srv__GetPlanningScene__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace handbot_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<handbot_interfaces::srv::GetPlanningScene>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::handbot_interfaces::srv::rosidl_typesupport_introspection_cpp::GetPlanningScene_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure all of the service_members are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr ||
    service_members->event_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::handbot_interfaces::srv::GetPlanningScene_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::handbot_interfaces::srv::GetPlanningScene_Response
      >()->data
      );
    // initialize the event_members_ with the static function from the external library
    service_members->event_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::handbot_interfaces::srv::GetPlanningScene_Event
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, handbot_interfaces, srv, GetPlanningScene)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<handbot_interfaces::srv::GetPlanningScene>();
}

#ifdef __cplusplus
}
#endif
