// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from handbot_interfaces:srv/GetPlanningScene.idl
// generated code does not contain a copyright notice
#include "handbot_interfaces/srv/detail/get_planning_scene__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `target_shape`
#include "rosidl_runtime_c/string_functions.h"
// Member `target_dimensions`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
handbot_interfaces__srv__GetPlanningScene_Request__init(handbot_interfaces__srv__GetPlanningScene_Request * msg)
{
  if (!msg) {
    return false;
  }
  // target_shape
  if (!rosidl_runtime_c__String__init(&msg->target_shape)) {
    handbot_interfaces__srv__GetPlanningScene_Request__fini(msg);
    return false;
  }
  // target_dimensions
  if (!rosidl_runtime_c__double__Sequence__init(&msg->target_dimensions, 0)) {
    handbot_interfaces__srv__GetPlanningScene_Request__fini(msg);
    return false;
  }
  return true;
}

void
handbot_interfaces__srv__GetPlanningScene_Request__fini(handbot_interfaces__srv__GetPlanningScene_Request * msg)
{
  if (!msg) {
    return;
  }
  // target_shape
  rosidl_runtime_c__String__fini(&msg->target_shape);
  // target_dimensions
  rosidl_runtime_c__double__Sequence__fini(&msg->target_dimensions);
}

bool
handbot_interfaces__srv__GetPlanningScene_Request__are_equal(const handbot_interfaces__srv__GetPlanningScene_Request * lhs, const handbot_interfaces__srv__GetPlanningScene_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // target_shape
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->target_shape), &(rhs->target_shape)))
  {
    return false;
  }
  // target_dimensions
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->target_dimensions), &(rhs->target_dimensions)))
  {
    return false;
  }
  return true;
}

bool
handbot_interfaces__srv__GetPlanningScene_Request__copy(
  const handbot_interfaces__srv__GetPlanningScene_Request * input,
  handbot_interfaces__srv__GetPlanningScene_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // target_shape
  if (!rosidl_runtime_c__String__copy(
      &(input->target_shape), &(output->target_shape)))
  {
    return false;
  }
  // target_dimensions
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->target_dimensions), &(output->target_dimensions)))
  {
    return false;
  }
  return true;
}

