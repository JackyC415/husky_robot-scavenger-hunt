#include <ros/ros.h>
#include <move_base_msgs/MoveBaseAction.h>
#include <actionlib/client/simple_action_client.h>
#include <vector>
#include <geometry_msgs/Point.h>
#include "final_pkg/vector_m.h"
#include <sensor_msgs/LaserScan.h>
#include <geometry_msgs/Twist.h>

#include <vector>
#include <queue> 
using namespace std;

//move_base client from previous lab
void setActionClient(int moveX, int moveY )
{

	//print msg
	ROS_INFO_STREAM("Establishing action client...");


	//set up movebase
	actionlib::SimpleActionClient<move_base_msgs::MoveBaseAction> ac("move_base", true);
	while(!ac.waitForServer()){};


	//print msg
	ROS_INFO_STREAM("Action client started!");

	//create a goal object
	move_base_msgs::MoveBaseGoal goal;
	
	//call the proper functions
	goal.target_pose.header.frame_id = "map";
	goal.target_pose.header.stamp = ros::Time::now();
	goal.target_pose.pose.position.x = moveX;
	goal.target_pose.pose.position.y = moveY;
	goal.target_pose.pose.orientation.w = 90.0;

	//print msg
	ROS_INFO_STREAM("Approaching:  " << "(" << moveX << " , " << moveY << ")");

	//send goal
	ac.sendGoal(goal);
	//wait for result for 20 second
	ac.waitForResult(ros::Duration(20.0));

	//check to see if it reaches goal
	if (ac.getState() == actionlib::SimpleClientGoalState::SUCCEEDED) {
			ROS_INFO_STREAM("Goal Reached!");
/*
			msg.linear.x = 0.0;
  			msg.linear.y = 0.0;
			msg.angular.z = 2.24;
			pubTwist.publish(msg);
			ros::Duration(6.0).sleep();
*/
	} else

	{
		//pring msg and cancel the goal 
		ROS_INFO_STREAM("Moving towards NEXT goal...");
		ac.cancelGoal();
	}
}


//get the points from the publisher and post it to the variable
void getPoints(const final_pkg::vector_m::ConstPtr& msg)
{

	int moveX, moveY;
	for(int i = 0; i < msg->avaiable_points.size() ; i++)
	{
			moveX = -msg->avaiable_points[i].x;
			moveY = -msg->avaiable_points[i].y;	

			setActionClient(moveX, moveY);
	}
}

int main(int argc, char ** argv)
{
	//initalize the node
	ros::init(argc, argv, "move");
	//create handler
	ros::NodeHandle nh;

	//print msg
	ROS_INFO_STREAM("Acquiring location points...");

	//subscribe to get the points
	ros::Subscriber subPoints = nh.subscribe("WHATSUP", 1000, &getPoints);

	//spin to read points
	ros::spin();

}
