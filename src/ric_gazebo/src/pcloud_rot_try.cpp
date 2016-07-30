
#include "ros/ros.h"
#include "std_msgs/String.h"
#include "std_msgs/Float64.h"
#include "sensor_msgs/LaserScan.h"
#include "sensor_msgs/Range.h"
#include "geometry_msgs/Twist.h"
#include "nav_msgs/Odometry.h"
#include "geometry_msgs/Quaternion.h"
#include <image_transport/image_transport.h>
#include <opencv2/highgui/highgui.hpp>
#include "opencv2/imgproc/imgproc.hpp"
#include <cv_bridge/cv_bridge.h>
#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
#include <stdio.h>
#include <sstream>
#include <boost/thread.hpp>
#define LEFT (0)
#define RIGHT (1)
//GLOBAL VARS 
const float MIN_RANGE = 0.9; 
bool NO_OBSTACLE = true;
bool OBJECT_ON_RIGHT = false;
bool OBJECT_ON_LEFT = false;
float Degree = 0;
float right_distance;
float left_distance;
bool Finish_State = false;
bool Box_Recognize = false;
bool Box_Red = false;
bool Scan_Values_Nedded = false;

int SLALUM_SIDE = LEFT;

using namespace cv;
using namespace std;


   
/*Receives and prints data from laser.*/
void scanValues(const sensor_msgs::LaserScan laser)
{
  if(Scan_Values_Nedded)
  {
    std::vector<float> ranges(laser.ranges.begin(), laser.ranges.end());
    std::vector<float>::iterator range_it = std::min_element(ranges.begin()+250, ranges.end()-250);

    //If current postion is smaller than min        
    if(*range_it < MIN_RANGE) 
    {
//           ROS_INFO("the min was: %lf", *range_it);
      NO_OBSTACLE = false;  
    }  
    else{
      NO_OBSTACLE = true;
    } 
  }

}

/*
  Receives and prints data from urf of the right side
  this method is used to determine when we passed the box from the side
*/
void rangeValuesRight(const sensor_msgs::Range urf)
{

  if (SLALUM_SIDE == LEFT)
  {
    float r = urf.range;
    right_distance = r;
    if (r < 0.9){
      OBJECT_ON_RIGHT = true;
    }
    else{
      OBJECT_ON_RIGHT = false;
    }
  }
}

/*
  Receives and prints data from urf of the right side
  this method is used to determine when we passed the box from the side
*/
void rangeValuesLeft(const sensor_msgs::Range urf)
{
  if (SLALUM_SIDE == RIGHT)
  {
    float l = urf.range;
    left_distance = l;
    if (l < 0.9){
      OBJECT_ON_LEFT = true;
    }
    else{
      OBJECT_ON_LEFT = false;
    }
  }

}

/**
  //TODO clear
**/
void odometryValues( const nav_msgs::Odometry od)
{
  if(Finish_State)
  {
   Degree = od.pose.pose.orientation.z;
  }
}


int detectColor(Mat &sceneImage,int widthImage,int heightImage){
  
  int iLowH = 0;
  int iHighH = 10;
  
  int iLowS = 50; 
  int iHighS = 255;
  
  int iLowV = 50;
  int iHighV = 255;
  
  Mat imgHSV;
  
  cvtColor(sceneImage, imgHSV, COLOR_BGR2HSV); //Convert the captured frame from BGR to HSV
  
  Mat imgThresholded;
  
  inRange(imgHSV, Scalar(iLowH, iLowS, iLowV), Scalar(iHighH, iHighS, iHighV), imgThresholded); //Threshold the image
  
  //compute center of picture pixel
  int height = imgThresholded.rows/2;
  int width = imgThresholded.cols/2;

  // printf("%p is PTR\n", imgThresholded.ptr(height, width));
  // printf("%d is RGB\n", *imgThresholded.ptr(height, width));
  // printf("%d is height\n", height);
  // printf("%d is width\n", width);

  return (*imgThresholded.ptr(height, width) != 0);
  
}

void cameraValues( const sensor_msgs::ImageConstPtr& msg)
{
  if(Box_Recognize)
  {
    try
    { 
      ROS_INFO("start detect");
      Mat mat_img(cv_bridge::toCvShare(msg, "bgr8")->image);
      Box_Red = detectColor(mat_img,msg->width,msg->height);
      
    }
    catch (cv_bridge::Exception& e)
    {
      ROS_ERROR("Could not convert from '%s' to 'bgr8'.", msg->encoding.c_str());
    }
    Box_Recognize = false;  


  }
  
} 




