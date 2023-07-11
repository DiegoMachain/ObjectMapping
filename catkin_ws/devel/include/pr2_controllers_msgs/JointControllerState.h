// Generated by gencpp from file pr2_controllers_msgs/JointControllerState.msg
// DO NOT EDIT!


#ifndef PR2_CONTROLLERS_MSGS_MESSAGE_JOINTCONTROLLERSTATE_H
#define PR2_CONTROLLERS_MSGS_MESSAGE_JOINTCONTROLLERSTATE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace pr2_controllers_msgs
{
template <class ContainerAllocator>
struct JointControllerState_
{
  typedef JointControllerState_<ContainerAllocator> Type;

  JointControllerState_()
    : header()
    , set_point(0.0)
    , process_value(0.0)
    , process_value_dot(0.0)
    , error(0.0)
    , time_step(0.0)
    , command(0.0)
    , p(0.0)
    , i(0.0)
    , d(0.0)
    , i_clamp(0.0)  {
    }
  JointControllerState_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , set_point(0.0)
    , process_value(0.0)
    , process_value_dot(0.0)
    , error(0.0)
    , time_step(0.0)
    , command(0.0)
    , p(0.0)
    , i(0.0)
    , d(0.0)
    , i_clamp(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef double _set_point_type;
  _set_point_type set_point;

   typedef double _process_value_type;
  _process_value_type process_value;

   typedef double _process_value_dot_type;
  _process_value_dot_type process_value_dot;

   typedef double _error_type;
  _error_type error;

   typedef double _time_step_type;
  _time_step_type time_step;

   typedef double _command_type;
  _command_type command;

   typedef double _p_type;
  _p_type p;

   typedef double _i_type;
  _i_type i;

   typedef double _d_type;
  _d_type d;

   typedef double _i_clamp_type;
  _i_clamp_type i_clamp;





  typedef boost::shared_ptr< ::pr2_controllers_msgs::JointControllerState_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pr2_controllers_msgs::JointControllerState_<ContainerAllocator> const> ConstPtr;

}; // struct JointControllerState_

typedef ::pr2_controllers_msgs::JointControllerState_<std::allocator<void> > JointControllerState;

typedef boost::shared_ptr< ::pr2_controllers_msgs::JointControllerState > JointControllerStatePtr;
typedef boost::shared_ptr< ::pr2_controllers_msgs::JointControllerState const> JointControllerStateConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pr2_controllers_msgs::JointControllerState_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pr2_controllers_msgs::JointControllerState_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::pr2_controllers_msgs::JointControllerState_<ContainerAllocator1> & lhs, const ::pr2_controllers_msgs::JointControllerState_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.set_point == rhs.set_point &&
    lhs.process_value == rhs.process_value &&
    lhs.process_value_dot == rhs.process_value_dot &&
    lhs.error == rhs.error &&
    lhs.time_step == rhs.time_step &&
    lhs.command == rhs.command &&
    lhs.p == rhs.p &&
    lhs.i == rhs.i &&
    lhs.d == rhs.d &&
    lhs.i_clamp == rhs.i_clamp;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::pr2_controllers_msgs::JointControllerState_<ContainerAllocator1> & lhs, const ::pr2_controllers_msgs::JointControllerState_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace pr2_controllers_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::pr2_controllers_msgs::JointControllerState_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pr2_controllers_msgs::JointControllerState_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pr2_controllers_msgs::JointControllerState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pr2_controllers_msgs::JointControllerState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pr2_controllers_msgs::JointControllerState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pr2_controllers_msgs::JointControllerState_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pr2_controllers_msgs::JointControllerState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c0d034a7bf20aeb1c37f3eccb7992b69";
  }

  static const char* value(const ::pr2_controllers_msgs::JointControllerState_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc0d034a7bf20aeb1ULL;
  static const uint64_t static_value2 = 0xc37f3eccb7992b69ULL;
};

template<class ContainerAllocator>
struct DataType< ::pr2_controllers_msgs::JointControllerState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pr2_controllers_msgs/JointControllerState";
  }

  static const char* value(const ::pr2_controllers_msgs::JointControllerState_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pr2_controllers_msgs::JointControllerState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"float64 set_point\n"
"float64 process_value\n"
"float64 process_value_dot\n"
"float64 error\n"
"float64 time_step\n"
"float64 command\n"
"float64 p\n"
"float64 i\n"
"float64 d\n"
"float64 i_clamp\n"
"\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
;
  }

  static const char* value(const ::pr2_controllers_msgs::JointControllerState_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pr2_controllers_msgs::JointControllerState_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.set_point);
      stream.next(m.process_value);
      stream.next(m.process_value_dot);
      stream.next(m.error);
      stream.next(m.time_step);
      stream.next(m.command);
      stream.next(m.p);
      stream.next(m.i);
      stream.next(m.d);
      stream.next(m.i_clamp);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct JointControllerState_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pr2_controllers_msgs::JointControllerState_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pr2_controllers_msgs::JointControllerState_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "set_point: ";
    Printer<double>::stream(s, indent + "  ", v.set_point);
    s << indent << "process_value: ";
    Printer<double>::stream(s, indent + "  ", v.process_value);
    s << indent << "process_value_dot: ";
    Printer<double>::stream(s, indent + "  ", v.process_value_dot);
    s << indent << "error: ";
    Printer<double>::stream(s, indent + "  ", v.error);
    s << indent << "time_step: ";
    Printer<double>::stream(s, indent + "  ", v.time_step);
    s << indent << "command: ";
    Printer<double>::stream(s, indent + "  ", v.command);
    s << indent << "p: ";
    Printer<double>::stream(s, indent + "  ", v.p);
    s << indent << "i: ";
    Printer<double>::stream(s, indent + "  ", v.i);
    s << indent << "d: ";
    Printer<double>::stream(s, indent + "  ", v.d);
    s << indent << "i_clamp: ";
    Printer<double>::stream(s, indent + "  ", v.i_clamp);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PR2_CONTROLLERS_MSGS_MESSAGE_JOINTCONTROLLERSTATE_H
