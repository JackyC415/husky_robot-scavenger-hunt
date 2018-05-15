;; Auto-generated. Do not edit!


(when (boundp 'final_pkg::vector_m)
  (if (not (find-package "FINAL_PKG"))
    (make-package "FINAL_PKG"))
  (shadow 'vector_m (find-package "FINAL_PKG")))
(unless (find-package "FINAL_PKG::VECTOR_M")
  (make-package "FINAL_PKG::VECTOR_M"))

(in-package "ROS")
;;//! \htmlinclude vector_m.msg.html
(if (not (find-package "GEOMETRY_MSGS"))
  (ros::roseus-add-msgs "geometry_msgs"))


(defclass final_pkg::vector_m
  :super ros::object
  :slots (_avaiable_points ))

(defmethod final_pkg::vector_m
  (:init
   (&key
    ((:avaiable_points __avaiable_points) (let (r) (dotimes (i 0) (push (instance geometry_msgs::Point :init) r)) r))
    )
   (send-super :init)
   (setq _avaiable_points __avaiable_points)
   self)
  (:avaiable_points
   (&rest __avaiable_points)
   (if (keywordp (car __avaiable_points))
       (send* _avaiable_points __avaiable_points)
     (progn
       (if __avaiable_points (setq _avaiable_points (car __avaiable_points)))
       _avaiable_points)))
  (:serialization-length
   ()
   (+
    ;; geometry_msgs/Point[] _avaiable_points
    (apply #'+ (send-all _avaiable_points :serialization-length)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; geometry_msgs/Point[] _avaiable_points
     (write-long (length _avaiable_points) s)
     (dolist (elem _avaiable_points)
       (send elem :serialize s)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; geometry_msgs/Point[] _avaiable_points
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _avaiable_points (let (r) (dotimes (i n) (push (instance geometry_msgs::Point :init) r)) r))
     (dolist (elem- _avaiable_points)
     (send elem- :deserialize buf ptr-) (incf ptr- (send elem- :serialization-length))
     ))
   ;;
   self)
  )

(setf (get final_pkg::vector_m :md5sum-) "1e4e4c7924162920dede83839967ccfc")
(setf (get final_pkg::vector_m :datatype-) "final_pkg/vector_m")
(setf (get final_pkg::vector_m :definition-)
      "geometry_msgs/Point[] avaiable_points

================================================================================
MSG: geometry_msgs/Point
# This contains the position of a point in free space
float64 x
float64 y
float64 z

")



(provide :final_pkg/vector_m "1e4e4c7924162920dede83839967ccfc")


