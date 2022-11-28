/*----------------------------------------------------------------------------------------------
**File Name: main.cpp
*Author: Tony Czajka
*Assignment: EECS-168 Lab 2 Exercise 3
*Description: This program will convert the input temperature in Fahrenheit to Celsius
*Date: 9/10/20
*-----------------------------------------------------------------------------------------------
*/


#include <iostream>
#include <math.h>
int main ()
{
//variable for input temperature
double tempF = 0.0;
//variable for output temperature
double tempC = 0.0;

//message and input set up
std::cout << "Enter temperature (Fahrenheit): ";
std::cin>> tempF;

//formula input and output message
tempC= (tempF -32)*(5.0/9.0);
std::cout << "The temperature in Celsius is: " << tempC<< '\n';

}
