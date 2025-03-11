// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from handbot_interfaces:srv/GetPlanningScene.idl
// generated code does not contain a copyright notice
#include "handbot_interfaces/srv/detail/get_planning_scene__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "handbot_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "handbot_interfaces/srv/detail/get_planning_scene__struct.h"
#include "handbot_interfaces/srv/detail/get_planning_scene__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // target_dimensions
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // target_dimensions
#include "rosidl_runtime_c/string.h"  // target_shape
#include "rosidl_runtime_c/string_functions.h"  // target_shape

// forward declare type support functions


using _GetPlanningScene_Request__ros_msg_type = handbot_interfaces__srv__GetPlanningScene_Request;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_handbot_interfaces
bool cdr_serialize_handbot_interfaces__srv__GetPlanningScene_Request(
  const handbot_interfaces__srv__GetPlanningScene_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: target_shape
  {
    const rosidl_runtime_c__String * str = &ros_message->target_shape;
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

  // Field name: target_dimensions
  {
    size_t size = ros_message->target_dimensions.size;
    auto array_ptr = ros_message->target_dimensions.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_handbot_interfaces
bool cdr_deserialize_handbot_interfaces__srv__GetPlanningScene_Request(
  eprosima::fastcdr::Cdr & cdr,
  handbot_interfaces__srv__GetPlanningScene_Request * ros_message)
{
  // Field name: target_shape
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->target_shape.data) {
      rosidl_runtime_c__String__init(&ros_message->target_shape);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->target_shape,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'target_shape'\n");
      return false;
    }
  }

  // Field name: target_dimensions
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->target_dimensions.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->target_dimensions);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->target_dimensions, size)) {
      fprintf(stderr, "failed to create array for field 'target_dimensions'");
      return false;
    }
    auto array_ptr = ros_message->target_dimensions.data;
    cdr.deserialize_array(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_handbot_interfaces
size_t get_serialized_size_handbot_interfaces__srv__GetPlanningScene_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetPlanningScene_Request__ros_msg_type * ros_message = static_cast<const _GetPlanningScene_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: target_shape
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->target_shape.size + 1);

  // Field name: target_dimensions
  {
    size_t array_size = ros_message->target_dimensions.size;
    auto array_ptr = ros_message->target_dimensions.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_handbot_interfaces
size_t max_serialized_size_handbot_interfaces__srv__GetPlanningScene_Request(
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

  // Field name: target_shape
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

  // Field name: target_dimensions
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = handbot_interfaces__srv__GetPlanningScene_Request;
    is_plain =
      (
      offsetof(DataType, target_dimensions) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_handbot_interfaces
bool cdr_serialize_key_handbot_interfaces__srv__GetPlanningScene_Request(
  const handbot_interfaces__srv__GetPlanningScene_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: target_shape
  {
    const rosidl_runtime_c__String * str = &ros_message->target_shape;
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

  // Field name: target_dimensions
  {
    size_t size = ros_message->target_dimensions.size;
    auto array_ptr = ros_message->target_dimensions.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_handbot_interfaces
size_t get_serialized_size_key_handbot_interfaces__srv__GetPlanningScene_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetPlanningScene_Request__ros_msg_type * ros_message = static_cast<const _GetPlanningScene_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: target_shape
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->target_shape.size + 1);

  // Field name: target_dimensions
  {
    size_t array_size = ros_message->target_dimensions.size;
    auto array_ptr = ros_message->target_dimensions.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_handbot_interfaces
size_t max_serialized_size_key_handbot_interfaces__srv__GetPlanningScene_Request(
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
  // Field name: target_shape
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

  // Field name: target_dimensions
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = handbot_interfaces__srv__GetPlanningScene_Request;
    is_plain =
      (
      offsetof(DataType, target_dimensions) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _GetPlanningScene_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const handbot_interfaces__srv__GetPlanningScene_Request * ros_message = static_cast<const handbot_interfaces__srv__GetPlanningScene_Request *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_handbot_interfaces__srv__GetPlanningScene_Request(ros_message, cdr);
}

static bool _GetPlanningScene_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  handbot_interfaces__srv__GetPlanningScene_Request * ros_message = static_cast<handbot_interfaces__srv__GetPlanningScene_Request *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_handbot_interfaces__srv__GetPlanningScene_Request(cdr, ros_message);
}

static uint32_t _GetPlanningScene_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_handbot_interfaces__srv__GetPlanningScene_Request(
      untyped_ros_message, 0));
}

static size_t _GetPlanningScene_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_handbot_interfaces__srv__GetPlanningScene_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GetPlanningScene_Request = {
  "handbot_interfaces::srv",
  "GetPlanningScene_Request",
  _GetPlanningScene_Request__cdr_serialize,
  _GetPlanningScene_Request__cdr_deserialize,
  _GetPlanningScene_Request__get_serialized_size,
  _GetPlanningScene_Request__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _GetPlanningScene_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetPlanningScene_Request,
  get_message_typesupport_handle_function,
  &handbot_interfaces__srv__GetPlanningScene_Request__get_type_hash,
  &handbot_interfaces__srv__GetPlanningScene_Request__get_type_description,
  &handbot_interfaces__srv__GetPlanningScene_Request__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, handbot_interfaces, srv, GetPlanningScene_Request)() {
  return &_GetPlanningScene_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <cstddef>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "handbot_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "handbot_interfaces/srv/detail/get_planning_scene__struct.h"
// already included above
// #include "handbot_interfaces/srv/detail/get_planning_scene__functions.h"
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

#include "moveit_msgs/msg/detail/planning_scene_world__functions.h"  // scene_world
// already included above
// #include "rosidl_runtime_c/string.h"  // support_surface_id, target_object_id
// already included above
// #include "rosidl_runtime_c/string_functions.h"  // support_surface_id, target_object_id
#include "sensor_msgs/msg/detail/image__functions.h"  // rgb_image
#include "sensor_msgs/msg/detail/point_cloud2__functions.h"  // full_cloud

// forward declare type support functions

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_handbot_interfaces
bool cdr_serialize_moveit_msgs__msg__PlanningSceneWorld(
  const moveit_msgs__msg__PlanningSceneWorld * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_handbot_interfaces
bool cdr_deserialize_moveit_msgs__msg__PlanningSceneWorld(
  eprosima::fastcdr::Cdr & cdr,
  moveit_msgs__msg__PlanningSceneWorld * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_handbot_interfaces
size_t get_serialized_size_moveit_msgs__msg__PlanningSceneWorld(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_handbot_interfaces
size_t max_serialized_size_moveit_msgs__msg__PlanningSceneWorld(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_handbot_interfaces
bool cdr_serialize_key_moveit_msgs__msg__PlanningSceneWorld(
  const moveit_msgs__msg__PlanningSceneWorld * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_handbot_interfaces
size_t get_serialized_size_key_moveit_msgs__msg__PlanningSceneWorld(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_handbot_interfaces
size_t max_serialized_size_key_moveit_msgs__msg__PlanningSceneWorld(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_handbot_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, msg, PlanningSceneWorld)();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_handbot_interfaces
bool cdr_serialize_sensor_msgs__msg__Image(
  const sensor_msgs__msg__Image * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_handbot_interfaces
bool cdr_deserialize_sensor_msgs__msg__Image(
  eprosima::fastcdr::Cdr & cdr,
  sensor_msgs__msg__Image * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_handbot_interfaces
size_t get_serialized_size_sensor_msgs__msg__Image(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_handbot_interfaces
size_t max_serialized_size_sensor_msgs__msg__Image(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_handbot_interfaces
bool cdr_serialize_key_sensor_msgs__msg__Image(
  const sensor_msgs__msg__Image * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_handbot_interfaces
size_t get_serialized_size_key_sensor_msgs__msg__Image(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_handbot_interfaces
size_t max_serialized_size_key_sensor_msgs__msg__Image(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_handbot_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sensor_msgs, msg, Image)();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_handbot_interfaces
bool cdr_serialize_sensor_msgs__msg__PointCloud2(
  const sensor_msgs__msg__PointCloud2 * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_handbot_interfaces
bool cdr_deserialize_sensor_msgs__msg__PointCloud2(
  eprosima::fastcdr::Cdr & cdr,
  sensor_msgs__msg__PointCloud2 * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_handbot_interfaces
size_t get_serialized_size_sensor_msgs__msg__PointCloud2(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_handbot_interfaces
size_t max_serialized_size_sensor_msgs__msg__PointCloud2(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_handbot_interfaces
bool cdr_serialize_key_sensor_msgs__msg__PointCloud2(
  const sensor_msgs__msg__PointCloud2 * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_handbot_interfaces
size_t get_serialized_size_key_sensor_msgs__msg__PointCloud2(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_handbot_interfaces
size_t max_serialized_size_key_sensor_msgs__msg__PointCloud2(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_handbot_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sensor_msgs, msg, PointCloud2)();


using _GetPlanningScene_Response__ros_msg_type = handbot_interfaces__srv__GetPlanningScene_Response;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_handbot_interfaces
bool cdr_serialize_handbot_interfaces__srv__GetPlanningScene_Response(
  const handbot_interfaces__srv__GetPlanningScene_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: scene_world
  {
    cdr_serialize_moveit_msgs__msg__PlanningSceneWorld(
      &ros_message->scene_world, cdr);
  }

  // Field name: full_cloud
  {
    cdr_serialize_sensor_msgs__msg__PointCloud2(
      &ros_message->full_cloud, cdr);
  }

  // Field name: rgb_image
  {
    cdr_serialize_sensor_msgs__msg__Image(
      &ros_message->rgb_image, cdr);
  }

  // Field name: target_object_id
  {
    const rosidl_runtime_c__String * str = &ros_message->target_object_id;
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

  // Field name: support_surface_id
  {
    const rosidl_runtime_c__String * str = &ros_message->support_surface_id;
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

  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_handbot_interfaces
bool cdr_deserialize_handbot_interfaces__srv__GetPlanningScene_Response(
  eprosima::fastcdr::Cdr & cdr,
  handbot_interfaces__srv__GetPlanningScene_Response * ros_message)
{
  // Field name: scene_world
  {
    cdr_deserialize_moveit_msgs__msg__PlanningSceneWorld(cdr, &ros_message->scene_world);
  }

  // Field name: full_cloud
  {
    cdr_deserialize_sensor_msgs__msg__PointCloud2(cdr, &ros_message->full_cloud);
  }

  // Field name: rgb_image
  {
    cdr_deserialize_sensor_msgs__msg__Image(cdr, &ros_message->rgb_image);
  }

  // Field name: target_object_id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->target_object_id.data) {
      rosidl_runtime_c__String__init(&ros_message->target_object_id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->target_object_id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'target_object_id'\n");
      return false;
    }
  }

  // Field name: support_surface_id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->support_surface_id.data) {
      rosidl_runtime_c__String__init(&ros_message->support_surface_id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->support_surface_id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'support_surface_id'\n");
      return false;
    }
  }

  // Field name: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->success = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_handbot_interfaces
size_t get_serialized_size_handbot_interfaces__srv__GetPlanningScene_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetPlanningScene_Response__ros_msg_type * ros_message = static_cast<const _GetPlanningScene_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: scene_world
  current_alignment += get_serialized_size_moveit_msgs__msg__PlanningSceneWorld(
    &(ros_message->scene_world), current_alignment);

  // Field name: full_cloud
  current_alignment += get_serialized_size_sensor_msgs__msg__PointCloud2(
    &(ros_message->full_cloud), current_alignment);

  // Field name: rgb_image
  current_alignment += get_serialized_size_sensor_msgs__msg__Image(
    &(ros_message->rgb_image), current_alignment);

  // Field name: target_object_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->target_object_id.size + 1);

  // Field name: support_surface_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->support_surface_id.size + 1);

  // Field name: success
  {
    size_t item_size = sizeof(ros_message->success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_handbot_interfaces
size_t max_serialized_size_handbot_interfaces__srv__GetPlanningScene_Response(
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

  // Field name: scene_world
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_moveit_msgs__msg__PlanningSceneWorld(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: full_cloud
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_sensor_msgs__msg__PointCloud2(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: rgb_image
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_sensor_msgs__msg__Image(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: target_object_id
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

  // Field name: support_surface_id
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

  // Field name: success
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
    using DataType = handbot_interfaces__srv__GetPlanningScene_Response;
    is_plain =
      (
      offsetof(DataType, success) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_handbot_interfaces
bool cdr_serialize_key_handbot_interfaces__srv__GetPlanningScene_Response(
  const handbot_interfaces__srv__GetPlanningScene_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: scene_world
  {
    cdr_serialize_key_moveit_msgs__msg__PlanningSceneWorld(
      &ros_message->scene_world, cdr);
  }

  // Field name: full_cloud
  {
    cdr_serialize_key_sensor_msgs__msg__PointCloud2(
      &ros_message->full_cloud, cdr);
  }

  // Field name: rgb_image
  {
    cdr_serialize_key_sensor_msgs__msg__Image(
      &ros_message->rgb_image, cdr);
  }

  // Field name: target_object_id
  {
    const rosidl_runtime_c__String * str = &ros_message->target_object_id;
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

  // Field name: support_surface_id
  {
    const rosidl_runtime_c__String * str = &ros_message->support_surface_id;
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

  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_handbot_interfaces
size_t get_serialized_size_key_handbot_interfaces__srv__GetPlanningScene_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetPlanningScene_Response__ros_msg_type * ros_message = static_cast<const _GetPlanningScene_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: scene_world
  current_alignment += get_serialized_size_key_moveit_msgs__msg__PlanningSceneWorld(
    &(ros_message->scene_world), current_alignment);

  // Field name: full_cloud
  current_alignment += get_serialized_size_key_sensor_msgs__msg__PointCloud2(
    &(ros_message->full_cloud), current_alignment);

  // Field name: rgb_image
  current_alignment += get_serialized_size_key_sensor_msgs__msg__Image(
    &(ros_message->rgb_image), current_alignment);

  // Field name: target_object_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->target_object_id.size + 1);

  // Field name: support_surface_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->support_surface_id.size + 1);

  // Field name: success
  {
    size_t item_size = sizeof(ros_message->success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_handbot_interfaces
size_t max_serialized_size_key_handbot_interfaces__srv__GetPlanningScene_Response(
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
  // Field name: scene_world
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_moveit_msgs__msg__PlanningSceneWorld(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: full_cloud
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_sensor_msgs__msg__PointCloud2(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: rgb_image
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_sensor_msgs__msg__Image(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: target_object_id
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

  // Field name: support_surface_id
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

  // Field name: success
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
    using DataType = handbot_interfaces__srv__GetPlanningScene_Response;
    is_plain =
      (
      offsetof(DataType, success) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _GetPlanningScene_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const handbot_interfaces__srv__GetPlanningScene_Response * ros_message = static_cast<const handbot_interfaces__srv__GetPlanningScene_Response *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_handbot_interfaces__srv__GetPlanningScene_Response(ros_message, cdr);
}

static bool _GetPlanningScene_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  handbot_interfaces__srv__GetPlanningScene_Response * ros_message = static_cast<handbot_interfaces__srv__GetPlanningScene_Response *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_handbot_interfaces__srv__GetPlanningScene_Response(cdr, ros_message);
}

static uint32_t _GetPlanningScene_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_handbot_interfaces__srv__GetPlanningScene_Response(
      untyped_ros_message, 0));
}

static size_t _GetPlanningScene_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_handbot_interfaces__srv__GetPlanningScene_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GetPlanningScene_Response = {
  "handbot_interfaces::srv",
  "GetPlanningScene_Response",
  _GetPlanningScene_Response__cdr_serialize,
  _GetPlanningScene_Response__cdr_deserialize,
  _GetPlanningScene_Response__get_serialized_size,
  _GetPlanningScene_Response__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _GetPlanningScene_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetPlanningScene_Response,
  get_message_typesupport_handle_function,
  &handbot_interfaces__srv__GetPlanningScene_Response__get_type_hash,
  &handbot_interfaces__srv__GetPlanningScene_Response__get_type_description,
  &handbot_interfaces__srv__GetPlanningScene_Response__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, handbot_interfaces, srv, GetPlanningScene_Response)() {
  return &_GetPlanningScene_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <cstddef>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "handbot_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "handbot_interfaces/srv/detail/get_planning_scene__struct.h"
// already included above
// #include "handbot_interfaces/srv/detail/get_planning_scene__functions.h"
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

#include "service_msgs/msg/detail/service_event_info__functions.h"  // info

// forward declare type support functions

bool cdr_serialize_handbot_interfaces__srv__GetPlanningScene_Request(
  const handbot_interfaces__srv__GetPlanningScene_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_handbot_interfaces__srv__GetPlanningScene_Request(
  eprosima::fastcdr::Cdr & cdr,
  handbot_interfaces__srv__GetPlanningScene_Request * ros_message);

size_t get_serialized_size_handbot_interfaces__srv__GetPlanningScene_Request(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_handbot_interfaces__srv__GetPlanningScene_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_handbot_interfaces__srv__GetPlanningScene_Request(
  const handbot_interfaces__srv__GetPlanningScene_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_handbot_interfaces__srv__GetPlanningScene_Request(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_handbot_interfaces__srv__GetPlanningScene_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, handbot_interfaces, srv, GetPlanningScene_Request)();

bool cdr_serialize_handbot_interfaces__srv__GetPlanningScene_Response(
  const handbot_interfaces__srv__GetPlanningScene_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_handbot_interfaces__srv__GetPlanningScene_Response(
  eprosima::fastcdr::Cdr & cdr,
  handbot_interfaces__srv__GetPlanningScene_Response * ros_message);

size_t get_serialized_size_handbot_interfaces__srv__GetPlanningScene_Response(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_handbot_interfaces__srv__GetPlanningScene_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_handbot_interfaces__srv__GetPlanningScene_Response(
  const handbot_interfaces__srv__GetPlanningScene_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_handbot_interfaces__srv__GetPlanningScene_Response(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_handbot_interfaces__srv__GetPlanningScene_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, handbot_interfaces, srv, GetPlanningScene_Response)();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_handbot_interfaces
bool cdr_serialize_service_msgs__msg__ServiceEventInfo(
  const service_msgs__msg__ServiceEventInfo * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_handbot_interfaces
bool cdr_deserialize_service_msgs__msg__ServiceEventInfo(
  eprosima::fastcdr::Cdr & cdr,
  service_msgs__msg__ServiceEventInfo * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_handbot_interfaces
size_t get_serialized_size_service_msgs__msg__ServiceEventInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_handbot_interfaces
size_t max_serialized_size_service_msgs__msg__ServiceEventInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_handbot_interfaces
bool cdr_serialize_key_service_msgs__msg__ServiceEventInfo(
  const service_msgs__msg__ServiceEventInfo * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_handbot_interfaces
size_t get_serialized_size_key_service_msgs__msg__ServiceEventInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_handbot_interfaces
size_t max_serialized_size_key_service_msgs__msg__ServiceEventInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_handbot_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, service_msgs, msg, ServiceEventInfo)();


using _GetPlanningScene_Event__ros_msg_type = handbot_interfaces__srv__GetPlanningScene_Event;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_handbot_interfaces
bool cdr_serialize_handbot_interfaces__srv__GetPlanningScene_Event(
  const handbot_interfaces__srv__GetPlanningScene_Event * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: info
  {
    cdr_serialize_service_msgs__msg__ServiceEventInfo(
      &ros_message->info, cdr);
  }

  // Field name: request
  {
    size_t size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_handbot_interfaces__srv__GetPlanningScene_Request(
        &array_ptr[i], cdr);
    }
  }

  // Field name: response
  {
    size_t size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_handbot_interfaces__srv__GetPlanningScene_Response(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_handbot_interfaces
bool cdr_deserialize_handbot_interfaces__srv__GetPlanningScene_Event(
  eprosima::fastcdr::Cdr & cdr,
  handbot_interfaces__srv__GetPlanningScene_Event * ros_message)
{
  // Field name: info
  {
    cdr_deserialize_service_msgs__msg__ServiceEventInfo(cdr, &ros_message->info);
  }

  // Field name: request
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->request.data) {
      handbot_interfaces__srv__GetPlanningScene_Request__Sequence__fini(&ros_message->request);
    }
    if (!handbot_interfaces__srv__GetPlanningScene_Request__Sequence__init(&ros_message->request, size)) {
      fprintf(stderr, "failed to create array for field 'request'");
      return false;
    }
    auto array_ptr = ros_message->request.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_handbot_interfaces__srv__GetPlanningScene_Request(cdr, &array_ptr[i]);
    }
  }

  // Field name: response
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->response.data) {
      handbot_interfaces__srv__GetPlanningScene_Response__Sequence__fini(&ros_message->response);
    }
    if (!handbot_interfaces__srv__GetPlanningScene_Response__Sequence__init(&ros_message->response, size)) {
      fprintf(stderr, "failed to create array for field 'response'");
      return false;
    }
    auto array_ptr = ros_message->response.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_handbot_interfaces__srv__GetPlanningScene_Response(cdr, &array_ptr[i]);
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_handbot_interfaces
size_t get_serialized_size_handbot_interfaces__srv__GetPlanningScene_Event(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetPlanningScene_Event__ros_msg_type * ros_message = static_cast<const _GetPlanningScene_Event__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: info
  current_alignment += get_serialized_size_service_msgs__msg__ServiceEventInfo(
    &(ros_message->info), current_alignment);

  // Field name: request
  {
    size_t array_size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_handbot_interfaces__srv__GetPlanningScene_Request(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: response
  {
    size_t array_size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_handbot_interfaces__srv__GetPlanningScene_Response(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_handbot_interfaces
size_t max_serialized_size_handbot_interfaces__srv__GetPlanningScene_Event(
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

  // Field name: info
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_service_msgs__msg__ServiceEventInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: request
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_handbot_interfaces__srv__GetPlanningScene_Request(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: response
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_handbot_interfaces__srv__GetPlanningScene_Response(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = handbot_interfaces__srv__GetPlanningScene_Event;
    is_plain =
      (
      offsetof(DataType, response) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_handbot_interfaces
bool cdr_serialize_key_handbot_interfaces__srv__GetPlanningScene_Event(
  const handbot_interfaces__srv__GetPlanningScene_Event * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: info
  {
    cdr_serialize_key_service_msgs__msg__ServiceEventInfo(
      &ros_message->info, cdr);
  }

  // Field name: request
  {
    size_t size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_handbot_interfaces__srv__GetPlanningScene_Request(
        &array_ptr[i], cdr);
    }
  }

  // Field name: response
  {
    size_t size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_handbot_interfaces__srv__GetPlanningScene_Response(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_handbot_interfaces
size_t get_serialized_size_key_handbot_interfaces__srv__GetPlanningScene_Event(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetPlanningScene_Event__ros_msg_type * ros_message = static_cast<const _GetPlanningScene_Event__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: info
  current_alignment += get_serialized_size_key_service_msgs__msg__ServiceEventInfo(
    &(ros_message->info), current_alignment);

  // Field name: request
  {
    size_t array_size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_handbot_interfaces__srv__GetPlanningScene_Request(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: response
  {
    size_t array_size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_handbot_interfaces__srv__GetPlanningScene_Response(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_handbot_interfaces
size_t max_serialized_size_key_handbot_interfaces__srv__GetPlanningScene_Event(
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
  // Field name: info
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_service_msgs__msg__ServiceEventInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: request
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_handbot_interfaces__srv__GetPlanningScene_Request(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: response
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_handbot_interfaces__srv__GetPlanningScene_Response(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = handbot_interfaces__srv__GetPlanningScene_Event;
    is_plain =
      (
      offsetof(DataType, response) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _GetPlanningScene_Event__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const handbot_interfaces__srv__GetPlanningScene_Event * ros_message = static_cast<const handbot_interfaces__srv__GetPlanningScene_Event *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_handbot_interfaces__srv__GetPlanningScene_Event(ros_message, cdr);
}

static bool _GetPlanningScene_Event__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  handbot_interfaces__srv__GetPlanningScene_Event * ros_message = static_cast<handbot_interfaces__srv__GetPlanningScene_Event *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_handbot_interfaces__srv__GetPlanningScene_Event(cdr, ros_message);
}

static uint32_t _GetPlanningScene_Event__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_handbot_interfaces__srv__GetPlanningScene_Event(
      untyped_ros_message, 0));
}

static size_t _GetPlanningScene_Event__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_handbot_interfaces__srv__GetPlanningScene_Event(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GetPlanningScene_Event = {
  "handbot_interfaces::srv",
  "GetPlanningScene_Event",
  _GetPlanningScene_Event__cdr_serialize,
  _GetPlanningScene_Event__cdr_deserialize,
  _GetPlanningScene_Event__get_serialized_size,
  _GetPlanningScene_Event__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _GetPlanningScene_Event__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetPlanningScene_Event,
  get_message_typesupport_handle_function,
  &handbot_interfaces__srv__GetPlanningScene_Event__get_type_hash,
  &handbot_interfaces__srv__GetPlanningScene_Event__get_type_description,
  &handbot_interfaces__srv__GetPlanningScene_Event__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, handbot_interfaces, srv, GetPlanningScene_Event)() {
  return &_GetPlanningScene_Event__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "handbot_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "handbot_interfaces/srv/get_planning_scene.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t GetPlanningScene__callbacks = {
  "handbot_interfaces::srv",
  "GetPlanningScene",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, handbot_interfaces, srv, GetPlanningScene_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, handbot_interfaces, srv, GetPlanningScene_Response)(),
};

static rosidl_service_type_support_t GetPlanningScene__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &GetPlanningScene__callbacks,
  get_service_typesupport_handle_function,
  &_GetPlanningScene_Request__type_support,
  &_GetPlanningScene_Response__type_support,
  &_GetPlanningScene_Event__type_support,
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

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, handbot_interfaces, srv, GetPlanningScene)() {
  return &GetPlanningScene__handle;
}

#if defined(__cplusplus)
}
#endif
