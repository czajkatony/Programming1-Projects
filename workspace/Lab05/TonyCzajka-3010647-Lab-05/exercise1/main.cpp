/*-----------------------------------------------------------------------------------
**File Name: main.cpp
*Author: Tony Czajka
*Assignment: Lab05 exercise 1
*Description: Present the user with a choice of patterns, once user makes a valid
*choice, the user sets the size of the pattern and the pattern is outputted.
*Date: 9/28/20
*-------------------------------------------------------------------------------------
*/
#include <iostream>
#include <math.h>
int main()
{
char exitChoice='\0';
	while (exitChoice != 'y' && exitChoice != 'Y')
	{	
	int userChoice =0;
	int size =0;

	std::cout<<"1) Checkerboard"<<'\n';
	std::cout<<"2) Rook Path"<<'\n';
	std::cout<<"3) Running Total"<<'\n';
	std::cout<<"4) Upper Left Triangle"<<'\n';
	std::cout<<"5) Upper Right Triangle"<<'\n';
	std::cout<<std::endl;
	std::cout<<"Input a choice: ";
	std::cin>> userChoice;
	std::cout<<std::endl;
	//Error Message UserChoice
		while (userChoice<1||userChoice>5)
		{
			std::cout<<"Error, Invalid Choice."<<'\n';
			std::cout<<std::endl;
			std::cout<<"1) Checkerboard"<<'\n';
			std::cout<<"2) Rook Path"<<'\n';
			std::cout<<"3) Running Total"<<'\n';
			std::cout<<"4) Upper Left Triangle"<<'\n';
			std::cout<<"5) Upper Right Triangle"<<'\n';
			std::cout<<std::endl;
			std::cout<<"Input a choice: ";
			std::cin>> userChoice;
		}
	std::cout<<"Input a size: ";
	std::cin>> size;
	
	//Error Message size
		while (size<=3)
		{
			std::cout<<"Error, Invalid Size (Must be greater than 3)."<<'\n';
			std::cout<<"Input a size: ";
			std::cin>> size;
			std::cout<<std::endl;
		}
		
	//Checkerboard Loops
		if (userChoice==1)
		{
			for(int i=0; i<=size-1; i++)
			{
				for(int j=0;j<=size-1;j++)
				{
					if((i+j)%2==0)
					{
						std::cout<<"O";
					}
					else
					{
						std::cout<<"X";
					}
				}
				std::cout<<std::endl;
			}
		}
	//Rook Path
		if (userChoice==2)
		{
			//obtain x and y coordinate of rook from user
			int rook_x =0;
			int rook_y =0;
			std::cout<<"Input X coordinate (column) of Rook: ";
			std::cin>>rook_x;
			//x coordinate error message
			while(rook_x <=0 || rook_x >size)
			{
				std::cout<<std::endl;
				std::cout<<"Error, coordinate must be >0 and < or = size inputted.";
				std::cout<<std::endl;
				std::cout<<"Input X coordinate (column) of Rook: ";
				std::cin>>rook_x;
			}
			std::cout<<"Input Y coordinate (row) of Rook: ";
			std::cin>>rook_y;
			//y coordinate error message
			while(rook_y <=0 || rook_y >size)
			{
				std::cout<<std::endl;
				std::cout<<"Error, coordinate must be >0 and < or = size inputted.";
				std::cout<<std::endl;
				std::cout<<"Input Y coordinate (row) of Rook: ";
				std::cin>>rook_y;
			}

			//looping system
			for(int i=1; i<=size;i++)
			{
				for(int j=1; j<=size;j++)
				{
					//R placement
					if(j==rook_x && i==rook_y)
					{
						std::cout<<"R";
					}
					// '|' placement
					else if(j==rook_x)
					{
						std::cout<<"|";
					}
					// '-' placement
					else if(i==rook_y)
					{
						std::cout<<"-";
					}
					// *placement
					else
					{
						std::cout<<"*";
					}
				}
				std::cout<<std::endl;
			}
		}
	//Running Total
	
		if (userChoice==3)
		{
			//Variable used to track the last number
			int endTotal = 0;
			for(int i=1;i<=size;i++)
			{
				for(int j=1; j<=size; j++)
				{
					if(j!=size)
					{
						std::cout<<endTotal+j<<", ";
					}
					else
					{
						std::cout<<endTotal+j;
						endTotal=endTotal+j;
					}
				}
				std::cout<<std::endl;
			}
		}
	//Upper Left Triangle
		if(userChoice==4)
		{
			for(int i=size ; i>=1 ; i--)
			{
				for(int j=i ; j>=1 ; j--)
				{
					std::cout<<"*";
				}
				std::cout<<std::endl;
			}
		}
	//Upper Right Triangle
		if(userChoice==5)
		{
			for(int i=1 ; i<=size ; i++)
			{
				for(int j=1 ; j<=size ; j++)
				{
					if(j>=i)
					{
						std::cout<<"*";
					}
					else
					{
						std::cout<<" ";
					}
				}
				std::cout<<std::endl;
			}
		}
	//progression related to restarting entire program
	std::cout<<std::endl;
	std::cout<<"Do you want to quit (y/n)?: ";
	std::cin>> exitChoice;
		if (exitChoice == 'y' || exitChoice == 'Y')
		{
		std::cout<<"Goodbye..."<<'\n';
		}
	}

}