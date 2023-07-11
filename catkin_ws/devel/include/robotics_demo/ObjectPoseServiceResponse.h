// Generated by gencpp from file robotics_demo/ObjectPoseServiceResponse.msg
// DO NOT EDIT!


#ifndef ROBOTICS_DEMO_MESSAGE_OBJECTPOSESERVICERESPONSE_H
#define ROBOTICS_DEMO_MESSAGE_OBJECTPOSESERVICERESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Pose.h>

namespace robotics_demo
{
template <class ContainerAllocator>
struct ObjectPoseServiceResponse_
{
  typedef ObjectPoseServiceResponse_<ContainerAllocator> Type;

  ObjectPoseServiceResponse_()
    : object_pose()  {
    }
  ObjectPoseServiceResponse_(const ContainerAllocator& _alloc)
    : object_pose(_alloc)  {
  (void)_alloc;
    }



   typedef  ::geometry_msgs::Pose_<ContainerAllocator>  _object_pose_type;
  _object_pose_type object_pose;





  typedef boost::shared_ptr< ::robotics_demo::ObjectPoseServiceResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::robotics_demo::ObjectPoseServiceResponse_<ContainerAllocator> const> ConstPtr;

}; // struct ObjectPoseServiceResponse_

typedef ::robotics_demo::ObjectPoseServiceResponse_<std::allocator<void> > ObjectPoseServiceResponse;

typedef boost::shared_ptr< ::robotics_demo::ObjectPoseServiceResponse > ObjectPoseServiceResponsePtr;
typedef boost::shared_ptr< ::robotics_demo::ObjectPoseServiceResponse const> ObjectPoseServiceResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::robotics_demo::ObjectPoseServiceResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::robotics_demo::ObjectPoseServiceResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::robotics_demo::ObjectPoseServiceResponse_<ContainerAllocator1> & lhs, const ::robotics_demo::ObjectPoseServiceResponse_<ContainerAllocator2> & rhs)
{
  return lhs.object_pose == rhs.object_pose;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::robotics_demo::ObjectPoseServiceResponse_<ContainerAllocator1> & lhs, const ::robotics_demo::ObjectPoseServiceResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace robotics_demo

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::robotics_demo::ObjectPoseServiceResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robotics_demo::ObjectPoseServiceResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robotics_demo::ObjectPoseServiceResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robotics_demo::ObjectPoseServiceResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robotics_demo::ObjectPoseServiceResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robotics_demo::ObjectPoseServiceResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::robotics_demo::ObjectPoseServiceResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4f370b349a20e2e0029b6c926ba1b874";
  }

  static const char* value(const ::robotics_demo::ObjectPoseServiceResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4f370b349a20e2e0ULL;
  static const uint64_t static_value2 = 0x029b6c926ba1b874ULL;
};

template<class ContainerAllocator>
struct DataType< ::robotics_demo::ObjectPoseServiceResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "robotics_demo/ObjectPoseServiceResponse";
  }

  static const char* value(const ::robotics_demo::ObjectPoseServiceResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::robotics_demo::ObjectPoseServiceResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "geometry_msgs/Pose object_pose\n"
"\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Pose\n"
"# A representation of pose in free space, composed of position and orientation. \n"
"Point position\n"
"Quaternion orientation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
;
  }

  static const char* value(const ::robotics_demo::ObjectPoseServiceResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::robotics_demo::ObjectPoseServiceResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.object_pose);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ObjectPoseServiceResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::robotics_demo::ObjectPoseServiceResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::robotics_demo::ObjectPoseServiceResponse_<ContainerAllocator>& v)
  {
    s << indent << "object_pose: ";
    s << std::endl;
    Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "  ", v.object_pose);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOTICS_DEMO_MESSAGE_OBJECTPOSESERVICERESPONSE_H
