// Generated by gencpp from file articulation_model_msgs/TrackMsg.msg
// DO NOT EDIT!


#ifndef ARTICULATION_MODEL_MSGS_MESSAGE_TRACKMSG_H
#define ARTICULATION_MODEL_MSGS_MESSAGE_TRACKMSG_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <geometry_msgs/Pose.h>
#include <std_msgs/Header.h>
#include <geometry_msgs/Pose.h>
#include <geometry_msgs/Pose.h>
#include <sensor_msgs/ChannelFloat32.h>

namespace articulation_model_msgs
{
template <class ContainerAllocator>
struct TrackMsg_
{
  typedef TrackMsg_<ContainerAllocator> Type;

  TrackMsg_()
    : header()
    , id(0)
    , pose()
    , pose_headers()
    , pose_projected()
    , pose_resampled()
    , pose_flags()
    , channels()  {
    }
  TrackMsg_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , id(0)
    , pose(_alloc)
    , pose_headers(_alloc)
    , pose_projected(_alloc)
    , pose_resampled(_alloc)
    , pose_flags(_alloc)
    , channels(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef int32_t _id_type;
  _id_type id;

   typedef std::vector< ::geometry_msgs::Pose_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::geometry_msgs::Pose_<ContainerAllocator> >> _pose_type;
  _pose_type pose;

   typedef std::vector< ::std_msgs::Header_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::std_msgs::Header_<ContainerAllocator> >> _pose_headers_type;
  _pose_headers_type pose_headers;

   typedef std::vector< ::geometry_msgs::Pose_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::geometry_msgs::Pose_<ContainerAllocator> >> _pose_projected_type;
  _pose_projected_type pose_projected;

   typedef std::vector< ::geometry_msgs::Pose_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::geometry_msgs::Pose_<ContainerAllocator> >> _pose_resampled_type;
  _pose_resampled_type pose_resampled;

   typedef std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>> _pose_flags_type;
  _pose_flags_type pose_flags;

   typedef std::vector< ::sensor_msgs::ChannelFloat32_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::sensor_msgs::ChannelFloat32_<ContainerAllocator> >> _channels_type;
  _channels_type channels;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(POSE_VISIBLE)
  #undef POSE_VISIBLE
#endif
#if defined(_WIN32) && defined(POSE_END_OF_SEGMENT)
  #undef POSE_END_OF_SEGMENT
#endif

  enum {
    POSE_VISIBLE = 1u,
    POSE_END_OF_SEGMENT = 2u,
  };


  typedef boost::shared_ptr< ::articulation_model_msgs::TrackMsg_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::articulation_model_msgs::TrackMsg_<ContainerAllocator> const> ConstPtr;

}; // struct TrackMsg_

typedef ::articulation_model_msgs::TrackMsg_<std::allocator<void> > TrackMsg;

typedef boost::shared_ptr< ::articulation_model_msgs::TrackMsg > TrackMsgPtr;
typedef boost::shared_ptr< ::articulation_model_msgs::TrackMsg const> TrackMsgConstPtr;

// constants requiring out of line definition

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::articulation_model_msgs::TrackMsg_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::articulation_model_msgs::TrackMsg_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::articulation_model_msgs::TrackMsg_<ContainerAllocator1> & lhs, const ::articulation_model_msgs::TrackMsg_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.id == rhs.id &&
    lhs.pose == rhs.pose &&
    lhs.pose_headers == rhs.pose_headers &&
    lhs.pose_projected == rhs.pose_projected &&
    lhs.pose_resampled == rhs.pose_resampled &&
    lhs.pose_flags == rhs.pose_flags &&
    lhs.channels == rhs.channels;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::articulation_model_msgs::TrackMsg_<ContainerAllocator1> & lhs, const ::articulation_model_msgs::TrackMsg_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace articulation_model_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::articulation_model_msgs::TrackMsg_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::articulation_model_msgs::TrackMsg_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::articulation_model_msgs::TrackMsg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::articulation_model_msgs::TrackMsg_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::articulation_model_msgs::TrackMsg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::articulation_model_msgs::TrackMsg_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::articulation_model_msgs::TrackMsg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f74375fd0f97f92e2767ab0a80c15590";
  }

