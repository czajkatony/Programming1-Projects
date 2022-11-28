/*-----------------------------------------------------------------------------------------------------------
*Author: Tony Czajka
*File Name: main.cpp
*Assignment: EECS 168 Lab09 excercise 1
*Description: Create an array manipulation program that allows user to do whatever they want with an array.		  
*Date: 11/2/2020
*-------------------------------------------------------------------------------------------------------------
*/
#include <iostream>
#include <string>
#include <fstream>

//WORKING NOTES: 
//				
//				

//------------------------------------VVV----Insert Function----VVV-------------------------------------------
int* insert(int arr[], int& size, int value, int position) 
{
	size++;
	int* arr_new = nullptr;
	arr_new = new int[size];
	
	arr_new[position]=value;
	int j=0;
	for(int i=0; i<size; i++)
	{
		
		if(i!= position)
		{
			arr_new[i]=arr[j];
			j++;
		}
	}
	
	delete[] arr;
	
	arr=arr_new;
	return(arr);
}
//---------------------------------VV----remove function-----VV------------------------------------------------
int* remove(int arr[], int& size, int position)
{
	size--;
	int* arr_new =  nullptr;
	arr_new = new int[size];
	
	int j=0;
	for( int i=0; i<size+1; i++)
	{
		if(i != position)
		{
			arr_new[j]=arr[i];
			j++;
		}
	}
	delete[] arr;
	
	arr=arr_new;
	return(arr);
}
//-----------------------------------VVV----Count function----VVV----------------------------------------------
int count(int arr[], int size, int target)
{
	int count=0;
	for(int i=0; i<size; i++)
	{
		if(arr[i]==target)
		{
			count++;
		}
	}
	return(count);
}
//-----------------------------------VVV-----Print Function----VVV--------------------------------------------
void print(int arr[], int size)
{
	std::cout<<"[";
	for(int i=0; i<size ; i++)
	{
		if(i==size-1)
		{
			std::cout<<arr[i]<<"]"<<std::endl;
		}
		else{
			std::cout<<arr[i]<<", ";
		}
	}
}
//----------------------------------VVV---MAIN FUNCTION---VVV-----------------------------------------------------------
int main(int argc, char** argv)
{
	std::string inputFileName;
	int size=0;
	int userChoice=0;
	if(argc>2)
	{
		inputFileName = argv[1];
		size = std::stoi(argv[2]);
	}
	//open the file
	std::ifstream inFile;
	inFile.open(inputFileName);
	if(inFile.is_open()) //IF EVERYTHING HAS WORKED UP UNTILL THIS POINT IT GOES INTO THIS FOR LOOP
	{
		//creating the array original
		int* arr = nullptr;
		arr = new int[size];
		for(int i=0; i<size ; i++)
		{
			inFile>>arr[i];
		}
		
		//presenting with menu
		do
		{
		std::cout<<"Make a selection:\n"<<"1) Insert\n"<<"2) Remove\n"<<"3) Count\n"<<"4) Print\n"<<"5) Exit\n"<<"Choice: ";
		std::cin>> userChoice;
		
		if(userChoice==1)
		{
			int position=0;
			int value=0;
			do{
			std::cout<<"Please provide a position you want to insert a value: ";
			std::cin>> position;
			}while(position<0 || position > size);
			std::cout<<"Please provide the value you want to insert: ";
			std::cin>> value;
			
			arr=insert(arr, size, value, position);
		}
		
		if(userChoice==2)
		{
			int position=0;
			do
			{
				std::cout<<"Please enter a position to remove: ";
				std::cin>>position;
				if(position<0 || position >size-1);
				{
					std::cout<<"Invalid position, please try again.\n";
				}
				
			}while(position<0 || position >size-1);
			arr= remove(arr, size, position);
		}
		
		if(userChoice==3)
		{
			int target=0;
			std::cout<<"Please enter an integer to check how many times it is in the array: ";
			std::cin>>target;
			std::cout<<"The amount of times "<<target<<" is in the array is: "<<count(arr, size, target)<<'\n';
		}
		
		if(userChoice==4)
		{
			print(arr, size);
		}
		
		if(userChoice==5)
		{
			std::cout<<"Exiting program.\n";
		}
		
		if(userChoice<1 || userChoice>5)
		{
			std::cout<<"Invalid choice, try again.\n";
		}
		}while(userChoice !=5);
		
		delete[] arr;
	}
	else //fialure to open file message
	{
		std::cout<<"File could not be opened\n";
	}
	

	inFile.close();
}//CLOSE INPUT FILE AND ****DELETE ALL ARRAYS****