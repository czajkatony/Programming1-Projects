/*--------------------------------------------------------------------------------------------------------------
*Author: Tony Czajka
*File Name: circle.cpp
*Assignment: EECS 168 Lab 10 excercise 1
*Description: Use classes to find information about two circles and print the information regarding their
*			 center location, distance from origin, area, circumference, diameter, and whether or not they
*			 intersect.
*Date: 11/9/20
*---------------------------------------------------------------------------------------------------------------
*/
#include <iostream>
#include "Circle.h"
#include <math.h>

double Circle::diameter()
{
	return(radius*2);
}

double Circle::area()
{
	return(3.14*radius*radius);
}

double Circle::circumference()
{
	return(2*3.14*radius);
}

double Circle::distanceToOrigin()
{
	return(sqrt(xPos*xPos+yPos*yPos));
}

double Circle::distanceBetween(Circle otherCircle)
{
	return(sqrt((xPos-otherCircle.xPos)*(xPos-otherCircle.xPos)+(yPos-otherCircle.yPos)*(yPos-otherCircle.yPos)));
}

bool Circle::intersect(Circle otherCircle)
{
	if( distanceBetween(otherCircle)>(radius+otherCircle.radius) || 
	distanceBetween(otherCircle)==(radius+otherCircle.radius))
		{
			return(false);
		}
	else{
		return(true);
	}
} 