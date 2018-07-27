/*
 * Date Started: 09/03/2017
 * Original Author: Harry J.E Day
 * Editors:
 * ROS Node Name: pub_node
 * ROS Package: my_pubsub
 * Purpose: To demonstrate a simple publisher node.
 * This code is released under the MIT  License. Copyright BLUEsat UNSW, 2017
 */

#include "my_pubsub/pub_node.hpp"


int main(int argc, char ** argv) {
    // starts ros, code will block here if roscore is not running
    ros::init(argc, argv, "pub_node");
    ROS_INFO("Hello Robot");
    Pub_Node my_node;
    my_node.spin();

    return EXIT_SUCCESS;
}

Pub_Node::Pub_Node() {
    pub = nh.advertise<std_msgs::Float64>("/upper_arm_act_controller/command", 1, true);
}

