/*-----------------------------------------------------------------------------------------------------------------
**File Name: main.cpp
*Author: Tony Czajka
*Assignment: EECS-168 Lab 4
*Description: This program will output the desired number of numbers from the Fibonacci sequence.
*Date: 9/21/2020
*------------------------------------------------------------------------------------------------------------------
*/
#include <iostream>
int main ()
{
int userInput =0;
std::cout<<"How many Fibonacci numbers do you want printed?: ";
std::cin>> userInput;
	if( userInput == 1)
	{
	std::cout<<"0"<<'\n';
	}
	if( userInput ==2)
	{
	std::cout<<"0, 1"<<'\n';
	}
	if( userInput <1)
	{
	std::cout<<"Invalid Input"<<'\n';
	}

	else if(userInput >2)
	{
	int value_1=0;
	int value_2=1;
	int value_3=0;
	std::cout<<"0, 1, ";
		for(int progression=2; progression< userInput; progression=progression+1)
		{
		value_3=value_1+value_2;
			if(progression==userInput-1)
			{
			std::cout<<value_3<<'\n';
			}
			else
			{
			std::cout<<value_3<<", ";
			}
		value_1=value_2;
		value_2=value_3;
		}

	}

}
