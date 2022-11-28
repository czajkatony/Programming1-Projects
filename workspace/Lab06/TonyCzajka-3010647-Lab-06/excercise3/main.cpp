/*-----------------------------------------------------------------------------------
**File Name: main.cpp
*Author: Tony Czajka
*Assignment: Lab06 exercise 3
*Description: Create a program that reads the first value from another file and tells
*			  you how many values are in the file, then create an array to store all
*			  of those values. Allow user to search whether a value is in the array 
*			  or not.
*Date: 10/12/20
*-------------------------------------------------------------------------------------
*/
#include <iostream>
#include <fstream>
int main()
{
	int size=0;

	std::ifstream inFile; 
	inFile.open("input.txt");
  
  //Check if file is open
	if(inFile.is_open())
	{
		//get size from first inFile number
		inFile >> size;
		//create the array
		int* array= nullptr;
		array=new int[size-1];
		//get values from text into array
		for(int i=0; i<size; i++)
		{
			inFile>>array[i];
		}
		//display the numbers
		std::cout<<"Contents of input.txt:\n";
		std::cout<<"[";
		//for loop to display variables
		for(int i=0; i<size; i++)
		{
			if(i==size-1)
			{
				std::cout<<array[i]<<']'<<'\n';
			}
			else
			{
				std::cout<<array[i]<<", ";
			}
		}
		
		//search if its in array or not
		
		int searchValue= 0;
		char exitVariable= ' ';
		
		while(exitVariable != 'y'&& exitVariable !='Y')
		{
			
			bool matchVariable= 0;
			//search value
			std::cout<<"Input a value to search for: ";
			std::cin>>searchValue;
			//checking the array to see if it equals search value
			for(int i=0; i<size; i++)
			{
				if(array[i]==searchValue)
				{
					matchVariable=1;
				}
				
			}
			//if it found a match then displays it is in the array and asks if wants to exit
			if(matchVariable==1)
			{
				std::cout<<searchValue<<" is in the array.\n";
				std::cout<<"Do you wish to quit (y/n): ";
				std::cin>>exitVariable;
			}
			//if no match is found then it displays that message and asks if it wants to keep going
			else
			{
				std::cout<<searchValue<<" is not in the array.\n";
				std::cout<<"Do you wish to quit (y/n): ";
				std::cin>>exitVariable;
			}
		
		}
		delete[] array;
		inFile.close();
			
    }
	else
	{
		std::cout << "File could not be opened!\n";
	}
  return(0);
}