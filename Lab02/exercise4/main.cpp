/*---------------------------------------------------------------------------------------------------
**File Name: main.cpp
*Author: Tony Czajka
*Assignment: EECS-168 Lab 2 Exercise 4
*Description: This program will find the ASCII value for an inputed carachter
*Date: 9/10/20
*----------------------------------------------------------------------------------------------------
*/

#include <iostream>

int main ()
{
//initializing the input character and output integer
char input = 0;
int output=0;
//obtaining char from user
std::cout << "Input charachter here: ";
std::cin >> input;
//converting and outputing the ASCII value for that char
output= static_cast<int>(input);
std::cout<< "The ASCII value for '"<<input<<"' is "<< output<< '\n';
}
