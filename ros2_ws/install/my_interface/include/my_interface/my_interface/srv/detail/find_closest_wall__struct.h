// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_interface:srv/FindClosestWall.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERFACE__SRV__DETAIL__FIND_CLOSEST_WALL__STRUCT_H_
#define MY_INTERFACE__SRV__DETAIL__FIND_CLOSEST_WALL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/FindClosestWall in the package my_interface.
typedef struct my_interface__srv__FindClosestWall_Request
{
  uint8_t structure_needs_at_least_one_member;
} my_interface__srv__FindClosestWall_Request;

// Struct for a sequence of my_interface__srv__FindClosestWall_Request.
typedef struct my_interface__srv__FindClosestWall_Request__Sequence
{
  my_interface__srv__FindClosestWall_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_interface__srv__FindClosestWall_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/FindClosestWall in the package my_interface.
typedef struct my_interface__srv__FindClosestWall_Response
{
  bool success;
} my_interface__srv__FindClosestWall_Response;

// Struct for a sequence of my_interface__srv__FindClosestWall_Response.
typedef struct my_interface__srv__FindClosestWall_Response__Sequence
{
  my_interface__srv__FindClosestWall_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_interface__srv__FindClosestWall_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_INTERFACE__SRV__DETAIL__FIND_CLOSEST_WALL__STRUCT_H_
