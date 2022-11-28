/*---------------------------------------------------------------------------------------------------------------
**File Name: main.cpp
*Author: Tony Czajka
*Assignment: EECS-168 Lab03 exercise 2
*Description: Obtain a numerator and denominator from the user and display the result of long division
*Date: 9/14/2020
*----------------------------------------------------------------------------------------------------------------
*/

#include <iostream>
#include <math.h>

int main()
{

int numerator = 0;
int denominator = 0;
int answer = 0;
int remainder = 0;

std::cout<<"Enter a numerator: ";
std::cin>>numerator;

std::cout<<"Enter a denominator: ";
std::cin>>denominator;

	if (denominator == 0)
	{
	std::cout<<"Sorry, you may not divide by zero.\n";
	}

	else
	{
	answer = numerator/denominator;
	remainder = numerator%denominator;
	std::cout<<numerator<<" / "<<denominator<<" = "<<answer<<" Remainder "<<remainder<<'\n';
	}
}

