/*--------------------------------------------------------------------------------------------------------------
*Author: Tony Czajka
*File Name: Circle.h
*Assignment: EECS 168 Lab 10 excercise 1
*Description: Use classes to find information about two circles and print the information regarding their
*			 center location, distance from origin, area, circumference, diameter, and whether or not they
*			 intersect.
*Date: 11/9/20
*---------------------------------------------------------------------------------------------------------------
*/
#ifndef CIRCLE_H
#define CIRCLE_H
class Circle
{
	public:
	double radius;
	double xPos;
	double yPos;
	double diameter();
	double area();
	double circumference();
	double distanceToOrigin();
	bool intersect(Circle otherCircle);
	double distanceBetween(Circle otherCircle);
};
#endif