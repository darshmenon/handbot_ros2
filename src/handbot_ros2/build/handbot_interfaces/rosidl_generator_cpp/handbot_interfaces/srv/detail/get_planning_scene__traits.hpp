// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from handbot_interfaces:srv/GetPlanningScene.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "handbot_interfaces/srv/get_planning_scene.hpp"


#ifndef handbot_INTERFACES__SRV__DETAIL__GET_PLANNING_SCENE__TRAITS_HPP_
#define handbot_INTERFACES__SRV__DETAIL__GET_PLANNING_SCENE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "handbot_interfaces/srv/detail/get_planning_scene__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace handbot_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetPlanningScene_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: target_shape
  {
    out << "target_shape: ";
    rosidl_generator_traits::value_to_yaml(msg.target_shape, out);
    out << ", ";
  }

  // member: target_dimensions
  {
    if (msg.target_dimensions.size() == 0) {
      out << "target_dimensions: []";
    } else {
      out << "target_dimensions: [";
      size_t pending_items = msg.target_dimensions.size();
      for (auto item : msg.target_dimensions) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetPlanningScene_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: target_shape
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_shape: ";
    rosidl_generator_traits::value_to_yaml(msg.target_shape, out);
    out << "\n";
  }

  // member: target_dimensions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.target_dimensions.size() == 0) {
      out << "target_dimensions: []\n";
    } else {
      out << "target_dimensions:\n";
      for (auto item : msg.target_dimensions) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetPlanningScene_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace handbot_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use handbot_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const handbot_interfaces::srv::GetPlanningScene_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  handbot_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use handbot_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const handbot_interfaces::srv::GetPlanningScene_Request & msg)
{
  return handbot_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<handbot_interfaces::srv::GetPlanningScene_Request>()
{
  return "handbot_interfaces::srv::GetPlanningScene_Request";
}

template<>
inline const char * name<handbot_interfaces::srv::GetPlanningScene_Request>()
{
  return "handbot_interfaces/srv/GetPlanningScene_Request";
}

template<>
struct has_fixed_size<handbot_interfaces::srv::GetPlanningScene_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<handbot_interfaces::srv::GetPlanningScene_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<handbot_interfaces::srv::GetPlanningScene_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'scene_world'
#include "moveit_msgs/msg/detail/planning_scene_world__traits.hpp"
// Member 'full_cloud'
#include "sensor_msgs/msg/detail/point_cloud2__traits.hpp"
// Member 'rgb_image'
#include "sensor_msgs/msg/detail/image__traits.hpp"

namespace handbot_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetPlanningScene_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: scene_world
  {
    out << "scene_world: ";
    to_flow_style_yaml(msg.scene_world, out);
    out << ", ";
  }

  // member: full_cloud
  {
    out << "full_cloud: ";
    to_flow_style_yaml(msg.full_cloud, out);
    out << ", ";
  }

  // member: rgb_image
  {
    out << "rgb_image: ";
    to_flow_style_yaml(msg.rgb_image, out);
    out << ", ";
  }

  // member: target_object_id
  {
    out << "target_object_id: ";
    rosidl_generator_traits::value_to_yaml(msg.target_object_id, out);
    out << ", ";
  }

  // member: support_surface_id
  {
    out << "support_surface_id: ";
    rosidl_generator_traits::value_to_yaml(msg.support_surface_id, out);
    out << ", ";
  }

  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetPlanningScene_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: scene_world
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "scene_world:\n";
    to_block_style_yaml(msg.scene_world, out, indentation + 2);
  }

  // member: full_cloud
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "full_cloud:\n";
    to_block_style_yaml(msg.full_cloud, out, indentation + 2);
  }

  // member: rgb_image
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rgb_image:\n";
    to_block_style_yaml(msg.rgb_image, out, indentation + 2);
  }

  // member: target_object_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_object_id: ";
    rosidl_generator_traits::value_to_yaml(msg.target_object_id, out);
    out << "\n";
  }

  // member: support_surface_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "support_surface_id: ";
    rosidl_generator_traits::value_to_yaml(msg.support_surface_id, out);
    out << "\n";
  }

  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetPlanningScene_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace handbot_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use handbot_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const handbot_interfaces::srv::GetPlanningScene_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  handbot_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use handbot_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const handbot_interfaces::srv::GetPlanningScene_Response & msg)
{
  return handbot_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<handbot_interfaces::srv::GetPlanningScene_Response>()
{
  return "handbot_interfaces::srv::GetPlanningScene_Response";
}

template<>
inline const char * name<handbot_interfaces::srv::GetPlanningScene_Response>()
{
  return "handbot_interfaces/srv/GetPlanningScene_Response";
}

template<>
struct has_fixed_size<handbot_interfaces::srv::GetPlanningScene_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<handbot_interfaces::srv::GetPlanningScene_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<handbot_interfaces::srv::GetPlanningScene_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace handbot_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetPlanningScene_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetPlanningScene_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetPlanningScene_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace handbot_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use handbot_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const handbot_interfaces::srv::GetPlanningScene_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  handbot_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use handbot_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const handbot_interfaces::srv::GetPlanningScene_Event & msg)
{
  return handbot_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<handbot_interfaces::srv::GetPlanningScene_Event>()
{
  return "handbot_interfaces::srv::GetPlanningScene_Event";
}

template<>
inline const char * name<handbot_interfaces::srv::GetPlanningScene_Event>()
{
  return "handbot_interfaces/srv/GetPlanningScene_Event";
}

template<>
struct has_fixed_size<handbot_interfaces::srv::GetPlanningScene_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<handbot_interfaces::srv::GetPlanningScene_Event>
  : std::integral_constant<bool, has_bounded_size<handbot_interfaces::srv::GetPlanningScene_Request>::value && has_bounded_size<handbot_interfaces::srv::GetPlanningScene_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<handbot_interfaces::srv::GetPlanningScene_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<handbot_interfaces::srv::GetPlanningScene>()
{
  return "handbot_interfaces::srv::GetPlanningScene";
}

template<>
inline const char * name<handbot_interfaces::srv::GetPlanningScene>()
{
  return "handbot_interfaces/srv/GetPlanningScene";
}

template<>
struct has_fixed_size<handbot_interfaces::srv::GetPlanningScene>
  : std::integral_constant<
    bool,
    has_fixed_size<handbot_interfaces::srv::GetPlanningScene_Request>::value &&
    has_fixed_size<handbot_interfaces::srv::GetPlanningScene_Response>::value
  >
{
};

template<>
struct has_bounded_size<handbot_interfaces::srv::GetPlanningScene>
  : std::integral_constant<
    bool,
    has_bounded_size<handbot_interfaces::srv::GetPlanningScene_Request>::value &&
    has_bounded_size<handbot_interfaces::srv::GetPlanningScene_Response>::value
  >
{
};

template<>
struct is_service<handbot_interfaces::srv::GetPlanningScene>
  : std::true_type
{
};

template<>
struct is_service_request<handbot_interfaces::srv::GetPlanningScene_Request>
  : std::true_type
{
};

template<>
struct is_service_response<handbot_interfaces::srv::GetPlanningScene_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // handbot_INTERFACES__SRV__DETAIL__GET_PLANNING_SCENE__TRAITS_HPP_
