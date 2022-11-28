/*--------------------------------------------------------------------------------------------------------------
*Author: Tony Czajka
*File Name: CircleDriver.h
*Assignment: EECS 168 Lab 10 excercise 1
*Description: Use classes to find information about two circles and print the information regarding their
*			 center location, distance from origin, area, circumference, diameter, and whether or not they
*			 intersect.
*Date: 11/9/20
*---------------------------------------------------------------------------------------------------------------
*/
#ifndef CIRCLEDRIVER_H
#define CIRCLEDRIVER_H
#include "Circle.h"
class CircleDriver
{
	public:
	Circle circ1;
	Circle circ2;
	void obtainCircles();
	void printCircleInfo();
	void run();
	
};
#endif