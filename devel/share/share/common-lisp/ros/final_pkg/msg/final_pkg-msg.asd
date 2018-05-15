
(cl:in-package :asdf)

(defsystem "final_pkg-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :geometry_msgs-msg
)
  :components ((:file "_package")
    (:file "vector_m" :depends-on ("_package_vector_m"))
    (:file "_package_vector_m" :depends-on ("_package"))
  ))