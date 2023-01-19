/*--------------------------------------------------------------------------------------------------------------
**FIle Name: main.cpp
*Author: Tony Czajka
*Assignment: EECS-168 Lab 4
*Description: This program will allow a user to see the ASCII representation of a specific number they want or
* to see all the ASCII vonversions from 33 to 126
*Date: 9/21/2020
*---------------------------------------------------------------------------------------------------------------
*/
#include <iostream>

int main ()
{

	for (int  userChoice = 0 ; userChoice !=3 ; )
	{
	std::cout<<"1) Select a specific ASCII character provided an int"<< '\n';
	std::cout<<"2) Display visible ASCII values (33 to 126)"<< '\n';
	std::cout<<"3)Exit"<<'\n';

	std::cout<<"Choice: ";
	std::cin>> userChoice;

		if (userChoice == 1)
		{
		int inputVal = 0;
		std::cout<<"Enter value: ";
		std::cin>> inputVal;
		std::cout<< static_cast<char> (inputVal) << '\n';
		std::cout<<'\n';
		}

		if (userChoice == 2)
		{
			for (int progression = 33; progression <= 126; progression = progression+1)
			{
			std::cout<< progression<<" = "<<static_cast<char> (progression) <<'\n';
			}
		std::cout<<'\n';
		}

		if (userChoice <1 || userChoice >3)
		{
		std::cout<<"Invalid Input"<< '\n';
		std::cout<<'\n';
		}

	}

}
