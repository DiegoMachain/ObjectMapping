;; Auto-generated. Do not edit!


(when (boundp 'pr2_controllers_msgs::Pr2GripperCommandFeedback)
  (if (not (find-package "PR2_CONTROLLERS_MSGS"))
    (make-package "PR2_CONTROLLERS_MSGS"))
  (shadow 'Pr2GripperCommandFeedback (find-package "PR2_CONTROLLERS_MSGS")))
(unless (find-package "PR2_CONTROLLERS_MSGS::PR2GRIPPERCOMMANDFEEDBACK")
  (make-package "PR2_CONTROLLERS_MSGS::PR2GRIPPERCOMMANDFEEDBACK"))

(in-package "ROS")
;;//! \htmlinclude Pr2GripperCommandFeedback.msg.html


(defclass pr2_controllers_msgs::Pr2GripperCommandFeedback
  :super ros::object
  :slots (_position _effort _stalled _reached_goal ))

(defmethod pr2_controllers_msgs::Pr2GripperCommandFeedback
  (:init
   (&key
    ((:position __position) 0.0)
    ((:effort __effort) 0.0)
    ((:stalled __stalled) nil)
    ((:reached_goal __reached_goal) nil)
    )
   (send-super :init)
   (setq _position (float __position))
   (setq _effort (float __effort))
   (setq _stalled __stalled)
   (setq _reached_goal __reached_goal)
   self)
  (:position
   (&optional __position)
   (if __position (setq _position __position)) _position)
  (:effort
   (&optional __effort)
   (if __effort (setq _effort __effort)) _effort)
  (:stalled
   (&optional __stalled)
   (if __stalled (setq _stalled __stalled)) _stalled)
  (:reached_goal
   (&optional __reached_goal)
   (if __reached_goal (setq _reached_goal __reached_goal)) _reached_goal)
  (:serialization-length
   ()
   (+
    ;; float64 _position
    8
    ;; float64 _effort
    8
    ;; bool _stalled
    1
    ;; bool _reached_goal
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; float64 _position
       (sys::poke _position (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _effort
       (sys::poke _effort (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; bool _stalled
       (if _stalled (write-byte -1 s) (write-byte 0 s))
     ;; bool _reached_goal
       (if _reached_goal (write-byte -1 s) (write-byte 0 s))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; float64 _position
     (setq _position (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _effort
     (setq _effort (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; bool _stalled
     (setq _stalled (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _reached_goal
     (setq _reached_goal (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;;
   self)
  )

(setf (get pr2_controllers_msgs::Pr2GripperCommandFeedback :md5sum-) "e4cbff56d3562bcf113da5a5adeef91f")
(setf (get pr2_controllers_msgs::Pr2GripperCommandFeedback :datatype-) "pr2_controllers_msgs/Pr2GripperCommandFeedback")
(setf (get pr2_controllers_msgs::Pr2GripperCommandFeedback :definition-)
      "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
float64 position  # The current gripper gap size (in meters)
float64 effort    # The current effort exerted (in Newtons)
bool stalled      # True iff the gripper is exerting max effort and not moving
bool reached_goal # True iff the gripper position has reached the commanded setpoint


")



(provide :pr2_controllers_msgs/Pr2GripperCommandFeedback "e4cbff56d3562bcf113da5a5adeef91f")

