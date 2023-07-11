// Generated by gencpp from file articulation_model_msgs/ParticlesMsg.msg
// DO NOT EDIT!


#ifndef ARTICULATION_MODEL_MSGS_MESSAGE_PARTICLESMSG_H
#define ARTICULATION_MODEL_MSGS_MESSAGE_PARTICLESMSG_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <articulation_model_msgs/ModelMsg.h>

namespace articulation_model_msgs
{
template <class ContainerAllocator>
struct ParticlesMsg_
{
  typedef ParticlesMsg_<ContainerAllocator> Type;

  ParticlesMsg_()
    : header()
    , particles()  {
    }
  ParticlesMsg_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , particles(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector< ::articulation_model_msgs::ModelMsg_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::articulation_model_msgs::ModelMsg_<ContainerAllocator> >> _particles_type;
  _particles_type particles;





  typedef boost::shared_ptr< ::articulation_model_msgs::ParticlesMsg_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::articulation_model_msgs::ParticlesMsg_<ContainerAllocator> const> ConstPtr;

}; // struct ParticlesMsg_

typedef ::articulation_model_msgs::ParticlesMsg_<std::allocator<void> > ParticlesMsg;

typedef boost::shared_ptr< ::articulation_model_msgs::ParticlesMsg > ParticlesMsgPtr;
typedef boost::shared_ptr< ::articulation_model_msgs::ParticlesMsg const> ParticlesMsgConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::articulation_model_msgs::ParticlesMsg_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::articulation_model_msgs::ParticlesMsg_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::articulation_model_msgs::ParticlesMsg_<ContainerAllocator1> & lhs, const ::articulation_model_msgs::ParticlesMsg_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.particles == rhs.particles;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::articulation_model_msgs::ParticlesMsg_<ContainerAllocator1> & lhs, const ::articulation_model_msgs::ParticlesMsg_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace articulation_model_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::articulation_model_msgs::ParticlesMsg_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::articulation_model_msgs::ParticlesMsg_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::articulation_model_msgs::ParticlesMsg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::articulation_model_msgs::ParticlesMsg_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::articulation_model_msgs::ParticlesMsg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::articulation_model_msgs::ParticlesMsg_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::articulation_model_msgs::ParticlesMsg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "52af14e2f898092846e1c146600c0fb9";
  }

  static const char* value(const ::articulation_model_msgs::ParticlesMsg_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x52af14e2f8980928ULL;
  static const uint64_t static_value2 = 0x46e1c146600c0fb9ULL;
};

template<class ContainerAllocator>
struct DataType< ::articulation_model_msgs::ParticlesMsg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "articulation_model_msgs/ParticlesMsg";
  }

  static const char* value(const ::articulation_model_msgs::ParticlesMsg_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::articulation_model_msgs::ParticlesMsg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Vector of single kinematic model\n"
"#\n"
"# A kinematic model is defined by its model class name, and a set of parameters. \n"
"# The client may additionally specify a model id, that can be used to colorize the\n"
"# model when visualized using the RVIZ model display.\n"
"# \n"
"# For a list of currently implemented models, see the documetation at\n"
"# http://www.ros.org/wiki/articulation_models\n"
"#\n"
"#\n"
"\n"
"std_msgs/Header header                        # frame and timestamp\n"
"\n"
"articulation_model_msgs/ModelMsg[] particles  # model parameters\n"
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
"MSG: articulation_model_msgs/ModelMsg\n"
"# Single kinematic model\n"
"#\n"
"# A kinematic model is defined by its model class name, and a set of parameters. \n"
"# The client may additionally specify a model id, that can be used to colorize the\n"
"# model when visualized using the RVIZ model display.\n"
"# \n"
"# For a list of currently implemented models, see the documetation at\n"
"# http://www.ros.org/wiki/articulation_models\n"
"#\n"
"#\n"
"\n"
"std_msgs/Header header                        # frame and timestamp\n"
"\n"
"int32 id                             # user specified model id\n"
"string name                          # name of the model family (e.g. \"rotational\",\n"
"                                     # \"prismatic\", \"pca-gp\", \"rigid\")\n"
"articulation_model_msgs/ParamMsg[] params  # model parameters\n"
"articulation_model_msgs/TrackMsg track     # trajectory from which the model is estimated, or\n"
"                                     # that is evaluated using the model\n"
"\n"
"================================================================================\n"
"MSG: articulation_model_msgs/ParamMsg\n"
"# Single parameter passed to or from model fitting\n"
"#\n"
"# This mechanism allows to flexibly pass parameters to \n"
"# model fitting (and vice versa). Note that these parameters \n"
"# are model-specific: A client may supply additional\n"
"# parameters to the model estimator, and, similarly, a estimator\n"
"# may add the estimated model parameters to the model message.\n"
"# When the model is then evaluated, for example to make predictions\n"
"# or to compute the likelihood, the model class can then use\n"
"# these parameters.\n"
"#\n"
"# A parameter has a name, a value, and a type. The type globally\n"
"# indicates whether it is a prior parameter (prior to model fitting),\n"
"# or a model parameter (found during model fitting, using a maximum-\n"
"# likelihood estimator), or a cached evaluation (e.g., the likelihood\n"
"# or the BIC are a typical \"side\"-product of model estimation, and\n"
"# can therefore already be cached).\n"
"#\n"
"# For a list of currently used parameters, see the documentation at\n"
"# http://www.ros.org/wiki/articulation_models\n"
"#\n"
"\n"
"uint8 PRIOR=0   # indicates a prior model parameter \n"
"                # (e.g., \"sigma_position\")\n"
"uint8 PARAM=1   # indicates a estimated model parameter \n"
"                # (e.g., \"rot_radius\", the estimated radius)\n"
"uint8 EVAL=2    # indicates a cached evaluation of the model, given \n"
"                # the current trajectory\n"
"                # (e.g., \"loglikelihood\", the log likelihood of the\n"
"                # data, given the model and its parameters)\n"
"\n"
"string name     # name of the parameter\n"
"float64 value   # value of the parameter\n"
"uint8 type      # type of the parameter (PRIOR, PARAM, EVAL)\n"
"\n"
"\n"
"================================================================================\n"
"MSG: articulation_model_msgs/TrackMsg\n"
"# Single kinematic trajectory\n"
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

  static const char* value(const ::articulation_model_msgs::ParticlesMsg_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::articulation_model_msgs::ParticlesMsg_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.particles);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ParticlesMsg_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::articulation_model_msgs::ParticlesMsg_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::articulation_model_msgs::ParticlesMsg_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "particles[]" << std::endl;
    for (size_t i = 0; i < v.particles.size(); ++i)
    {
      s << indent << "  particles[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::articulation_model_msgs::ModelMsg_<ContainerAllocator> >::stream(s, indent + "    ", v.particles[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // ARTICULATION_MODEL_MSGS_MESSAGE_PARTICLESMSG_H