/**
  this method moves the KOMODO one step forward 
**/
void go_forward(ros::NodeHandle n,ros::Publisher driver){
  // init forward message
  geometry_msgs::Twist forward;
  forward.linear.x =0.2;
  forward.angular.z =0;
  
  //init left fix message
  geometry_msgs::Twist left_fix;
  left_fix.linear.x =0;
  left_fix.angular.z =0.1;
  ros::Duration SLEEP_FIX(0.1);
  
  // if theres still an obstacle infront of the robot, go a bit left (can happen from bad right turn)
  /*while (!NO_OBSTACLE){
    ROS_INFO("obstacle ahead of me, fixing myself left");
    driver.publish(left_fix);
    SLEEP_FIX.sleep();
  }*/
  
  ros::Duration SLEEP_TIME_FORWARD(1.4);
  ROS_INFO("action: going forward");
  driver.publish(forward);
  SLEEP_TIME_FORWARD.sleep();
}



/**
  this method stops the rotattion of the KOMODO
**/
void stop(ros::NodeHandle n,ros::Publisher driver){
  //init stop message
  geometry_msgs::Twist stop;   
  stop.linear.x =0;
  stop.angular.z =0;
  
  ros::Duration SLEEP_TIME_STOP(0.1);
  ROS_INFO("action: stop");
  driver.publish(stop);
  SLEEP_TIME_STOP.sleep();
}

/**
  the KOMODO will turn left by 90 degrees
**/
void turn_left(ros::NodeHandle n,ros::Publisher driver){
  //init turnl
  geometry_msgs::Twist turnl;
  turnl.linear.x =0;
  turnl.angular.z =0.2;
  
  ros::Duration SLEEP_TIME_TURN(0.3);
  Finish_State = true;
  SLEEP_TIME_TURN.sleep();
  float curDegree = Degree;
  ROS_INFO("The angel is: %lf", Degree);
  ROS_INFO("curDegree: %lf", curDegree);
  
  while(Degree<curDegree+0.70)
  {
    driver.publish(turnl);
    SLEEP_TIME_TURN.sleep();
  }
  stop(n,driver);
  ROS_INFO("The angel is: %lf", Degree);
  Finish_State = false;
}

/**
  the KOMODO will turn right by 90 degrees
**/
void turn_right(ros::NodeHandle n,ros::Publisher driver){
  //init turnr
  geometry_msgs::Twist turnr;
  turnr.linear.x =0;
  turnr.angular.z =-0.2;

  ros::Duration SLEEP_TIME_TURN(0.3);
  Finish_State = true;
  SLEEP_TIME_TURN.sleep();
  float curDegree=Degree;

  ROS_INFO("curDegree: %lf", curDegree);
  ROS_INFO("The angel is: %lf", Degree);
  while(Degree>curDegree-0.7)
  {
  driver.publish(turnr);
  SLEEP_TIME_TURN.sleep();
  }
  stop(n,driver);
  ROS_INFO("The angel is: %lf", Degree);
  Finish_State = false;
}

/**
  wraping method for the 90 degree turns
**/
void turn_direction(ros::NodeHandle n,ros::Publisher driver)
{
  if(SLALUM_SIDE == RIGHT)
    turn_right(n,driver);
  else
    turn_left(n,driver);
}



/**
  this will make the KOMODO drive straight surounding the box from the right (untill it stops detecting a box on its left). 
  when it passes the box it will turn 90 degress left
  @return number of steps made on the edge
**/
int straight_and_right_surround(ros::NodeHandle n,ros::Publisher driver){
  int steps_counter = 0;
  
  ROS_INFO("enter straight_and_right_surround "); 
  //init left fix message
  geometry_msgs::Twist right_fix; //change
  right_fix.linear.x =0; //change
  right_fix.angular.z =-0.1; //change
  ros::Duration SLEEP_FIX(0.1);
  ros::Duration SLEEP_TIME(2);
  SLEEP_TIME.sleep();
  // if robot doesnt recognize obstacle on its right at first move, go forward untill recognizing (happens the first time it turned right)
  while (n.ok()){
    if ( !OBJECT_ON_LEFT){  //change
     ROS_INFO("action: currently cant recognize object on my left"); //change
     go_forward(n,driver);
     steps_counter++;  
    }
    else{action:
      ROS_INFO("action: recognized object on my left"); //change
      break; 
    }
  }
  
  // going along the obstacle, when passing it turning right
   while(n.ok()){
    ROS_INFO("action: going along the object");
    // if robot is too close to the object, fix left ***
    if ( left_distance < 0.1){ //change
     ROS_INFO("too close to object, fixing right"); //change
     driver.publish(right_fix);
     SLEEP_FIX.sleep();
    }
    
    go_forward(n,driver);
    steps_counter++;
    
    if ( !OBJECT_ON_LEFT){
     ROS_INFO("object not recognized on left anymore, turning left"); //change
     go_forward(n,driver);
     steps_counter++;
     stop(n,driver);
     turn_left(n,driver);  //change
     break; 
    }
   } 
   
//    ROS_INFO("done %d steps before turning right",steps_counter);
   return steps_counter;
}


