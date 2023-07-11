// Generated by gencpp from file pr2_controllers_msgs/PointHeadResult.msg
// DO NOT EDIT!


#ifndef PR2_CONTROLLERS_MSGS_MESSAGE_POINTHEADRESULT_H
#define PR2_CONTROLLERS_MSGS_MESSAGE_POINTHEADRESULT_H


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
struct PointHeadResult_
{
  typedef PointHeadResult_<ContainerAllocator> Type;

  PointHeadResult_()
    {
    }
  PointHeadResult_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::pr2_controllers_msgs::PointHeadResult_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pr2_controllers_msgs::PointHeadResult_<ContainerAllocator> const> ConstPtr;

}; // struct PointHeadResult_

typedef ::pr2_controllers_msgs::PointHeadResult_<std::allocator<void> > PointHeadResult;

typedef boost::shared_ptr< ::pr2_controllers_msgs::PointHeadResult > PointHeadResultPtr;
typedef boost::shared_ptr< ::pr2_controllers_msgs::PointHeadResult const> PointHeadResultConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pr2_controllers_msgs::PointHeadResult_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pr2_controllers_msgs::PointHeadResult_<ContainerAllocator> >::stream(s, "", v);
return s;
}


} // namespace pr2_controllers_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::pr2_controllers_msgs::PointHeadResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pr2_controllers_msgs::PointHeadResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pr2_controllers_msgs::PointHeadResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pr2_controllers_msgs::PointHeadResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pr2_controllers_msgs::PointHeadResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pr2_controllers_msgs::PointHeadResult_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pr2_controllers_msgs::PointHeadResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::pr2_controllers_msgs::PointHeadResult_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::pr2_controllers_msgs::PointHeadResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pr2_controllers_msgs/PointHeadResult";
  }

  static const char* value(const ::pr2_controllers_msgs::PointHeadResult_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pr2_controllers_msgs::PointHeadResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
;
  }

  static const char* value(const ::pr2_controllers_msgs::PointHeadResult_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pr2_controllers_msgs::PointHeadResult_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PointHeadResult_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pr2_controllers_msgs::PointHeadResult_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::pr2_controllers_msgs::PointHeadResult_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // PR2_CONTROLLERS_MSGS_MESSAGE_POINTHEADRESULT_H
