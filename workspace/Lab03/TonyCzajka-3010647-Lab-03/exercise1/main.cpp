/*--------------------------------------------------------------------------------------------------------------
**File Name: main.cpp
*Author: Tony Czajka
*Assignment: EECS-168 Lab03 exercise 1
*Description: This program will obtain a wind speed from the user and output what category hurracane it is
*Date: 9/14/20
*---------------------------------------------------------------------------------------------------------------
*/

#include <iostream>
#include <math.h>

int main ()
{

int windSpeed = 0;

std::cout<< "Input a wind speed (m/s): ";
std::cin>> windSpeed;

	if (windSpeed >=70)
	{
	std::cout<<"A wind speed of "<< windSpeed<<" m/s is a Category 5 hurricane.\n";
	}

	else if (windSpeed>=58)
	{
	std::cout<<"A wind speed of "<< windSpeed<<" m/s is a Category 4 hurricane.\n";
	}

	else if (windSpeed >=50)
	{
	std::cout<<"A wind speed of "<<windSpeed<<" m/s is a Category 3 hurricane.\n";
	}

	else if (windSpeed >=43)
	{
	std::cout<<"A wind speed of "<<windSpeed<<" m/s is a Category 2 hurricane.\n";
	}

	else if (windSpeed >=33)
	{
	std::cout<<"A wind speed of "<<windSpeed<<" m/s is a Category 1 hurricane.\n";
	}

	else if (windSpeed >=18)
	{
	std::cout<<"A wind speed of "<<windSpeed<<" m/s is a Tropical Storm.\n";
	}

	else if (windSpeed >=0)
	{
	std::cout<<"A wind speed of "<<windSpeed<<" m/s is a Tropical Depression.\n";
	}

	else
	{
	std::cout<<"Negative wind? Sorry, that's invalid.\n";
	}

}
