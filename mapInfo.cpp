#include <ros/ros.h>
#include <nav_msgs/OccupancyGrid.h>
#include <std_msgs/Bool.h>
#include <vector>
#include <geometry_msgs/Point.h>
#include "final_pkg/vector_m.h"

using namespace std;

//check to see if msg read and intialize variables 
bool infoCheck = false;
float w;
float h;
float x;
float y;
float resolution;

//create a custom msg
final_pkg::vector_m msg;

//convert the 2d matrix into a 1d matrix
void conversion(int k, int z, int &i)
{
	i = k + (h-z-1) * w;
	
} 

//create a new map points
void createMap(float w, float h, float map_x, float map_y, float resolution,  const std::vector<signed char, std::allocator<signed char> >& data)
{
	//initializations
	int newMapX, newMapY;
	int i;
	int k = 0;
	
	//prints out the format
	ROS_INFO_STREAM("w h x y " << w << " "  << h << "  "  << map_x << " "  << map_y);

	//clear out storage
	msg.avaiable_points.clear();

	//increment the row by 38 so total of 21 points
	while(k < w)
	{
		//increament the column by 38 create total of 21 points
		for(int z = 0; z < h; z += 38)
		{
			//conversion calculations
			conversion(k, z, i);
			
			//check whether probability of occupancy is in between 0 and 12
			if(data[i] == 0 && data[i] <= 12)
			{
				//create a point object
				geometry_msgs::Point point;
				//calculate the new points
				newMapX = (k * resolution) + map_x;
				newMapY = (z * resolution) + map_y;

				//check if the new points are between 9 or -9 due to the wall is around 10
				if(newMapX < 9 && newMapX >-9 && newMapY < 9 && newMapY >-9)
				{			
					//stores the points
					point.x = newMapX;
					point.y = newMapY;
					ROS_INFO_STREAM("X " << point.x);
					ROS_INFO_STREAM("y " << point.y);

					//push the points found into the custom msg
					msg.avaiable_points.push_back(point);
				}
				else
				{	//if the probability is over 92 then continue the iteration
					continue;
				}
			}
		}
		k+= 38;
	}

	ROS_INFO_STREAM("Map Generated!");
}

//obtain the map information
void mapInfo(const nav_msgs::OccupancyGrid& msg)
{

	//check to see if the map is already made
	if(infoCheck)
	{
		return;
	}
	else
	{
		infoCheck = true;
	}

	//obtain the map width heigh original position x and y and resolution
	w = msg.info.width;
	h = msg.info.height;
	x = msg.info.origin.position.x;
	y = msg.info.origin.position.y;
	resolution = msg.info.resolution;

	ROS_INFO_STREAM("Map Info Established!");

	//call the function to obtains new points
	createMap(w, h, x, y , resolution, msg.data);
	
}

//spin to get new info
void getInfo()
{
	ros::Rate rate(10);
	while(ros::ok())
	{
		ros::spinOnce();
		if(infoCheck) break;
	}
}

//publish the custom msg to a topic
void publishPoints()
{
	ros::NodeHandle n; 
	ros::Publisher pub = n.advertise<final_pkg::vector_m>("WHATSUP", 1000);
	
	while(ros::ok())
	{
		pub.publish(msg);
		ros::spinOnce();
	}
	ROS_INFO_STREAM("Points Published!");
}

int main(int argc, char ** argv)
{
	//intialize ros node
	ros::init(argc, argv, "map");
	ros::NodeHandle nh;

	ROS_INFO_STREAM("Getting Map Info");
	//subscribe to map and call mapInfo
	ros::Subscriber sub = nh.subscribe("map", 2, &mapInfo);

	//spin to get info
	getInfo();
	//publish the points
	publishPoints();
	ROS_INFO_STREAM("Complete.");

}

