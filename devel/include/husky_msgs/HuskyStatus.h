// Generated by gencpp from file husky_msgs/HuskyStatus.msg
// DO NOT EDIT!


#ifndef HUSKY_MSGS_MESSAGE_HUSKYSTATUS_H
#define HUSKY_MSGS_MESSAGE_HUSKYSTATUS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace husky_msgs
{
template <class ContainerAllocator>
struct HuskyStatus_
{
  typedef HuskyStatus_<ContainerAllocator> Type;

  HuskyStatus_()
    : header()
    , uptime(0)
    , ros_control_loop_freq(0.0)
    , mcu_and_user_port_current(0.0)
    , left_driver_current(0.0)
    , right_driver_current(0.0)
    , battery_voltage(0.0)
    , left_driver_voltage(0.0)
    , right_driver_voltage(0.0)
    , left_driver_temp(0.0)
    , right_driver_temp(0.0)
    , left_motor_temp(0.0)
    , right_motor_temp(0.0)
    , capacity_estimate(0)
    , charge_estimate(0.0)
    , timeout(false)
    , lockout(false)
    , e_stop(false)
    , ros_pause(false)
    , no_battery(false)
    , current_limit(false)  {
    }
  HuskyStatus_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , uptime(0)
    , ros_control_loop_freq(0.0)
    , mcu_and_user_port_current(0.0)
    , left_driver_current(0.0)
    , right_driver_current(0.0)
    , battery_voltage(0.0)
    , left_driver_voltage(0.0)
    , right_driver_voltage(0.0)
    , left_driver_temp(0.0)
    , right_driver_temp(0.0)
    , left_motor_temp(0.0)
    , right_motor_temp(0.0)
    , capacity_estimate(0)
    , charge_estimate(0.0)
    , timeout(false)
    , lockout(false)
    , e_stop(false)
    , ros_pause(false)
    , no_battery(false)
    , current_limit(false)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint32_t _uptime_type;
  _uptime_type uptime;

   typedef double _ros_control_loop_freq_type;
  _ros_control_loop_freq_type ros_control_loop_freq;

   typedef double _mcu_and_user_port_current_type;
  _mcu_and_user_port_current_type mcu_and_user_port_current;

   typedef double _left_driver_current_type;
  _left_driver_current_type left_driver_current;

   typedef double _right_driver_current_type;
  _right_driver_current_type right_driver_current;

   typedef double _battery_voltage_type;
  _battery_voltage_type battery_voltage;

   typedef double _left_driver_voltage_type;
  _left_driver_voltage_type left_driver_voltage;

   typedef double _right_driver_voltage_type;
  _right_driver_voltage_type right_driver_voltage;

   typedef double _left_driver_temp_type;
  _left_driver_temp_type left_driver_temp;

   typedef double _right_driver_temp_type;
  _right_driver_temp_type right_driver_temp;

   typedef double _left_motor_temp_type;
  _left_motor_temp_type left_motor_temp;

   typedef double _right_motor_temp_type;
  _right_motor_temp_type right_motor_temp;

   typedef uint16_t _capacity_estimate_type;
  _capacity_estimate_type capacity_estimate;

   typedef double _charge_estimate_type;
  _charge_estimate_type charge_estimate;

   typedef uint8_t _timeout_type;
  _timeout_type timeout;

   typedef uint8_t _lockout_type;
  _lockout_type lockout;

   typedef uint8_t _e_stop_type;
  _e_stop_type e_stop;

   typedef uint8_t _ros_pause_type;
  _ros_pause_type ros_pause;

   typedef uint8_t _no_battery_type;
  _no_battery_type no_battery;

   typedef uint8_t _current_limit_type;
  _current_limit_type current_limit;





  typedef boost::shared_ptr< ::husky_msgs::HuskyStatus_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::husky_msgs::HuskyStatus_<ContainerAllocator> const> ConstPtr;

}; // struct HuskyStatus_

typedef ::husky_msgs::HuskyStatus_<std::allocator<void> > HuskyStatus;

typedef boost::shared_ptr< ::husky_msgs::HuskyStatus > HuskyStatusPtr;
typedef boost::shared_ptr< ::husky_msgs::HuskyStatus const> HuskyStatusConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::husky_msgs::HuskyStatus_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::husky_msgs::HuskyStatus_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace husky_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'husky_msgs': ['/home/parallels/wsfinal/src/husky-kinetic-devel/husky_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::husky_msgs::HuskyStatus_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::husky_msgs::HuskyStatus_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::husky_msgs::HuskyStatus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::husky_msgs::HuskyStatus_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::husky_msgs::HuskyStatus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::husky_msgs::HuskyStatus_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::husky_msgs::HuskyStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "fd724379c53d89ec4629be3b235dc10d";
  }

  static const char* value(const ::husky_msgs::HuskyStatus_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xfd724379c53d89ecULL;
  static const uint64_t static_value2 = 0x4629be3b235dc10dULL;
};

template<class ContainerAllocator>
struct DataType< ::husky_msgs::HuskyStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "husky_msgs/HuskyStatus";
  }

  static const char* value(const ::husky_msgs::HuskyStatus_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::husky_msgs::HuskyStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
\n\
# MCU Uptime, in ms\n\
uint32 uptime\n\
\n\
# ROS Control loop frequency (PC-side)\n\
float64 ros_control_loop_freq\n\
\n\
# Current draw of platform components, in amps\n\
float64 mcu_and_user_port_current\n\
float64 left_driver_current\n\
float64 right_driver_current\n\
\n\
# Voltage of platform components, in volts\n\
float64 battery_voltage\n\
float64 left_driver_voltage\n\
float64 right_driver_voltage\n\
\n\
# Component temperatures, in C\n\
float64 left_driver_temp\n\
float64 right_driver_temp\n\
float64 left_motor_temp\n\
float64 right_motor_temp\n\
\n\
# Battery capacity (Wh) and charge (%) estimate\n\
uint16 capacity_estimate\n\
float64 charge_estimate\n\
\n\
# Husky error/stop conditions\n\
bool timeout\n\
bool lockout\n\
bool e_stop\n\
bool ros_pause\n\
bool no_battery\n\
bool current_limit\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
";
  }

  static const char* value(const ::husky_msgs::HuskyStatus_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::husky_msgs::HuskyStatus_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.uptime);
      stream.next(m.ros_control_loop_freq);
      stream.next(m.mcu_and_user_port_current);
      stream.next(m.left_driver_current);
      stream.next(m.right_driver_current);
      stream.next(m.battery_voltage);
      stream.next(m.left_driver_voltage);
      stream.next(m.right_driver_voltage);
      stream.next(m.left_driver_temp);
      stream.next(m.right_driver_temp);
      stream.next(m.left_motor_temp);
      stream.next(m.right_motor_temp);
      stream.next(m.capacity_estimate);
      stream.next(m.charge_estimate);
      stream.next(m.timeout);
      stream.next(m.lockout);
      stream.next(m.e_stop);
      stream.next(m.ros_pause);
      stream.next(m.no_battery);
      stream.next(m.current_limit);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct HuskyStatus_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::husky_msgs::HuskyStatus_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::husky_msgs::HuskyStatus_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "uptime: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.uptime);
    s << indent << "ros_control_loop_freq: ";
    Printer<double>::stream(s, indent + "  ", v.ros_control_loop_freq);
    s << indent << "mcu_and_user_port_current: ";
    Printer<double>::stream(s, indent + "  ", v.mcu_and_user_port_current);
    s << indent << "left_driver_current: ";
    Printer<double>::stream(s, indent + "  ", v.left_driver_current);
    s << indent << "right_driver_current: ";
    Printer<double>::stream(s, indent + "  ", v.right_driver_current);
    s << indent << "battery_voltage: ";
    Printer<double>::stream(s, indent + "  ", v.battery_voltage);
    s << indent << "left_driver_voltage: ";
    Printer<double>::stream(s, indent + "  ", v.left_driver_voltage);
    s << indent << "right_driver_voltage: ";
    Printer<double>::stream(s, indent + "  ", v.right_driver_voltage);
    s << indent << "left_driver_temp: ";
    Printer<double>::stream(s, indent + "  ", v.left_driver_temp);
    s << indent << "right_driver_temp: ";
    Printer<double>::stream(s, indent + "  ", v.right_driver_temp);
    s << indent << "left_motor_temp: ";
    Printer<double>::stream(s, indent + "  ", v.left_motor_temp);
    s << indent << "right_motor_temp: ";
    Printer<double>::stream(s, indent + "  ", v.right_motor_temp);
    s << indent << "capacity_estimate: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.capacity_estimate);
    s << indent << "charge_estimate: ";
    Printer<double>::stream(s, indent + "  ", v.charge_estimate);
    s << indent << "timeout: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.timeout);
    s << indent << "lockout: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.lockout);
    s << indent << "e_stop: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.e_stop);
    s << indent << "ros_pause: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.ros_pause);
    s << indent << "no_battery: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.no_battery);
    s << indent << "current_limit: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.current_limit);
  }
};

} // namespace message_operations
} // namespace ros

#endif // HUSKY_MSGS_MESSAGE_HUSKYSTATUS_H
