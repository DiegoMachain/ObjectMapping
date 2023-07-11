// Generated by gencpp from file unity_robotics_demo_msgs/UnityColor.msg
// DO NOT EDIT!


#ifndef UNITY_ROBOTICS_DEMO_MSGS_MESSAGE_UNITYCOLOR_H
#define UNITY_ROBOTICS_DEMO_MSGS_MESSAGE_UNITYCOLOR_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace unity_robotics_demo_msgs
{
template <class ContainerAllocator>
struct UnityColor_
{
  typedef UnityColor_<ContainerAllocator> Type;

  UnityColor_()
    : r(0)
    , g(0)
    , b(0)
    , a(0)  {
    }
  UnityColor_(const ContainerAllocator& _alloc)
    : r(0)
    , g(0)
    , b(0)
    , a(0)  {
  (void)_alloc;
    }



   typedef int32_t _r_type;
  _r_type r;

   typedef int32_t _g_type;
  _g_type g;

   typedef int32_t _b_type;
  _b_type b;

   typedef int32_t _a_type;
  _a_type a;





  typedef boost::shared_ptr< ::unity_robotics_demo_msgs::UnityColor_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::unity_robotics_demo_msgs::UnityColor_<ContainerAllocator> const> ConstPtr;

}; // struct UnityColor_

typedef ::unity_robotics_demo_msgs::UnityColor_<std::allocator<void> > UnityColor;

typedef boost::shared_ptr< ::unity_robotics_demo_msgs::UnityColor > UnityColorPtr;
typedef boost::shared_ptr< ::unity_robotics_demo_msgs::UnityColor const> UnityColorConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::unity_robotics_demo_msgs::UnityColor_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::unity_robotics_demo_msgs::UnityColor_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::unity_robotics_demo_msgs::UnityColor_<ContainerAllocator1> & lhs, const ::unity_robotics_demo_msgs::UnityColor_<ContainerAllocator2> & rhs)
{
  return lhs.r == rhs.r &&
    lhs.g == rhs.g &&
    lhs.b == rhs.b &&
    lhs.a == rhs.a;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::unity_robotics_demo_msgs::UnityColor_<ContainerAllocator1> & lhs, const ::unity_robotics_demo_msgs::UnityColor_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace unity_robotics_demo_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::unity_robotics_demo_msgs::UnityColor_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::unity_robotics_demo_msgs::UnityColor_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::unity_robotics_demo_msgs::UnityColor_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::unity_robotics_demo_msgs::UnityColor_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::unity_robotics_demo_msgs::UnityColor_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::unity_robotics_demo_msgs::UnityColor_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::unity_robotics_demo_msgs::UnityColor_<ContainerAllocator> >
{
  static const char* value()
  {
    return "deccfa94a2f280f4c4cea955620ed984";
  }

  static const char* value(const ::unity_robotics_demo_msgs::UnityColor_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xdeccfa94a2f280f4ULL;
  static const uint64_t static_value2 = 0xc4cea955620ed984ULL;
};

template<class ContainerAllocator>
struct DataType< ::unity_robotics_demo_msgs::UnityColor_<ContainerAllocator> >
{
  static const char* value()
  {
    return "unity_robotics_demo_msgs/UnityColor";
  }

  static const char* value(const ::unity_robotics_demo_msgs::UnityColor_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::unity_robotics_demo_msgs::UnityColor_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 r\n"
"int32 g\n"
"int32 b\n"
"int32 a\n"
;
  }

  static const char* value(const ::unity_robotics_demo_msgs::UnityColor_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::unity_robotics_demo_msgs::UnityColor_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.r);
      stream.next(m.g);
      stream.next(m.b);
      stream.next(m.a);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct UnityColor_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::unity_robotics_demo_msgs::UnityColor_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::unity_robotics_demo_msgs::UnityColor_<ContainerAllocator>& v)
  {
    s << indent << "r: ";
    Printer<int32_t>::stream(s, indent + "  ", v.r);
    s << indent << "g: ";
    Printer<int32_t>::stream(s, indent + "  ", v.g);
    s << indent << "b: ";
    Printer<int32_t>::stream(s, indent + "  ", v.b);
    s << indent << "a: ";
    Printer<int32_t>::stream(s, indent + "  ", v.a);
  }
};

} // namespace message_operations
} // namespace ros

#endif // UNITY_ROBOTICS_DEMO_MSGS_MESSAGE_UNITYCOLOR_H
