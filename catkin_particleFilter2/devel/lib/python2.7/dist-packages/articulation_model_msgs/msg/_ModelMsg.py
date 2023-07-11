# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from articulation_model_msgs/ModelMsg.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import articulation_model_msgs.msg
import geometry_msgs.msg
import sensor_msgs.msg
import std_msgs.msg

class ModelMsg(genpy.Message):
  _md5sum = "d6fd23ca956a2c6fee31f2452ddba34d"
  _type = "articulation_model_msgs/ModelMsg"
  _has_header = True  # flag to mark the presence of a Header object
  _full_text = """# Single kinematic model
#
# A kinematic model is defined by its model class name, and a set of parameters. 
# The client may additionally specify a model id, that can be used to colorize the
# model when visualized using the RVIZ model display.
# 
# For a list of currently implemented models, see the documetation at
# http://www.ros.org/wiki/articulation_models
#
#

std_msgs/Header header                        # frame and timestamp

int32 id                             # user specified model id
string name                          # name of the model family (e.g. "rotational",
                                     # "prismatic", "pca-gp", "rigid")
articulation_model_msgs/ParamMsg[] params  # model parameters
articulation_model_msgs/TrackMsg track     # trajectory from which the model is estimated, or
                                     # that is evaluated using the model

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
string frame_id

================================================================================
MSG: articulation_model_msgs/ParamMsg
# Single parameter passed to or from model fitting
#
# This mechanism allows to flexibly pass parameters to 
# model fitting (and vice versa). Note that these parameters 
# are model-specific: A client may supply additional
# parameters to the model estimator, and, similarly, a estimator
# may add the estimated model parameters to the model message.
# When the model is then evaluated, for example to make predictions
# or to compute the likelihood, the model class can then use
# these parameters.
#
# A parameter has a name, a value, and a type. The type globally
# indicates whether it is a prior parameter (prior to model fitting),
# or a model parameter (found during model fitting, using a maximum-
# likelihood estimator), or a cached evaluation (e.g., the likelihood
# or the BIC are a typical "side"-product of model estimation, and
# can therefore already be cached).
#
# For a list of currently used parameters, see the documentation at
# http://www.ros.org/wiki/articulation_models
#

uint8 PRIOR=0   # indicates a prior model parameter 
                # (e.g., "sigma_position")
uint8 PARAM=1   # indicates a estimated model parameter 
                # (e.g., "rot_radius", the estimated radius)
uint8 EVAL=2    # indicates a cached evaluation of the model, given 
                # the current trajectory
                # (e.g., "loglikelihood", the log likelihood of the
                # data, given the model and its parameters)

string name     # name of the parameter
float64 value   # value of the parameter
uint8 type      # type of the parameter (PRIOR, PARAM, EVAL)


================================================================================
MSG: articulation_model_msgs/TrackMsg
# Single kinematic trajectory
#
# This message contains a kinematic trajectory. The trajectory is specified
# as a vector of 6D poses. An additional flag, track_type, indicates whether
# the track is valid, and whether it includes orientation. The track id
# can be used for automatic coloring in the RVIZ track plugin, and can be 
# freely chosen by the client. 
#
# A model is fitting only from the trajectory stored in the pose[]-vector. 
# Additional information may be associated to each pose using the channels
# vector, with arbitrary # fields (e.g., to include applied/measured forces). 
#
# After model evaluation,
# also the associated configurations of the object are stored in the channels,
# named "q[0]".."q[DOF-1]", where DOF is the number of degrees of freedom.
# Model evaluation also projects the poses in the pose vector onto the model,
# and stores these ideal poses in the vector pose_projected. Further, during model
# evaluation, a new set of (uniform) configurations over the valid configuration
# range is sampled, and the result is stored in pose_resampled.
# The vector pose_flags contains additional display flags for the poses in the
# pose vector, for example, whether a pose is visible and/or
# the end of a trajectory segment. At the moment, this is only used by the
# prior_model_learner.
#

std_msgs/Header header                        # frame and timestamp
int32 id                                # used-specified track id

geometry_msgs/Pose[] pose               # sequence of poses, defining the observed trajectory
std_msgs/Header[] pose_headers                   # Timestamp and frame for each pose (and pose_projected)
geometry_msgs/Pose[] pose_projected     # sequence of poses, projected to the model 
                                        # (after model evaluation)
geometry_msgs/Pose[] pose_resampled     # sequence of poses, re-sampled from the model in
                                        # the valid configuration range
uint32[] pose_flags                     # bit-wise combination of POSE_VISIBLE and POSE_END_OF_SEGMENT

uint32 POSE_VISIBLE=1
uint32 POSE_END_OF_SEGMENT=2

# Each channel should have the same number of elements as pose array, 
# and the data in each channel should correspond 1:1 with each pose
# possible channels: "width", "height", "rgb", ...
sensor_msgs/ChannelFloat32[] channels       



================================================================================
MSG: geometry_msgs/Pose
# A representation of pose in free space, composed of position and orientation. 
Point position
Quaternion orientation

================================================================================
MSG: geometry_msgs/Point
# This contains the position of a point in free space
float64 x
float64 y
float64 z

================================================================================
MSG: geometry_msgs/Quaternion
# This represents an orientation in free space in quaternion form.

float64 x
float64 y
float64 z
float64 w

================================================================================
MSG: sensor_msgs/ChannelFloat32
# This message is used by the PointCloud message to hold optional data
# associated with each point in the cloud. The length of the values
# array should be the same as the length of the points array in the
# PointCloud, and each value should be associated with the corresponding
# point.

# Channel names in existing practice include:
#   "u", "v" - row and column (respectively) in the left stereo image.
#              This is opposite to usual conventions but remains for
#              historical reasons. The newer PointCloud2 message has no
#              such problem.
#   "rgb" - For point clouds produced by color stereo cameras. uint8
#           (R,G,B) values packed into the least significant 24 bits,
#           in order.
#   "intensity" - laser or pixel intensity.
#   "distance"

# The channel name should give semantics of the channel (e.g.
# "intensity" instead of "value").
string name

# The values array should be 1-1 with the elements of the associated
# PointCloud.
float32[] values
"""
  __slots__ = ['header','id','name','params','track']
  _slot_types = ['std_msgs/Header','int32','string','articulation_model_msgs/ParamMsg[]','articulation_model_msgs/TrackMsg']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       header,id,name,params,track

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(ModelMsg, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.id is None:
        self.id = 0
      if self.name is None:
        self.name = ''
      if self.params is None:
        self.params = []
      if self.track is None:
        self.track = articulation_model_msgs.msg.TrackMsg()
    else:
      self.header = std_msgs.msg.Header()
      self.id = 0
      self.name = ''
      self.params = []
      self.track = articulation_model_msgs.msg.TrackMsg()

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_3I().pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self.id
      buff.write(_get_struct_i().pack(_x))
      _x = self.name
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      length = len(self.params)
      buff.write(_struct_I.pack(length))
      for val1 in self.params:
        _x = val1.name
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
        _x = val1
        buff.write(_get_struct_dB().pack(_x.value, _x.type))
      _x = self
      buff.write(_get_struct_3I().pack(_x.track.header.seq, _x.track.header.stamp.secs, _x.track.header.stamp.nsecs))
      _x = self.track.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self.track.id
      buff.write(_get_struct_i().pack(_x))
      length = len(self.track.pose)
      buff.write(_struct_I.pack(length))
      for val1 in self.track.pose:
        _v1 = val1.position
        _x = _v1
        buff.write(_get_struct_3d().pack(_x.x, _x.y, _x.z))
        _v2 = val1.orientation
        _x = _v2
        buff.write(_get_struct_4d().pack(_x.x, _x.y, _x.z, _x.w))
      length = len(self.track.pose_headers)
      buff.write(_struct_I.pack(length))
      for val1 in self.track.pose_headers:
        _x = val1.seq
        buff.write(_get_struct_I().pack(_x))
        _v3 = val1.stamp
        _x = _v3
        buff.write(_get_struct_2I().pack(_x.secs, _x.nsecs))
        _x = val1.frame_id
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      length = len(self.track.pose_projected)
      buff.write(_struct_I.pack(length))
      for val1 in self.track.pose_projected:
        _v4 = val1.position
        _x = _v4
        buff.write(_get_struct_3d().pack(_x.x, _x.y, _x.z))
        _v5 = val1.orientation
        _x = _v5
        buff.write(_get_struct_4d().pack(_x.x, _x.y, _x.z, _x.w))
      length = len(self.track.pose_resampled)
      buff.write(_struct_I.pack(length))
      for val1 in self.track.pose_resampled:
        _v6 = val1.position
        _x = _v6
        buff.write(_get_struct_3d().pack(_x.x, _x.y, _x.z))
        _v7 = val1.orientation
        _x = _v7
        buff.write(_get_struct_4d().pack(_x.x, _x.y, _x.z, _x.w))
      length = len(self.track.pose_flags)
      buff.write(_struct_I.pack(length))
      pattern = '<%sI'%length
      buff.write(struct.Struct(pattern).pack(*self.track.pose_flags))
      length = len(self.track.channels)
      buff.write(_struct_I.pack(length))
      for val1 in self.track.channels:
        _x = val1.name
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
        length = len(val1.values)
        buff.write(_struct_I.pack(length))
        pattern = '<%sf'%length
        buff.write(struct.Struct(pattern).pack(*val1.values))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.params is None:
        self.params = None
      if self.track is None:
        self.track = articulation_model_msgs.msg.TrackMsg()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.header.frame_id = str[start:end]
      start = end
      end += 4
      (self.id,) = _get_struct_i().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.name = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.name = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.params = []
      for i in range(0, length):
        val1 = articulation_model_msgs.msg.ParamMsg()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.name = str[start:end].decode('utf-8', 'rosmsg')
        else:
          val1.name = str[start:end]
        _x = val1
        start = end
        end += 9
        (_x.value, _x.type,) = _get_struct_dB().unpack(str[start:end])
        self.params.append(val1)
      _x = self
      start = end
      end += 12
      (_x.track.header.seq, _x.track.header.stamp.secs, _x.track.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.track.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.track.header.frame_id = str[start:end]
      start = end
      end += 4
      (self.track.id,) = _get_struct_i().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.track.pose = []
      for i in range(0, length):
        val1 = geometry_msgs.msg.Pose()
        _v8 = val1.position
        _x = _v8
        start = end
        end += 24
        (_x.x, _x.y, _x.z,) = _get_struct_3d().unpack(str[start:end])
        _v9 = val1.orientation
        _x = _v9
        start = end
        end += 32
        (_x.x, _x.y, _x.z, _x.w,) = _get_struct_4d().unpack(str[start:end])
        self.track.pose.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.track.pose_headers = []
      for i in range(0, length):
        val1 = std_msgs.msg.Header()
        start = end
        end += 4
        (val1.seq,) = _get_struct_I().unpack(str[start:end])
        _v10 = val1.stamp
        _x = _v10
        start = end
        end += 8
        (_x.secs, _x.nsecs,) = _get_struct_2I().unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.frame_id = str[start:end].decode('utf-8', 'rosmsg')
        else:
          val1.frame_id = str[start:end]
        self.track.pose_headers.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.track.pose_projected = []
      for i in range(0, length):
        val1 = geometry_msgs.msg.Pose()
        _v11 = val1.position
        _x = _v11
        start = end
        end += 24
        (_x.x, _x.y, _x.z,) = _get_struct_3d().unpack(str[start:end])
        _v12 = val1.orientation
        _x = _v12
        start = end
        end += 32
        (_x.x, _x.y, _x.z, _x.w,) = _get_struct_4d().unpack(str[start:end])
        self.track.pose_projected.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.track.pose_resampled = []
      for i in range(0, length):
        val1 = geometry_msgs.msg.Pose()
        _v13 = val1.position
        _x = _v13
        start = end
        end += 24
        (_x.x, _x.y, _x.z,) = _get_struct_3d().unpack(str[start:end])
        _v14 = val1.orientation
        _x = _v14
        start = end
        end += 32
        (_x.x, _x.y, _x.z, _x.w,) = _get_struct_4d().unpack(str[start:end])
        self.track.pose_resampled.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sI'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.track.pose_flags = s.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.track.channels = []
      for i in range(0, length):
        val1 = sensor_msgs.msg.ChannelFloat32()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.name = str[start:end].decode('utf-8', 'rosmsg')
        else:
          val1.name = str[start:end]
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        pattern = '<%sf'%length
        start = end
        s = struct.Struct(pattern)
        end += s.size
        val1.values = s.unpack(str[start:end])
        self.track.channels.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_3I().pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self.id
      buff.write(_get_struct_i().pack(_x))
      _x = self.name
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      length = len(self.params)
      buff.write(_struct_I.pack(length))
      for val1 in self.params:
        _x = val1.name
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
        _x = val1
        buff.write(_get_struct_dB().pack(_x.value, _x.type))
      _x = self
      buff.write(_get_struct_3I().pack(_x.track.header.seq, _x.track.header.stamp.secs, _x.track.header.stamp.nsecs))
      _x = self.track.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self.track.id
      buff.write(_get_struct_i().pack(_x))
      length = len(self.track.pose)
      buff.write(_struct_I.pack(length))
      for val1 in self.track.pose:
        _v15 = val1.position
        _x = _v15
        buff.write(_get_struct_3d().pack(_x.x, _x.y, _x.z))
        _v16 = val1.orientation
        _x = _v16
        buff.write(_get_struct_4d().pack(_x.x, _x.y, _x.z, _x.w))
      length = len(self.track.pose_headers)
      buff.write(_struct_I.pack(length))
      for val1 in self.track.pose_headers:
        _x = val1.seq
        buff.write(_get_struct_I().pack(_x))
        _v17 = val1.stamp
        _x = _v17
        buff.write(_get_struct_2I().pack(_x.secs, _x.nsecs))
        _x = val1.frame_id
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      length = len(self.track.pose_projected)
      buff.write(_struct_I.pack(length))
      for val1 in self.track.pose_projected:
        _v18 = val1.position
        _x = _v18
        buff.write(_get_struct_3d().pack(_x.x, _x.y, _x.z))
        _v19 = val1.orientation
        _x = _v19
        buff.write(_get_struct_4d().pack(_x.x, _x.y, _x.z, _x.w))
      length = len(self.track.pose_resampled)
      buff.write(_struct_I.pack(length))
      for val1 in self.track.pose_resampled:
        _v20 = val1.position
        _x = _v20
        buff.write(_get_struct_3d().pack(_x.x, _x.y, _x.z))
        _v21 = val1.orientation
        _x = _v21
        buff.write(_get_struct_4d().pack(_x.x, _x.y, _x.z, _x.w))
      length = len(self.track.pose_flags)
      buff.write(_struct_I.pack(length))
      pattern = '<%sI'%length
      buff.write(self.track.pose_flags.tostring())
      length = len(self.track.channels)
      buff.write(_struct_I.pack(length))
      for val1 in self.track.channels:
        _x = val1.name
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
        length = len(val1.values)
        buff.write(_struct_I.pack(length))
        pattern = '<%sf'%length
        buff.write(val1.values.tostring())
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.params is None:
        self.params = None
      if self.track is None:
        self.track = articulation_model_msgs.msg.TrackMsg()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.header.frame_id = str[start:end]
      start = end
      end += 4
      (self.id,) = _get_struct_i().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.name = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.name = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.params = []
      for i in range(0, length):
        val1 = articulation_model_msgs.msg.ParamMsg()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.name = str[start:end].decode('utf-8', 'rosmsg')
        else:
          val1.name = str[start:end]
        _x = val1
        start = end
        end += 9
        (_x.value, _x.type,) = _get_struct_dB().unpack(str[start:end])
        self.params.append(val1)
      _x = self
      start = end
      end += 12
      (_x.track.header.seq, _x.track.header.stamp.secs, _x.track.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.track.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.track.header.frame_id = str[start:end]
      start = end
      end += 4
      (self.track.id,) = _get_struct_i().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.track.pose = []
      for i in range(0, length):
        val1 = geometry_msgs.msg.Pose()
        _v22 = val1.position
        _x = _v22
        start = end
        end += 24
        (_x.x, _x.y, _x.z,) = _get_struct_3d().unpack(str[start:end])
        _v23 = val1.orientation
        _x = _v23
        start = end
        end += 32
        (_x.x, _x.y, _x.z, _x.w,) = _get_struct_4d().unpack(str[start:end])
        self.track.pose.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.track.pose_headers = []
      for i in range(0, length):
        val1 = std_msgs.msg.Header()
        start = end
        end += 4
        (val1.seq,) = _get_struct_I().unpack(str[start:end])
        _v24 = val1.stamp
        _x = _v24
        start = end
        end += 8
        (_x.secs, _x.nsecs,) = _get_struct_2I().unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.frame_id = str[start:end].decode('utf-8', 'rosmsg')
        else:
          val1.frame_id = str[start:end]
        self.track.pose_headers.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.track.pose_projected = []
      for i in range(0, length):
        val1 = geometry_msgs.msg.Pose()
        _v25 = val1.position
        _x = _v25
        start = end
        end += 24
        (_x.x, _x.y, _x.z,) = _get_struct_3d().unpack(str[start:end])
        _v26 = val1.orientation
        _x = _v26
        start = end
        end += 32
        (_x.x, _x.y, _x.z, _x.w,) = _get_struct_4d().unpack(str[start:end])
        self.track.pose_projected.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.track.pose_resampled = []
      for i in range(0, length):
        val1 = geometry_msgs.msg.Pose()
        _v27 = val1.position
        _x = _v27
        start = end
        end += 24
        (_x.x, _x.y, _x.z,) = _get_struct_3d().unpack(str[start:end])
        _v28 = val1.orientation
        _x = _v28
        start = end
        end += 32
        (_x.x, _x.y, _x.z, _x.w,) = _get_struct_4d().unpack(str[start:end])
        self.track.pose_resampled.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sI'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.track.pose_flags = numpy.frombuffer(str[start:end], dtype=numpy.uint32, count=length)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.track.channels = []
      for i in range(0, length):
        val1 = sensor_msgs.msg.ChannelFloat32()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.name = str[start:end].decode('utf-8', 'rosmsg')
        else:
          val1.name = str[start:end]
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        pattern = '<%sf'%length
        start = end
        s = struct.Struct(pattern)
        end += s.size
        val1.values = numpy.frombuffer(str[start:end], dtype=numpy.float32, count=length)
        self.track.channels.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_2I = None
def _get_struct_2I():
    global _struct_2I
    if _struct_2I is None:
        _struct_2I = struct.Struct("<2I")
    return _struct_2I
_struct_3I = None
def _get_struct_3I():
    global _struct_3I
    if _struct_3I is None:
        _struct_3I = struct.Struct("<3I")
    return _struct_3I
_struct_3d = None
def _get_struct_3d():
    global _struct_3d
    if _struct_3d is None:
        _struct_3d = struct.Struct("<3d")
    return _struct_3d
_struct_4d = None
def _get_struct_4d():
    global _struct_4d
    if _struct_4d is None:
        _struct_4d = struct.Struct("<4d")
    return _struct_4d
_struct_dB = None
def _get_struct_dB():
    global _struct_dB
    if _struct_dB is None:
        _struct_dB = struct.Struct("<dB")
    return _struct_dB
_struct_i = None
def _get_struct_i():
    global _struct_i
    if _struct_i is None:
        _struct_i = struct.Struct("<i")
    return _struct_i