/**
  this method will make the KOMODO drive stright until it reaches the @param counter number of steps
  after "counter" steps the KOMODO will turn 90 degrees to the right, ready to continue
**/ 
void straight_by_counter_right_surround(ros::NodeHandle n,ros::Publisher driver, int counter){

  ROS_INFO("enter straight_by_counter_right_surround "); 
  //init left fix message
  geometry_msgs::Twist right_fix; //change
  right_fix.linear.x =0; 
  right_fix.angular.z =-0.1; //change
  ros::Duration SLEEP_FIX(0.1);
  
  ros::Duration SLEEP_TIME(1.8);
  ROS_INFO("counter is:%d",counter);
  for (int i=0;i<counter;i++){
    // if robot is too close to the object, fix left ***
    if ( left_distance < 0.1){
     ROS_INFO("too close to object, fixing right"); //change
     driver.publish(right_fix); //change
     SLEEP_FIX.sleep();
    }
    go_forward(n,driver);
  }

  turn_right(n,driver); //change
  stop(n,driver);
}




/**
  this will make the KOMODO drive straight surounding the box from the left (untill it stops detecting a box on its right). 
  when it passes the box it will turn 90 degress right
  @return number of steps made on the edge
**/
int straight_and_left_surround(ros::NodeHandle n,ros::Publisher driver){

  ROS_INFO("enter straight_and_left_surround"); 
  int steps_counter = 0;
  
  //init left fix message
  geometry_msgs::Twist left_fix;
  left_fix.linear.x =0;
  left_fix.angular.z =0.1;
  ros::Duration SLEEP_FIX(0.1);
  ros::Duration SLEEP_TIME(2);
  SLEEP_TIME.sleep();
  // if robot doesnt recognize obstacle on its right at first move, go forward untill recognizing (happens the first time it turned right)
  while (n.ok()){
    if ( !OBJECT_ON_RIGHT){ 
     ROS_INFO("action: currently cant recognize object on my right");
     go_forward(n,driver);
     steps_counter++;  
    }
    else{
      ROS_INFO("action: recognized object on my right");
      break; 
    }
  }
  
  // going along the obstacle, when passing it turning right
   while(n.ok()){
    ROS_INFO("action: going along the object");
    // if robot is too close to the object, fix left ***
    if ( right_distance < 0.1){
     ROS_INFO("too close to object, fixing left");
     driver.publish(left_fix);
     SLEEP_FIX.sleep();
    }
    
    go_forward(n,driver);
    steps_counter++;
    
    if ( !OBJECT_ON_RIGHT){
     ROS_INFO("object not recognized on right anymore, turning right");
     go_forward(n,driver);
     steps_counter++;
     stop(n,driver);
     turn_right(n,driver);  
     break; 
    }
   } 
   
//    ROS_INFO("done %d steps before turning right",steps_counter);
   return steps_counter;
}


/**
  this method will make the KOMODO drive stright until it reaches the @param counter number of steps
  after "counter" steps the KOMODO will turn 90 degrees to the left, ready to continue
**/ 
void straight_by_counter_left_surround(ros::NodeHandle n,ros::Publisher driver, int counter){

  ROS_INFO("enter straight_by_counter_left_surround"); 
  //init left fix message
  geometry_msgs::Twist left_fix;
  left_fix.linear.x =0;
  left_fix.angular.z =0.1;
  ros::Duration SLEEP_FIX(0.1);
  
  ros::Duration SLEEP_TIME(1.8);
  ROS_INFO("inside third function");
  ROS_INFO("counter is:%d",counter);
  for (int i=0;i<counter;i++){
    // if robot is too close to the object, fix left ***
    if ( right_distance < 0.1){
     ROS_INFO("too close to object, fixing left");
     driver.publish(left_fix);
     SLEEP_FIX.sleep();
    }
    go_forward(n,driver);
  }

  turn_left(n,driver);
  stop(n,driver);
}



