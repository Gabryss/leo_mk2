// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from leo_msgs:msg/WheelStates.idl
// generated code does not contain a copyright notice

#ifndef LEO_MSGS__MSG__DETAIL__WHEEL_STATES__STRUCT_H_
#define LEO_MSGS__MSG__DETAIL__WHEEL_STATES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

// Struct defined in msg/WheelStates in the package leo_msgs.
typedef struct leo_msgs__msg__WheelStates
{
  builtin_interfaces__msg__Time stamp;
  float position[4];
  float velocity[4];
  float torque[4];
  float pwm_duty_cycle[4];
} leo_msgs__msg__WheelStates;

// Struct for a sequence of leo_msgs__msg__WheelStates.
typedef struct leo_msgs__msg__WheelStates__Sequence
{
  leo_msgs__msg__WheelStates * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} leo_msgs__msg__WheelStates__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LEO_MSGS__MSG__DETAIL__WHEEL_STATES__STRUCT_H_
