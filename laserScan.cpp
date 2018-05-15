#include <sensor_msgs/LaserScan.h>
#include <ros/ros.h>
#include <move_base_msgs/MoveBaseAction.h>
#include <actionlib/client/simple_action_client.h>
#include <vector>
#include <geometry_msgs/Point.h>
#include "final_pkg/vector_m.h"
#include <sensor_msgs/LaserScan.h>
#include <geometry_msgs/Twist.h>
#include <geometry_msgs/Twist.h>

//boolean variable to keep track of state
void laserScan(const sensor_msgs::LaserScan&scan) {


//initialize node
ros::NodeHandle nh;
//publish twist for movement
ros::Publisher pubTwist = nh.advertise<geometry_msgs::Twist>("/cmd_vel",1000);
geometry_msgs::Twist msg;

for(int i = 260; i < 420; i++) {
    
//if range is within 0.2m, terminate robot
    if(scan.ranges[i] <= 0.8) {
		ROS_INFO_STREAM("TOO CLOSE TO WALL");
	msg.linear.x = -10.0;
  	msg.linear.y = 0.0;
    	msg.angular.z = 0.0;
    	pubTwist.publish(msg);
	ros::Duration(8.0).sleep();
    //break the loop and return state to main
    break;
    }
    
}
return;
}

int main(int argc, char ** argv) {

//initialize node
ros::init(argc,argv,"laserSc");
ros::NodeHandle nh;
//subscribe to topic scan & reference laserScan function
ros::Subscriber sub = nh.subscribe("/scan", 1000, &laserScan);

ros::spin();

}