  static const char* value(const ::articulation_model_msgs::TrackMsg_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf74375fd0f97f92eULL;
  static const uint64_t static_value2 = 0x2767ab0a80c15590ULL;
};

template<class ContainerAllocator>
struct DataType< ::articulation_model_msgs::TrackMsg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "articulation_model_msgs/TrackMsg";
  }

  static const char* value(const ::articulation_model_msgs::TrackMsg_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::articulation_model_msgs::TrackMsg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Single kinematic trajectory\n"
"#\n"
"# This message contains a kinematic trajectory. The trajectory is specified\n"
"# as a vector of 6D poses. An additional flag, track_type, indicates whether\n"
"# the track is valid, and whether it includes orientation. The track id\n"
"# can be used for automatic coloring in the RVIZ track plugin, and can be \n"
"# freely chosen by the client. \n"
"#\n"
"# A model is fitting only from the trajectory stored in the pose[]-vector. \n"
"# Additional information may be associated to each pose using the channels\n"
"# vector, with arbitrary # fields (e.g., to include applied/measured forces). \n"
"#\n"
"# After model evaluation,\n"
"# also the associated configurations of the object are stored in the channels,\n"
"# named \"q[0]\"..\"q[DOF-1]\", where DOF is the number of degrees of freedom.\n"
"# Model evaluation also projects the poses in the pose vector onto the model,\n"
"# and stores these ideal poses in the vector pose_projected. Further, during model\n"
"# evaluation, a new set of (uniform) configurations over the valid configuration\n"
"# range is sampled, and the result is stored in pose_resampled.\n"
"# The vector pose_flags contains additional display flags for the poses in the\n"
"# pose vector, for example, whether a pose is visible and/or\n"
"# the end of a trajectory segment. At the moment, this is only used by the\n"
"# prior_model_learner.\n"
"#\n"
"\n"
"std_msgs/Header header                        # frame and timestamp\n"
"int32 id                                # used-specified track id\n"
"\n"
"geometry_msgs/Pose[] pose               # sequence of poses, defining the observed trajectory\n"
"std_msgs/Header[] pose_headers                   # Timestamp and frame for each pose (and pose_projected)\n"
"geometry_msgs/Pose[] pose_projected     # sequence of poses, projected to the model \n"
"                                        # (after model evaluation)\n"
"geometry_msgs/Pose[] pose_resampled     # sequence of poses, re-sampled from the model in\n"
"                                        # the valid configuration range\n"
"uint32[] pose_flags                     # bit-wise combination of POSE_VISIBLE and POSE_END_OF_SEGMENT\n"
"\n"
"uint32 POSE_VISIBLE=1\n"
"uint32 POSE_END_OF_SEGMENT=2\n"
"\n"
"# Each channel should have the same number of elements as pose array, \n"
"# and the data in each channel should correspond 1:1 with each pose\n"
"# possible channels: \"width\", \"height\", \"rgb\", ...\n"
"sensor_msgs/ChannelFloat32[] channels       \n"
"\n"
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
"\n"
"================================================================================\n"
"MSG: sensor_msgs/ChannelFloat32\n"
"# This message is used by the PointCloud message to hold optional data\n"
"# associated with each point in the cloud. The length of the values\n"
"# array should be the same as the length of the points array in the\n"
"# PointCloud, and each value should be associated with the corresponding\n"
"# point.\n"
"\n"
"# Channel names in existing practice include:\n"
"#   \"u\", \"v\" - row and column (respectively) in the left stereo image.\n"
"#              This is opposite to usual conventions but remains for\n"
"#              historical reasons. The newer PointCloud2 message has no\n"
"#              such problem.\n"
"#   \"rgb\" - For point clouds produced by color stereo cameras. uint8\n"
"#           (R,G,B) values packed into the least significant 24 bits,\n"
"#           in order.\n"
"#   \"intensity\" - laser or pixel intensity.\n"
"#   \"distance\"\n"
"\n"
"# The channel name should give semantics of the channel (e.g.\n"
"# \"intensity\" instead of \"value\").\n"
"string name\n"
"\n"
"# The values array should be 1-1 with the elements of the associated\n"
"# PointCloud.\n"
"float32[] values\n"
;
  }

  static const char* value(const ::articulation_model_msgs::TrackMsg_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::articulation_model_msgs::TrackMsg_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.id);
      stream.next(m.pose);
      stream.next(m.pose_headers);
      stream.next(m.pose_projected);
      stream.next(m.pose_resampled);
      stream.next(m.pose_flags);
      stream.next(m.channels);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TrackMsg_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::articulation_model_msgs::TrackMsg_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::articulation_model_msgs::TrackMsg_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "id: ";
    Printer<int32_t>::stream(s, indent + "  ", v.id);
    s << indent << "pose[]" << std::endl;
    for (size_t i = 0; i < v.pose.size(); ++i)
    {
      s << indent << "  pose[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "    ", v.pose[i]);
    }
    s << indent << "pose_headers[]" << std::endl;
    for (size_t i = 0; i < v.pose_headers.size(); ++i)
    {
      s << indent << "  pose_headers[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "    ", v.pose_headers[i]);
    }
    s << indent << "pose_projected[]" << std::endl;
    for (size_t i = 0; i < v.pose_projected.size(); ++i)
    {
      s << indent << "  pose_projected[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "    ", v.pose_projected[i]);
    }
    s << indent << "pose_resampled[]" << std::endl;
    for (size_t i = 0; i < v.pose_resampled.size(); ++i)
    {
      s << indent << "  pose_resampled[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "    ", v.pose_resampled[i]);
    }
    s << indent << "pose_flags[]" << std::endl;
    for (size_t i = 0; i < v.pose_flags.size(); ++i)
    {
      s << indent << "  pose_flags[" << i << "]: ";
      Printer<uint32_t>::stream(s, indent + "  ", v.pose_flags[i]);
    }
    s << indent << "channels[]" << std::endl;
    for (size_t i = 0; i < v.channels.size(); ++i)
    {
      s << indent << "  channels[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::sensor_msgs::ChannelFloat32_<ContainerAllocator> >::stream(s, indent + "    ", v.channels[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // ARTICULATION_MODEL_MSGS_MESSAGE_TRACKMSG_H
