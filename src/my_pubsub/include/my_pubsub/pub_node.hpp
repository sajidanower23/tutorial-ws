/*
 * Date Started: 09/03/2017
 * Original Author: Harry J.E Day
 * Editors:
 * ROS Node Name: pub_node
 * ROS Package: my_pubub
 * Purpose: To demonstrate a simple publisher node.
 * This code is released under the MIT  License. Copyright BLUEsat UNSW, 2017
 */

// These import the main ros libary and the message we are going to send
#include <ros/ros.h>
#include <std_msgs/Float64.h>
#include <geometry_msgs/Twist.h>

class Pub_Node {
    public:
        Pub_Node();
        void spin();

    private:
        ros::NodeHandle nh;
        ros::Publisher pub;
};
