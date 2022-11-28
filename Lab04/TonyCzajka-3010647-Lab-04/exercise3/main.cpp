/*----------------------------------------------------------------------------------------------------------------
**File Name: main.cpp
*Author: Tony Czjaka
*Assignment: EECS-168-Lab 4
*Description: This program will ask the user for what day they want a count of people with the flu for and will
*display the amount
*Date: 9/21/2020
*----------------------------------------------------------------------------------------------------------------
*/
#include <iostream>
int main ()
{
int day = 0;
std::cout<<"OUTBREAK!"<<'\n';
std::cout<<"What day do you want the sick count for?: ";
std::cin>> day;

	if(day<1)
	{
		std::cout<<"Invalid day"<<'\n';
	}
	if(day==1)
	{
		std::cout<<"Total people with flu: 1"<<'\n';
	}
	if(day==2)
	{
		std::cout<<"Total people with flu: 5"<<'\n';
	}
	if(day==3)
	{
		std::cout<<"Total people with flu: 17"<<'\n';
	}
	
int day_1=1;
int day_2=5;
int day_3=17;
int total=0;
	for(int count=4 ; count<= day ; count= count+1)
	{
	total=day_1+day_2+day_3;
		if(count==day)
		{
			std::cout<<"Total people with flu: "<<total<<'\n';
		}
		else
		{
			day_1=day_2;
			day_2=day_3;
			day_3=total;
		}
	}

}
