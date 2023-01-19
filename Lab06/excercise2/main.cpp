/*-----------------------------------------------------------------------------------
**File Name: main.cpp
*Author: Tony Czajka
*Assignment: Lab06 exercise 2
*Description: Let user decide how long array of strings is and display the longest and
*             shortest string.
*Date: 10/12/20
*-------------------------------------------------------------------------------------
*/
#include <iostream>
#include <string>
int main()
{
	std::string* array= nullptr;
	int userSize=0;
	//get size input
	std::cout<<"Input an array size for your words array: ";
	std::cin>>userSize;
	while(userSize<1)
	{
		std::cout<<"Invalid Input, please enter nuber greater than 0\n";
		std::cout<<"Input an array size for your words array: ";
		std::cin>>userSize;
	}
	//creating the array
	array= new std::string[userSize];
	
	//string input
	std::cout<<"Now please enter "<<userSize<<" words\n";
	for(int i=0; i<userSize; i++)
	{
		std::cout<<"Input a word: ";
		std::cin>>array[i];
	}
	//finding longest and shortest
	std::string longest= array[0];
	std::string shortest= array[0];
	for(int i=0; i<userSize; i++)
	{
		if(array[i].length()>longest.length())
		{
			longest=array[i];
		}
		if(array[i].length()<shortest.length())
		{
			shortest=array[i];
		}
	}
	std::cout<<"The longest word is: "<<longest<<'\n';
	std::cout<<"The shortest word is: "<<shortest<<'\n';
	
	delete[]array;
}