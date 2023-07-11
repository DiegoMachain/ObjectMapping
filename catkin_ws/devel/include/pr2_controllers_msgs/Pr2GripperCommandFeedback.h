// Generated by gencpp from file pr2_controllers_msgs/Pr2GripperCommandFeedback.msg
// DO NOT EDIT!


#ifndef PR2_CONTROLLERS_MSGS_MESSAGE_PR2GRIPPERCOMMANDFEEDBACK_H
#define PR2_CONTROLLERS_MSGS_MESSAGE_PR2GRIPPERCOMMANDFEEDBACK_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace pr2_controllers_msgs
{
template <class ContainerAllocator>
struct Pr2GripperCommandFeedback_
{
  typedef Pr2GripperCommandFeedback_<ContainerAllocator> Type;

  Pr2GripperCommandFeedback_()
    : position(0.0)
    , effort(0.0)
    , stalled(false)
    , reached_goal(false)  {
    }
  Pr2GripperCommandFeedback_(const ContainerAllocator& _alloc)
    : position(0.0)
    , effort(0.0)
    , stalled(false)
    , reached_goal(false)  {
  (void)_alloc;
    }



   typedef double _position_type;
  _position_type position;

   typedef double _effort_type;
  _effort_type effort;

   typedef uint8_t _stalled_type;
  _stalled_type stalled;

   typedef uint8_t _reached_goal_type;
  _reached_goal_type reached_goal;





  typedef boost::shared_ptr< ::pr2_controllers_msgs::Pr2GripperCommandFeedback_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pr2_controllers_msgs::Pr2GripperCommandFeedback_<ContainerAllocator> const> ConstPtr;

}; // struct Pr2GripperCommandFeedback_

typedef ::pr2_controllers_msgs::Pr2GripperCommandFeedback_<std::allocator<void> > Pr2GripperCommandFeedback;

typedef boost::shared_ptr< ::pr2_controllers_msgs::Pr2GripperCommandFeedback > Pr2GripperCommandFeedbackPtr;
typedef boost::shared_ptr< ::pr2_controllers_msgs::Pr2GripperCommandFeedback const> Pr2GripperCommandFeedbackConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pr2_controllers_msgs::Pr2GripperCommandFeedback_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pr2_controllers_msgs::Pr2GripperCommandFeedback_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::pr2_controllers_msgs::Pr2GripperCommandFeedback_<ContainerAllocator1> & lhs, const ::pr2_controllers_msgs::Pr2GripperCommandFeedback_<ContainerAllocator2> & rhs)
{
  return lhs.position == rhs.position &&
    lhs.effort == rhs.effort &&
    lhs.stalled == rhs.stalled &&
    lhs.reached_goal == rhs.reached_goal;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::pr2_controllers_msgs::Pr2GripperCommandFeedback_<ContainerAllocator1> & lhs, const ::pr2_controllers_msgs::Pr2GripperCommandFeedback_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace pr2_controllers_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::pr2_controllers_msgs::Pr2GripperCommandFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pr2_controllers_msgs::Pr2GripperCommandFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pr2_controllers_msgs::Pr2GripperCommandFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pr2_controllers_msgs::Pr2GripperCommandFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pr2_controllers_msgs::Pr2GripperCommandFeedback_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pr2_controllers_msgs::Pr2GripperCommandFeedback_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pr2_controllers_msgs::Pr2GripperCommandFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e4cbff56d3562bcf113da5a5adeef91f";
  }

  static const char* value(const ::pr2_controllers_msgs::Pr2GripperCommandFeedback_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe4cbff56d3562bcfULL;
  static const uint64_t static_value2 = 0x113da5a5adeef91fULL;
};

template<class ContainerAllocator>
struct DataType< ::pr2_controllers_msgs::Pr2GripperCommandFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pr2_controllers_msgs/Pr2GripperCommandFeedback";
  }

  static const char* value(const ::pr2_controllers_msgs::Pr2GripperCommandFeedback_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pr2_controllers_msgs::Pr2GripperCommandFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"float64 position  # The current gripper gap size (in meters)\n"
"float64 effort    # The current effort exerted (in Newtons)\n"
"bool stalled      # True iff the gripper is exerting max effort and not moving\n"
"bool reached_goal # True iff the gripper position has reached the commanded setpoint\n"
"\n"
;
  }

  static const char* value(const ::pr2_controllers_msgs::Pr2GripperCommandFeedback_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pr2_controllers_msgs::Pr2GripperCommandFeedback_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.position);
      stream.next(m.effort);
      stream.next(m.stalled);
      stream.next(m.reached_goal);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Pr2GripperCommandFeedback_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pr2_controllers_msgs::Pr2GripperCommandFeedback_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pr2_controllers_msgs::Pr2GripperCommandFeedback_<ContainerAllocator>& v)
  {
    s << indent << "position: ";
    Printer<double>::stream(s, indent + "  ", v.position);
    s << indent << "effort: ";
    Printer<double>::stream(s, indent + "  ", v.effort);
    s << indent << "stalled: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.stalled);
    s << indent << "reached_goal: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.reached_goal);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PR2_CONTROLLERS_MSGS_MESSAGE_PR2GRIPPERCOMMANDFEEDBACK_H
