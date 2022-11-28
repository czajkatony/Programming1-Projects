/*----------------------------------------------------------------------------------------------------------------
** File Name: main.cpp
* Author: Tony Czajka
* Assignment: EECS_168 Lab2 exercise2
* Description: This program will solve the quadratic equation by obtaining an "a", "b", and "c" value from the user
* Date: 9/7/2020
*------------------------------------------------------------------------------------------------------------------
*/

#include <iostream>
#include <math.h>

int main()
{
//initializing variables for a b and c
double a=0.0;
double b=0.0;
double c=0.0;
//initializing varibles that will become the answers for the roots of the equation
double result1=0.0;
double result2=0.0;

//Entering variables from the user
std::cout <<"Enter value a: ";
std::cin >> a;
std::cout <<"Enter value b: ";
std::cin >> b;
std::cout <<"Enter value c: ";
std::cin >> c;
//equation to find both roots of the equation
result1= (-b+sqrt(b*b-4*a*c))/(2*a);
result2= (-b-sqrt(b*b-4*a*c))/(2*a);
//output message
std::cout <<"root 1: "<<result1<<std::endl;
std::cout <<"root 2: "<<result2<<std::endl;
}
