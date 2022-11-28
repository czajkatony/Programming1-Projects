/*-----------------------------------------------------------------------------------------------
** File Name: main.cpp
* Author: Tony Czajka
* Assignment: EECS_168 Lab 2 exercise 1
* Description: This program will take user input to solve for the hypotenuse of a right triangle.
*Date: 9/7/2020
*-------------------------------------------------------------------------------------------------
*/

#include <math.h>
#include <iostream>

int main()
{
//variable for a value
double a=0.0;
//variable for b value
double b=0.0;
//variable for c value
double c=0.0;

//gather input from user
std::cout << "Enter value for a: ";
std::cin >> a;
std::cout << "Enter value for b: ";
std::cin >> b;
//math equation and output message
c=sqrt( a*a+b*b );
std::cout << "Value of c: " << c << std::endl;

}
