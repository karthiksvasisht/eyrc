; Auto-generated. Do not edit!


(cl:in-package pkg_task1-msg)


;//! \htmlinclude msgTurtleResult.msg.html

(cl:defclass <msgTurtleResult> (roslisp-msg-protocol:ros-message)
  ((final_x
    :reader final_x
    :initarg :final_x
    :type cl:fixnum
    :initform 0)
   (final_y
    :reader final_y
    :initarg :final_y
    :type cl:fixnum
    :initform 0)
   (final_theta
    :reader final_theta
    :initarg :final_theta
    :type cl:fixnum
    :initform 0))
)

(cl:defclass msgTurtleResult (<msgTurtleResult>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <msgTurtleResult>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'msgTurtleResult)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name pkg_task1-msg:<msgTurtleResult> is deprecated: use pkg_task1-msg:msgTurtleResult instead.")))

(cl:ensure-generic-function 'final_x-val :lambda-list '(m))
(cl:defmethod final_x-val ((m <msgTurtleResult>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader pkg_task1-msg:final_x-val is deprecated.  Use pkg_task1-msg:final_x instead.")
  (final_x m))

(cl:ensure-generic-function 'final_y-val :lambda-list '(m))
(cl:defmethod final_y-val ((m <msgTurtleResult>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader pkg_task1-msg:final_y-val is deprecated.  Use pkg_task1-msg:final_y instead.")
  (final_y m))

(cl:ensure-generic-function 'final_theta-val :lambda-list '(m))
(cl:defmethod final_theta-val ((m <msgTurtleResult>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader pkg_task1-msg:final_theta-val is deprecated.  Use pkg_task1-msg:final_theta instead.")
  (final_theta m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <msgTurtleResult>) ostream)
  "Serializes a message object of type '<msgTurtleResult>"
  (cl:let* ((signed (cl:slot-value msg 'final_x)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 256) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'final_y)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 256) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'final_theta)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 256) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    )
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <msgTurtleResult>) istream)
  "Deserializes a message object of type '<msgTurtleResult>"
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'final_x) (cl:if (cl:< unsigned 128) unsigned (cl:- unsigned 256))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'final_y) (cl:if (cl:< unsigned 128) unsigned (cl:- unsigned 256))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'final_theta) (cl:if (cl:< unsigned 128) unsigned (cl:- unsigned 256))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<msgTurtleResult>)))
  "Returns string type for a message object of type '<msgTurtleResult>"
  "pkg_task1/msgTurtleResult")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'msgTurtleResult)))
  "Returns string type for a message object of type 'msgTurtleResult"
  "pkg_task1/msgTurtleResult")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<msgTurtleResult>)))
  "Returns md5sum for a message object of type '<msgTurtleResult>"
  "dcbe64f721494990ab374cf224b365bf")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'msgTurtleResult)))
  "Returns md5sum for a message object of type 'msgTurtleResult"
  "dcbe64f721494990ab374cf224b365bf")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<msgTurtleResult>)))
  "Returns full string definition for message of type '<msgTurtleResult>"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%# result~%int8 final_x~%int8 final_y~%int8 final_theta~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'msgTurtleResult)))
  "Returns full string definition for message of type 'msgTurtleResult"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%# result~%int8 final_x~%int8 final_y~%int8 final_theta~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <msgTurtleResult>))
  (cl:+ 0
     1
     1
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <msgTurtleResult>))
  "Converts a ROS message object to a list"
  (cl:list 'msgTurtleResult
    (cl:cons ':final_x (final_x msg))
    (cl:cons ':final_y (final_y msg))
    (cl:cons ':final_theta (final_theta msg))
))
