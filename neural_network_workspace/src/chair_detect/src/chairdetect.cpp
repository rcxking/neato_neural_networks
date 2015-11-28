/*
 * chairdetect.cpp - This ROS Service receives an OpenCV Mat() object
 * as input and attempts to find chair legs.
 *
 * Bryant Pong
 * 11/27/15
 * 
 * Last Updated: 11/27/15 - 9:29 PM
 */

// ROS Includes:
//
#include "ros/ros.h"

// Main function:
//
int main( int argc, char **argv )
{
	// Initialize the Chair Detection Service:
	//
	ros::init( argc, argv, "chair_detection_server" );

	// ROS Node Handle:
	//
	ros::NodeHandle n;

	return 0;
}