//Thread for creating laser handler and subscribe to laser topic
void spin1()
{
   ros::NodeHandle nh;
   ros::Subscriber scanSub = nh.subscribe<sensor_msgs::LaserScan>("/komodo_1/scan",10, &scanValues);
    ros::spin();
}
//Thread for reading right urf sensor
void spin3()
{
   ros::NodeHandle ns;
   ros::Subscriber rangerSub = ns.subscribe<sensor_msgs::Range>("/komodo_1/Rangers/Right_URF",10, &rangeValuesRight);
   while (ns.ok()){
     ros::spinOnce();
   }
}

//Thread for reading left urf sensor
void spin5()
{
   ros::NodeHandle ns;
   ros::Subscriber rangerSub = ns.subscribe<sensor_msgs::Range>("/komodo_1/Rangers/Left_URF",10, &rangeValuesLeft);
   while (ns.ok()){
     ros::spinOnce();
   }
}
//Thread for reading odometry angles
void spin4()
{
   ros::NodeHandle od;
   ros::Subscriber odd = od.subscribe<nav_msgs::Odometry>("/komodo_1/diff_driver/odometry",10, &odometryValues);
   while (od.ok()){
    ros::spinOnce();
  }
}

 //Thread for reading color from asus Camera 
 void spin6()
{    
  ros::NodeHandle ac;
  image_transport::ImageTransport it(ac);
  image_transport::Subscriber sub_camera = it.subscribe("/komodo_1/Asus_Camera/rgb/image_raw",10, &cameraValues);
  while (ac.ok()){
    ros::spinOnce();
  }
}

//Thread for motion: forward\stop
void spin2(ros::NodeHandle n, ros::Publisher driver)
{
  //init nodehandle, messages
   geometry_msgs::Twist forward;   
   //init forward
   forward.linear.x =0.4;
   forward.angular.z =0;
   Scan_Values_Nedded = true;
   ros::Duration SLEEP_TIME(3);
   SLEEP_TIME.sleep();


   
   //As long as the robot is healthy
   while(n.ok()){
    //No obstacle ahead, go forward
    if(NO_OBSTACLE){
      driver.publish(forward);
      ROS_INFO("action: forward");
    }else{
      //Obsticale ahead, stop
      stop(n,driver);
      break;
    }
    //wait for a bit between messages
    SLEEP_TIME.sleep();
   }  
   Scan_Values_Nedded = false;
}




int numOfBoxesReached = 0;


/**
  check if the box we just reached to is a red one meaning its time for the vicotry lap.
**/
  bool  checkIfReachedToARedBox(){
    //numOfBoxesReached++;
    //return numOfBoxesReached == 4;
    Box_Recognize = true;
    while(Box_Recognize);
    
    return Box_Red;
  }


/**
  our program main method
  sets the threads and manages the whole process
**/
int main(int argc, char **argv)
{
  //init laser node, start threads
  ros::init(argc, argv, "pubLaserScan"); 
  

  int steps_counter=0;
  boost::thread t_scanner (spin1);
  boost::thread r_rangerRight (spin3);
  boost::thread r_rangerLeft (spin5);
  boost::thread r_od (spin4);
  boost::thread r_ac (spin6);
  
  ros::NodeHandle n;
  // publish robot driving commands
  ros::Publisher driver = n.advertise<geometry_msgs::Twist>("/komodo_1/diff_driver/command",10);  
  SLALUM_SIDE = RIGHT;
  //Run the loop, for not exiting
  while (ros::ok())
  {
    spin2(n,driver); 
    if (checkIfReachedToARedBox())
      break;
    turn_direction(n, driver);
    steps_counter = straight_and_right_surround(n,driver); 
    straight_and_right_surround(n,driver);
    straight_by_counter_right_surround(n,driver,steps_counter);     
    SLALUM_SIDE = (SLALUM_SIDE+1)%2;
    
    spin2(n,driver); 
    if (checkIfReachedToARedBox())
      break;
    turn_direction(n,driver);
    steps_counter = straight_and_left_surround(n,driver); 
    straight_and_left_surround(n,driver);
    straight_by_counter_left_surround(n,driver,steps_counter);     
    SLALUM_SIDE = (SLALUM_SIDE+1)%2;

//     break;
  }

  ROS_INFO("victory !!");
    turn_direction(n, driver);
    turn_direction(n, driver);
    turn_direction(n, driver);
    turn_direction(n, driver);

  return 0;
}




//TODO: the same objecton side from update from two sides.