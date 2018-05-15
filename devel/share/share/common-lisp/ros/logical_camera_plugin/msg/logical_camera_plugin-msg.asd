
(cl:in-package :asdf)

(defsystem "logical_camera_plugin-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :geometry_msgs-msg
)
  :components ((:file "_package")
    (:file "logicalImage" :depends-on ("_package_logicalImage"))
    (:file "_package_logicalImage" :depends-on ("_package"))
    (:file "vector_m" :depends-on ("_package_vector_m"))
    (:file "_package_vector_m" :depends-on ("_package"))
  ))