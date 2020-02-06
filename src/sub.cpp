#include "ros/ros.h"
#include "std_msgs/String.h"
#include "sensor_msgs/PointCloud2.h"
using namespace std;

void pointcloudCallback(const sensor_msgs::PointCloud2::ConstPtr& msg)
{
  cout << msg->data.size() <<endl;
}

int main(int argc, char **argv)
{
  
  ros::init(argc, argv, "sub");

 
  ros::NodeHandle n;


  ros::Subscriber sub = n.subscribe("/front_camera/depth/points", 1000, pointcloudCallback);

  ros::spin();

  return 0;
}