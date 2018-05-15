; Auto-generated. Do not edit!


(cl:in-package final_pkg-msg)


;//! \htmlinclude vector_m.msg.html

(cl:defclass <vector_m> (roslisp-msg-protocol:ros-message)
  ((avaiable_points
    :reader avaiable_points
    :initarg :avaiable_points
    :type (cl:vector geometry_msgs-msg:Point)
   :initform (cl:make-array 0 :element-type 'geometry_msgs-msg:Point :initial-element (cl:make-instance 'geometry_msgs-msg:Point))))
)

(cl:defclass vector_m (<vector_m>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <vector_m>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'vector_m)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name final_pkg-msg:<vector_m> is deprecated: use final_pkg-msg:vector_m instead.")))

(cl:ensure-generic-function 'avaiable_points-val :lambda-list '(m))
(cl:defmethod avaiable_points-val ((m <vector_m>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader final_pkg-msg:avaiable_points-val is deprecated.  Use final_pkg-msg:avaiable_points instead.")
  (avaiable_points m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <vector_m>) ostream)
  "Serializes a message object of type '<vector_m>"
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'avaiable_points))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (roslisp-msg-protocol:serialize ele ostream))
   (cl:slot-value msg 'avaiable_points))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <vector_m>) istream)
  "Deserializes a message object of type '<vector_m>"
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'avaiable_points) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'avaiable_points)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:aref vals i) (cl:make-instance 'geometry_msgs-msg:Point))
  (roslisp-msg-protocol:deserialize (cl:aref vals i) istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<vector_m>)))
  "Returns string type for a message object of type '<vector_m>"
  "final_pkg/vector_m")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'vector_m)))
  "Returns string type for a message object of type 'vector_m"
  "final_pkg/vector_m")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<vector_m>)))
  "Returns md5sum for a message object of type '<vector_m>"
  "1e4e4c7924162920dede83839967ccfc")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'vector_m)))
  "Returns md5sum for a message object of type 'vector_m"
  "1e4e4c7924162920dede83839967ccfc")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<vector_m>)))
  "Returns full string definition for message of type '<vector_m>"
  (cl:format cl:nil "geometry_msgs/Point[] avaiable_points~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'vector_m)))
  "Returns full string definition for message of type 'vector_m"
  (cl:format cl:nil "geometry_msgs/Point[] avaiable_points~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <vector_m>))
  (cl:+ 0
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'avaiable_points) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ (roslisp-msg-protocol:serialization-length ele))))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <vector_m>))
  "Converts a ROS message object to a list"
  (cl:list 'vector_m
    (cl:cons ':avaiable_points (avaiable_points msg))
))
