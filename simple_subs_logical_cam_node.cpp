#include <iostream>
#include <string>
#include "std_msgs/String.h"
#include "ros/ros.h"
#include <gazebo_msgs/SetModelState.h>
#include <cstdlib>
#include <time.h>
#include <fstream>
#include <random>
#include "logical_camera_plugin/logicalImage.h"
#include <tf/transform_datatypes.h>
#include <cmath>
#include <algorithm>
#include <tf2/LinearMath/Quaternion.h>
#include <tf2/impl/utils.h>
#include <tf2_ros/transform_listener.h>
#include <vector>
#include <sstream>

using namespace std;

string s1,s2,s3,s4,s5;
string modelNames[5];
int count = -1;

std::vector<std::string> found_tags;

void readObjectsDetected(const logical_camera_plugin::logicalImage::ConstPtr& msg) {

tf::Vector3 v = tf::Vector3(msg->pose_pos_x,msg->pose_pos_y,msg->pose_pos_z);
        
tf::Quaternion q = tf::Quaternion(msg->pose_rot_x, msg->pose_rot_y,msg->pose_rot_z, msg->pose_rot_w);

tf::Transform transform(q,v);

	if(msg->modelName != s1 && msg->modelName != s2 && msg->modelName != s3 && msg->modelName != s4 && msg->modelName != s5)
	{
		if(s1.empty()){
			s1 = msg->modelName;
		ROS_INFO_STREAM("Detected: "<< msg->modelName << " at " << "(" << msg->pose_pos_x << ", " << msg->pose_pos_y << ", " << msg->pose_pos_z << ")");
		}
		if(s2.empty() && s1!=msg->modelName){
			s2 = msg->modelName;
		ROS_INFO_STREAM("Detected: "<< msg->modelName << " at " << "(" << msg->pose_pos_x << ", " << msg->pose_pos_y << ", " << msg->pose_pos_z << ")");
		}if(s3.empty() && s1!=msg->modelName && s2!=msg->modelName){
			s3 = msg->modelName;
		ROS_INFO_STREAM("Detected: "<< msg->modelName << " at " << "(" << msg->pose_pos_x << ", " << msg->pose_pos_y << ", " << msg->pose_pos_z << ")");

		}if(s4.empty() && s1!=msg->modelName && s2!=msg->modelName && s3!=msg->modelName){
			s4 = msg->modelName;
		ROS_INFO_STREAM("Detected: "<< msg->modelName << " at " << "(" << msg->pose_pos_x << ", " << msg->pose_pos_y << ", " << msg->pose_pos_z << ")");

		}if(s5.empty() && s1!=msg->modelName && s2!=msg->modelName && s3!=msg->modelName && s4!=msg->modelName){
			s5 = msg->modelName;
		ROS_INFO_STREAM("Detected: "<< msg->modelName << " at " << "(" << msg->pose_pos_x << ", " << msg->pose_pos_y << ", " << msg->pose_pos_z << ")");
		}
	}
		
}

int main(int argc, char **argv)
{

ros::init(argc,argv,"simple_subs_logical_cam_node");
ros::NodeHandle n;

ros::Subscriber sub_obj = n.subscribe("/objectsDetected", 1000, &readObjectsDetected);

ros::spin();

return 0;

}
