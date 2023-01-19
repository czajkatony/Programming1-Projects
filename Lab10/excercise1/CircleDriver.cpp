/*--------------------------------------------------------------------------------------------------------------
*Author: Tony Czajka
*File Name: CircleDriver.cpp
*Assignment: EECS 168 Lab 10 excercise 1
*Description: Use classes to find information about two circles and print the information regarding their
*			 center location, distance from origin, area, circumference, diameter, and whether or not they
*			 intersect.
*Date: 11/9/20
*---------------------------------------------------------------------------------------------------------------
*/
#include <iostream>
#include "CircleDriver.h"
#include "Circle.h"

void CircleDriver::obtainCircles()
{
	//gather circle 1
	std::cout<<"Enter Information for Circle 1:\n"<<"Radius: ";
	std::cin>> circ1.radius;
	std::cout<<"X Position: ";
	std::cin>>circ1.xPos;
	std::cout<<"Y Position: ";
	std::cin>>circ1.yPos;
	std::cout<<std::endl;
	
	//gather circle 2
	std::cout<<"Enter Information for Circle 2:\n"<<"Radius: ";
	std::cin>> circ2.radius;
	std::cout<<"X Position: ";
	std::cin>>circ2.xPos;
	std::cout<<"Y Position: ";
	std::cin>>circ2.yPos;
	std::cout<<std::endl;
}

void CircleDriver::printCircleInfo()
{
	//print circle 1 info
	std::cout<<"Informaion for Circle 1:\n"<<"Location: ("<<circ1.xPos<<", "<<circ1.yPos<<")\n";
	std::cout<<"Diameter: "<<circ1.diameter()<<'\n';
	std::cout<<"Area: "<<circ1.area()<<'\n';
	std::cout<<"Circumference: "<<circ1.circumference()<<'\n';
	std::cout<<"Distance from the origin: "<<circ1.distanceToOrigin()<<'\n';
	std::cout<<std::endl;
	
	//print circle 2 info
	std::cout<<"Informaion for Circle 2:\n"<<"Location: ("<<circ2.xPos<<", "<<circ2.yPos<<")\n";
	std::cout<<"Diameter: "<<circ2.diameter()<<'\n';
	std::cout<<"Area: "<<circ2.area()<<'\n';
	std::cout<<"Circumference: "<<circ2.circumference()<<'\n';
	std::cout<<"Distance from the origin: "<<circ2.distanceToOrigin()<<'\n';
	std::cout<<std::endl;
	
	//print intersection info
	if(circ1.intersect(circ2)==true)
	{
		std::cout<<"The circles intersect.\n";
	}
	else
	{
		std::cout<<"The circles do not intersect.\n";
	}
		
}

void CircleDriver::run()
{
	obtainCircles();
	printCircleInfo();
}