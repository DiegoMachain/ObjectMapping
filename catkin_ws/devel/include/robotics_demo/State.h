// Generated by gencpp from file robotics_demo/State.msg
// DO NOT EDIT!


#ifndef ROBOTICS_DEMO_MESSAGE_STATE_H
#define ROBOTICS_DEMO_MESSAGE_STATE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace robotics_demo
{
template <class ContainerAllocator>
struct State_
{
  typedef State_<ContainerAllocator> Type;

  State_()
    : state(0.0)  {
    }
  State_(const ContainerAllocator& _alloc)
    : state(0.0)  {
  (void)_alloc;
    }



   typedef float _state_type;
  _state_type state;





  typedef boost::shared_ptr< ::robotics_demo::State_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::robotics_demo::State_<ContainerAllocator> const> ConstPtr;

}; // struct State_

typedef ::robotics_demo::State_<std::allocator<void> > State;

typedef boost::shared_ptr< ::robotics_demo::State > StatePtr;
typedef boost::shared_ptr< ::robotics_demo::State const> StateConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::robotics_demo::State_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::robotics_demo::State_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::robotics_demo::State_<ContainerAllocator1> & lhs, const ::robotics_demo::State_<ContainerAllocator2> & rhs)
{
  return lhs.state == rhs.state;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::robotics_demo::State_<ContainerAllocator1> & lhs, const ::robotics_demo::State_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace robotics_demo

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::robotics_demo::State_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robotics_demo::State_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robotics_demo::State_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robotics_demo::State_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robotics_demo::State_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robotics_demo::State_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::robotics_demo::State_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3afad6888115551b1adffec816d76963";
  }

  static const char* value(const ::robotics_demo::State_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3afad6888115551bULL;
  static const uint64_t static_value2 = 0x1adffec816d76963ULL;
};

template<class ContainerAllocator>
struct DataType< ::robotics_demo::State_<ContainerAllocator> >
{
  static const char* value()
  {
    return "robotics_demo/State";
  }

  static const char* value(const ::robotics_demo::State_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::robotics_demo::State_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 state\n"
;
  }

  static const char* value(const ::robotics_demo::State_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::robotics_demo::State_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.state);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct State_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::robotics_demo::State_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::robotics_demo::State_<ContainerAllocator>& v)
  {
    s << indent << "state: ";
    Printer<float>::stream(s, indent + "  ", v.state);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOTICS_DEMO_MESSAGE_STATE_H