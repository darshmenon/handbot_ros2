// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from handbot_interfaces:srv/GetPlanningScene.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "handbot_interfaces/srv/get_planning_scene.hpp"


#ifndef handbot_INTERFACES__SRV__DETAIL__GET_PLANNING_SCENE__STRUCT_HPP_
#define handbot_INTERFACES__SRV__DETAIL__GET_PLANNING_SCENE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__handbot_interfaces__srv__GetPlanningScene_Request __attribute__((deprecated))
#else
# define DEPRECATED__handbot_interfaces__srv__GetPlanningScene_Request __declspec(deprecated)
#endif

namespace handbot_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetPlanningScene_Request_
{
  using Type = GetPlanningScene_Request_<ContainerAllocator>;

  explicit GetPlanningScene_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->target_shape = "";
    }
  }

  explicit GetPlanningScene_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : target_shape(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->target_shape = "";
    }
  }

  // field types and members
  using _target_shape_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _target_shape_type target_shape;
  using _target_dimensions_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _target_dimensions_type target_dimensions;

  // setters for named parameter idiom
  Type & set__target_shape(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->target_shape = _arg;
    return *this;
  }
  Type & set__target_dimensions(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->target_dimensions = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    handbot_interfaces::srv::GetPlanningScene_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const handbot_interfaces::srv::GetPlanningScene_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<handbot_interfaces::srv::GetPlanningScene_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<handbot_interfaces::srv::GetPlanningScene_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      handbot_interfaces::srv::GetPlanningScene_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<handbot_interfaces::srv::GetPlanningScene_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      handbot_interfaces::srv::GetPlanningScene_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<handbot_interfaces::srv::GetPlanningScene_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<handbot_interfaces::srv::GetPlanningScene_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<handbot_interfaces::srv::GetPlanningScene_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__handbot_interfaces__srv__GetPlanningScene_Request
    std::shared_ptr<handbot_interfaces::srv::GetPlanningScene_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__handbot_interfaces__srv__GetPlanningScene_Request
    std::shared_ptr<handbot_interfaces::srv::GetPlanningScene_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetPlanningScene_Request_ & other) const
  {
    if (this->target_shape != other.target_shape) {
      return false;
    }
    if (this->target_dimensions != other.target_dimensions) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetPlanningScene_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetPlanningScene_Request_

// alias to use template instance with default allocator
using GetPlanningScene_Request =
  handbot_interfaces::srv::GetPlanningScene_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace handbot_interfaces


// Include directives for member types
// Member 'scene_world'
#include "moveit_msgs/msg/detail/planning_scene_world__struct.hpp"
// Member 'full_cloud'
#include "sensor_msgs/msg/detail/point_cloud2__struct.hpp"
// Member 'rgb_image'
#include "sensor_msgs/msg/detail/image__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__handbot_interfaces__srv__GetPlanningScene_Response __attribute__((deprecated))
#else
# define DEPRECATED__handbot_interfaces__srv__GetPlanningScene_Response __declspec(deprecated)
#endif

namespace handbot_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetPlanningScene_Response_
{
  using Type = GetPlanningScene_Response_<ContainerAllocator>;

  explicit GetPlanningScene_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : scene_world(_init),
    full_cloud(_init),
    rgb_image(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->target_object_id = "";
      this->support_surface_id = "";
      this->success = false;
    }
  }

  explicit GetPlanningScene_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : scene_world(_alloc, _init),
    full_cloud(_alloc, _init),
    rgb_image(_alloc, _init),
    target_object_id(_alloc),
    support_surface_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->target_object_id = "";
      this->support_surface_id = "";
      this->success = false;
    }
  }

  // field types and members
  using _scene_world_type =
    moveit_msgs::msg::PlanningSceneWorld_<ContainerAllocator>;
  _scene_world_type scene_world;
  using _full_cloud_type =
    sensor_msgs::msg::PointCloud2_<ContainerAllocator>;
  _full_cloud_type full_cloud;
  using _rgb_image_type =
    sensor_msgs::msg::Image_<ContainerAllocator>;
  _rgb_image_type rgb_image;
  using _target_object_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _target_object_id_type target_object_id;
  using _support_surface_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _support_surface_id_type support_surface_id;
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__scene_world(
    const moveit_msgs::msg::PlanningSceneWorld_<ContainerAllocator> & _arg)
  {
    this->scene_world = _arg;
    return *this;
  }
  Type & set__full_cloud(
    const sensor_msgs::msg::PointCloud2_<ContainerAllocator> & _arg)
  {
    this->full_cloud = _arg;
    return *this;
  }
  Type & set__rgb_image(
    const sensor_msgs::msg::Image_<ContainerAllocator> & _arg)
  {
    this->rgb_image = _arg;
    return *this;
  }
  Type & set__target_object_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->target_object_id = _arg;
    return *this;
  }
  Type & set__support_surface_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->support_surface_id = _arg;
    return *this;
  }
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    handbot_interfaces::srv::GetPlanningScene_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const handbot_interfaces::srv::GetPlanningScene_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<handbot_interfaces::srv::GetPlanningScene_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<handbot_interfaces::srv::GetPlanningScene_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      handbot_interfaces::srv::GetPlanningScene_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<handbot_interfaces::srv::GetPlanningScene_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      handbot_interfaces::srv::GetPlanningScene_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<handbot_interfaces::srv::GetPlanningScene_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<handbot_interfaces::srv::GetPlanningScene_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<handbot_interfaces::srv::GetPlanningScene_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__handbot_interfaces__srv__GetPlanningScene_Response
    std::shared_ptr<handbot_interfaces::srv::GetPlanningScene_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__handbot_interfaces__srv__GetPlanningScene_Response
    std::shared_ptr<handbot_interfaces::srv::GetPlanningScene_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetPlanningScene_Response_ & other) const
  {
    if (this->scene_world != other.scene_world) {
      return false;
    }
    if (this->full_cloud != other.full_cloud) {
      return false;
    }
    if (this->rgb_image != other.rgb_image) {
      return false;
    }
    if (this->target_object_id != other.target_object_id) {
      return false;
    }
    if (this->support_surface_id != other.support_surface_id) {
      return false;
    }
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetPlanningScene_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetPlanningScene_Response_

// alias to use template instance with default allocator
using GetPlanningScene_Response =
  handbot_interfaces::srv::GetPlanningScene_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace handbot_interfaces


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__handbot_interfaces__srv__GetPlanningScene_Event __attribute__((deprecated))
#else
# define DEPRECATED__handbot_interfaces__srv__GetPlanningScene_Event __declspec(deprecated)
#endif

namespace handbot_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetPlanningScene_Event_
{
  using Type = GetPlanningScene_Event_<ContainerAllocator>;

  explicit GetPlanningScene_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit GetPlanningScene_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<handbot_interfaces::srv::GetPlanningScene_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<handbot_interfaces::srv::GetPlanningScene_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<handbot_interfaces::srv::GetPlanningScene_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<handbot_interfaces::srv::GetPlanningScene_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<handbot_interfaces::srv::GetPlanningScene_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<handbot_interfaces::srv::GetPlanningScene_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<handbot_interfaces::srv::GetPlanningScene_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<handbot_interfaces::srv::GetPlanningScene_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    handbot_interfaces::srv::GetPlanningScene_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const handbot_interfaces::srv::GetPlanningScene_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<handbot_interfaces::srv::GetPlanningScene_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<handbot_interfaces::srv::GetPlanningScene_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      handbot_interfaces::srv::GetPlanningScene_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<handbot_interfaces::srv::GetPlanningScene_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      handbot_interfaces::srv::GetPlanningScene_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<handbot_interfaces::srv::GetPlanningScene_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<handbot_interfaces::srv::GetPlanningScene_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<handbot_interfaces::srv::GetPlanningScene_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__handbot_interfaces__srv__GetPlanningScene_Event
    std::shared_ptr<handbot_interfaces::srv::GetPlanningScene_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__handbot_interfaces__srv__GetPlanningScene_Event
    std::shared_ptr<handbot_interfaces::srv::GetPlanningScene_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetPlanningScene_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetPlanningScene_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetPlanningScene_Event_

// alias to use template instance with default allocator
using GetPlanningScene_Event =
  handbot_interfaces::srv::GetPlanningScene_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace handbot_interfaces

namespace handbot_interfaces
{

namespace srv
{

struct GetPlanningScene
{
  using Request = handbot_interfaces::srv::GetPlanningScene_Request;
  using Response = handbot_interfaces::srv::GetPlanningScene_Response;
  using Event = handbot_interfaces::srv::GetPlanningScene_Event;
};

}  // namespace srv

}  // namespace handbot_interfaces

#endif  // handbot_INTERFACES__SRV__DETAIL__GET_PLANNING_SCENE__STRUCT_HPP_