handbot_interfaces__srv__GetPlanningScene_Request *
handbot_interfaces__srv__GetPlanningScene_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  handbot_interfaces__srv__GetPlanningScene_Request * msg = (handbot_interfaces__srv__GetPlanningScene_Request *)allocator.allocate(sizeof(handbot_interfaces__srv__GetPlanningScene_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(handbot_interfaces__srv__GetPlanningScene_Request));
  bool success = handbot_interfaces__srv__GetPlanningScene_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
handbot_interfaces__srv__GetPlanningScene_Request__destroy(handbot_interfaces__srv__GetPlanningScene_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    handbot_interfaces__srv__GetPlanningScene_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
handbot_interfaces__srv__GetPlanningScene_Request__Sequence__init(handbot_interfaces__srv__GetPlanningScene_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  handbot_interfaces__srv__GetPlanningScene_Request * data = NULL;

  if (size) {
    data = (handbot_interfaces__srv__GetPlanningScene_Request *)allocator.zero_allocate(size, sizeof(handbot_interfaces__srv__GetPlanningScene_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = handbot_interfaces__srv__GetPlanningScene_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        handbot_interfaces__srv__GetPlanningScene_Request__fini(&data[i - 1]);
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
handbot_interfaces__srv__GetPlanningScene_Request__Sequence__fini(handbot_interfaces__srv__GetPlanningScene_Request__Sequence * array)
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
      handbot_interfaces__srv__GetPlanningScene_Request__fini(&array->data[i]);
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

handbot_interfaces__srv__GetPlanningScene_Request__Sequence *
handbot_interfaces__srv__GetPlanningScene_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  handbot_interfaces__srv__GetPlanningScene_Request__Sequence * array = (handbot_interfaces__srv__GetPlanningScene_Request__Sequence *)allocator.allocate(sizeof(handbot_interfaces__srv__GetPlanningScene_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = handbot_interfaces__srv__GetPlanningScene_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
handbot_interfaces__srv__GetPlanningScene_Request__Sequence__destroy(handbot_interfaces__srv__GetPlanningScene_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    handbot_interfaces__srv__GetPlanningScene_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
handbot_interfaces__srv__GetPlanningScene_Request__Sequence__are_equal(const handbot_interfaces__srv__GetPlanningScene_Request__Sequence * lhs, const handbot_interfaces__srv__GetPlanningScene_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!handbot_interfaces__srv__GetPlanningScene_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
handbot_interfaces__srv__GetPlanningScene_Request__Sequence__copy(
  const handbot_interfaces__srv__GetPlanningScene_Request__Sequence * input,
  handbot_interfaces__srv__GetPlanningScene_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(handbot_interfaces__srv__GetPlanningScene_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    handbot_interfaces__srv__GetPlanningScene_Request * data =
      (handbot_interfaces__srv__GetPlanningScene_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!handbot_interfaces__srv__GetPlanningScene_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          handbot_interfaces__srv__GetPlanningScene_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!handbot_interfaces__srv__GetPlanningScene_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `scene_world`
#include "moveit_msgs/msg/detail/planning_scene_world__functions.h"
// Member `full_cloud`
#include "sensor_msgs/msg/detail/point_cloud2__functions.h"
// Member `rgb_image`
#include "sensor_msgs/msg/detail/image__functions.h"
// Member `target_object_id`
// Member `support_surface_id`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
handbot_interfaces__srv__GetPlanningScene_Response__init(handbot_interfaces__srv__GetPlanningScene_Response * msg)
{
  if (!msg) {
    return false;
  }
  // scene_world
  if (!moveit_msgs__msg__PlanningSceneWorld__init(&msg->scene_world)) {
    handbot_interfaces__srv__GetPlanningScene_Response__fini(msg);
    return false;
  }
  // full_cloud
  if (!sensor_msgs__msg__PointCloud2__init(&msg->full_cloud)) {
    handbot_interfaces__srv__GetPlanningScene_Response__fini(msg);
    return false;
  }
  // rgb_image
  if (!sensor_msgs__msg__Image__init(&msg->rgb_image)) {
    handbot_interfaces__srv__GetPlanningScene_Response__fini(msg);
    return false;
  }
  // target_object_id
  if (!rosidl_runtime_c__String__init(&msg->target_object_id)) {
    handbot_interfaces__srv__GetPlanningScene_Response__fini(msg);
    return false;
  }
  // support_surface_id
  if (!rosidl_runtime_c__String__init(&msg->support_surface_id)) {
    handbot_interfaces__srv__GetPlanningScene_Response__fini(msg);
    return false;
  }
  // success
  return true;
}

void
handbot_interfaces__srv__GetPlanningScene_Response__fini(handbot_interfaces__srv__GetPlanningScene_Response * msg)
{
  if (!msg) {
    return;
  }
  // scene_world
  moveit_msgs__msg__PlanningSceneWorld__fini(&msg->scene_world);
  // full_cloud
  sensor_msgs__msg__PointCloud2__fini(&msg->full_cloud);
  // rgb_image
  sensor_msgs__msg__Image__fini(&msg->rgb_image);
  // target_object_id
  rosidl_runtime_c__String__fini(&msg->target_object_id);
  // support_surface_id
  rosidl_runtime_c__String__fini(&msg->support_surface_id);
  // success
}

bool
handbot_interfaces__srv__GetPlanningScene_Response__are_equal(const handbot_interfaces__srv__GetPlanningScene_Response * lhs, const handbot_interfaces__srv__GetPlanningScene_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // scene_world
  if (!moveit_msgs__msg__PlanningSceneWorld__are_equal(
      &(lhs->scene_world), &(rhs->scene_world)))
  {
    return false;
  }
  // full_cloud
  if (!sensor_msgs__msg__PointCloud2__are_equal(
      &(lhs->full_cloud), &(rhs->full_cloud)))
  {
    return false;
  }
  // rgb_image
  if (!sensor_msgs__msg__Image__are_equal(
      &(lhs->rgb_image), &(rhs->rgb_image)))
  {
    return false;
  }
  // target_object_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->target_object_id), &(rhs->target_object_id)))
  {
    return false;
  }
  // support_surface_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->support_surface_id), &(rhs->support_surface_id)))
  {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
handbot_interfaces__srv__GetPlanningScene_Response__copy(
  const handbot_interfaces__srv__GetPlanningScene_Response * input,
  handbot_interfaces__srv__GetPlanningScene_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // scene_world
  if (!moveit_msgs__msg__PlanningSceneWorld__copy(
      &(input->scene_world), &(output->scene_world)))
  {
    return false;
  }
  // full_cloud
  if (!sensor_msgs__msg__PointCloud2__copy(
      &(input->full_cloud), &(output->full_cloud)))
  {
    return false;
  }
  // rgb_image
  if (!sensor_msgs__msg__Image__copy(
      &(input->rgb_image), &(output->rgb_image)))
  {
    return false;
  }
  // target_object_id
  if (!rosidl_runtime_c__String__copy(
      &(input->target_object_id), &(output->target_object_id)))
  {
    return false;
  }
  // support_surface_id
  if (!rosidl_runtime_c__String__copy(
      &(input->support_surface_id), &(output->support_surface_id)))
  {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

handbot_interfaces__srv__GetPlanningScene_Response *
handbot_interfaces__srv__GetPlanningScene_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  handbot_interfaces__srv__GetPlanningScene_Response * msg = (handbot_interfaces__srv__GetPlanningScene_Response *)allocator.allocate(sizeof(handbot_interfaces__srv__GetPlanningScene_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(handbot_interfaces__srv__GetPlanningScene_Response));
  bool success = handbot_interfaces__srv__GetPlanningScene_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
handbot_interfaces__srv__GetPlanningScene_Response__destroy(handbot_interfaces__srv__GetPlanningScene_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    handbot_interfaces__srv__GetPlanningScene_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
handbot_interfaces__srv__GetPlanningScene_Response__Sequence__init(handbot_interfaces__srv__GetPlanningScene_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  handbot_interfaces__srv__GetPlanningScene_Response * data = NULL;

  if (size) {
    data = (handbot_interfaces__srv__GetPlanningScene_Response *)allocator.zero_allocate(size, sizeof(handbot_interfaces__srv__GetPlanningScene_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = handbot_interfaces__srv__GetPlanningScene_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        handbot_interfaces__srv__GetPlanningScene_Response__fini(&data[i - 1]);
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
handbot_interfaces__srv__GetPlanningScene_Response__Sequence__fini(handbot_interfaces__srv__GetPlanningScene_Response__Sequence * array)
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
      handbot_interfaces__srv__GetPlanningScene_Response__fini(&array->data[i]);
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

handbot_interfaces__srv__GetPlanningScene_Response__Sequence *
handbot_interfaces__srv__GetPlanningScene_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  handbot_interfaces__srv__GetPlanningScene_Response__Sequence * array = (handbot_interfaces__srv__GetPlanningScene_Response__Sequence *)allocator.allocate(sizeof(handbot_interfaces__srv__GetPlanningScene_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = handbot_interfaces__srv__GetPlanningScene_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
handbot_interfaces__srv__GetPlanningScene_Response__Sequence__destroy(handbot_interfaces__srv__GetPlanningScene_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    handbot_interfaces__srv__GetPlanningScene_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
handbot_interfaces__srv__GetPlanningScene_Response__Sequence__are_equal(const handbot_interfaces__srv__GetPlanningScene_Response__Sequence * lhs, const handbot_interfaces__srv__GetPlanningScene_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!handbot_interfaces__srv__GetPlanningScene_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
handbot_interfaces__srv__GetPlanningScene_Response__Sequence__copy(
  const handbot_interfaces__srv__GetPlanningScene_Response__Sequence * input,
  handbot_interfaces__srv__GetPlanningScene_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(handbot_interfaces__srv__GetPlanningScene_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    handbot_interfaces__srv__GetPlanningScene_Response * data =
      (handbot_interfaces__srv__GetPlanningScene_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!handbot_interfaces__srv__GetPlanningScene_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          handbot_interfaces__srv__GetPlanningScene_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!handbot_interfaces__srv__GetPlanningScene_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "handbot_interfaces/srv/detail/get_planning_scene__functions.h"

bool
handbot_interfaces__srv__GetPlanningScene_Event__init(handbot_interfaces__srv__GetPlanningScene_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    handbot_interfaces__srv__GetPlanningScene_Event__fini(msg);
    return false;
  }
  // request
  if (!handbot_interfaces__srv__GetPlanningScene_Request__Sequence__init(&msg->request, 0)) {
    handbot_interfaces__srv__GetPlanningScene_Event__fini(msg);
    return false;
  }
  // response
  if (!handbot_interfaces__srv__GetPlanningScene_Response__Sequence__init(&msg->response, 0)) {
    handbot_interfaces__srv__GetPlanningScene_Event__fini(msg);
    return false;
  }
  return true;
}

void
handbot_interfaces__srv__GetPlanningScene_Event__fini(handbot_interfaces__srv__GetPlanningScene_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  handbot_interfaces__srv__GetPlanningScene_Request__Sequence__fini(&msg->request);
  // response
  handbot_interfaces__srv__GetPlanningScene_Response__Sequence__fini(&msg->response);
}

bool
handbot_interfaces__srv__GetPlanningScene_Event__are_equal(const handbot_interfaces__srv__GetPlanningScene_Event * lhs, const handbot_interfaces__srv__GetPlanningScene_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!handbot_interfaces__srv__GetPlanningScene_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!handbot_interfaces__srv__GetPlanningScene_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
handbot_interfaces__srv__GetPlanningScene_Event__copy(
  const handbot_interfaces__srv__GetPlanningScene_Event * input,
  handbot_interfaces__srv__GetPlanningScene_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!handbot_interfaces__srv__GetPlanningScene_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!handbot_interfaces__srv__GetPlanningScene_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

handbot_interfaces__srv__GetPlanningScene_Event *
handbot_interfaces__srv__GetPlanningScene_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  handbot_interfaces__srv__GetPlanningScene_Event * msg = (handbot_interfaces__srv__GetPlanningScene_Event *)allocator.allocate(sizeof(handbot_interfaces__srv__GetPlanningScene_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(handbot_interfaces__srv__GetPlanningScene_Event));
  bool success = handbot_interfaces__srv__GetPlanningScene_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
handbot_interfaces__srv__GetPlanningScene_Event__destroy(handbot_interfaces__srv__GetPlanningScene_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    handbot_interfaces__srv__GetPlanningScene_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
handbot_interfaces__srv__GetPlanningScene_Event__Sequence__init(handbot_interfaces__srv__GetPlanningScene_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  handbot_interfaces__srv__GetPlanningScene_Event * data = NULL;

  if (size) {
    data = (handbot_interfaces__srv__GetPlanningScene_Event *)allocator.zero_allocate(size, sizeof(handbot_interfaces__srv__GetPlanningScene_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = handbot_interfaces__srv__GetPlanningScene_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        handbot_interfaces__srv__GetPlanningScene_Event__fini(&data[i - 1]);
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
handbot_interfaces__srv__GetPlanningScene_Event__Sequence__fini(handbot_interfaces__srv__GetPlanningScene_Event__Sequence * array)
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
      handbot_interfaces__srv__GetPlanningScene_Event__fini(&array->data[i]);
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

handbot_interfaces__srv__GetPlanningScene_Event__Sequence *
handbot_interfaces__srv__GetPlanningScene_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  handbot_interfaces__srv__GetPlanningScene_Event__Sequence * array = (handbot_interfaces__srv__GetPlanningScene_Event__Sequence *)allocator.allocate(sizeof(handbot_interfaces__srv__GetPlanningScene_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = handbot_interfaces__srv__GetPlanningScene_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
handbot_interfaces__srv__GetPlanningScene_Event__Sequence__destroy(handbot_interfaces__srv__GetPlanningScene_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    handbot_interfaces__srv__GetPlanningScene_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
handbot_interfaces__srv__GetPlanningScene_Event__Sequence__are_equal(const handbot_interfaces__srv__GetPlanningScene_Event__Sequence * lhs, const handbot_interfaces__srv__GetPlanningScene_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!handbot_interfaces__srv__GetPlanningScene_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
handbot_interfaces__srv__GetPlanningScene_Event__Sequence__copy(
  const handbot_interfaces__srv__GetPlanningScene_Event__Sequence * input,
  handbot_interfaces__srv__GetPlanningScene_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(handbot_interfaces__srv__GetPlanningScene_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    handbot_interfaces__srv__GetPlanningScene_Event * data =
      (handbot_interfaces__srv__GetPlanningScene_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!handbot_interfaces__srv__GetPlanningScene_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          handbot_interfaces__srv__GetPlanningScene_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!handbot_interfaces__srv__GetPlanningScene_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
