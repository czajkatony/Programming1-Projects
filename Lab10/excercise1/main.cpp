/*--------------------------------------------------------------------------------------------------------------
*Author: Tony Czajka
*File Name: main.cpp
*Assignment: EECS 168 Lab 10 excercise 1
*Description: Use classes to find information about two circles and print the information regarding their
*			 center location, distance from origin, area, circumference, diameter, and whether or not they
*			 intersect.
*Date: 11/9/20
*---------------------------------------------------------------------------------------------------------------
*/

/*
work log: Very few errors, need to mess around with making "Circle" a type in CircleDriver.h
also otherCircle needs to be defined in the bool for Circle.h
*/


#include <iostream>
#include "CircleDriver.h"
#include "Circle.h"
int main()
{
   CircleDriver myDriver;
   myDriver.run();
   return(0);
} 