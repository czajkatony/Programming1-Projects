/*-----------------------------------------------------------------------------------
**File Name: main.cpp
*Author: Tony Czajka
*Assignment: Lab06 exercise 1
*Description: Creat an array of 5 doubles asking users to input values for the array.
*			 Display the values back to the user and then calculate sum, average, min
* 			 and max  for the array of doubles.
*Date: 10/12/20
*-------------------------------------------------------------------------------------
*/
#include <iostream>
int main()
{
	int size=5;
	double numbs[size];
	
	//enter five numbers and spit them back out
	std::cout<<"Please enter 5 numbers\n";
	for(int i=0;i<5;i++)
	{
		std::cout<<"Input a number into your array: ";
		std::cin>>numbs[i];
	}
	std::cout<<"Here are all the numbers in your array:\n";
	for(int i=0;i<5;i++)
	{
		std::cout<<numbs[i]<<'\n';
	}
	//using the math to find the sum, average, largest, and smallest value
	double sum=0.0;
	double average=0.0;
	//finding sum
	for(int i=0;i<5;i++)
	{
		sum=sum+numbs[i];
	}
	//display sum
	std::cout<<"The sum of all the values is: "<<sum<<'\n';
	//find and display average
	average=sum/5;
	std::cout<<"The average of all the values is: "<<average<<'\n';
	//largest + smallest value finder
	double largest=numbs[0];
	double smallest=numbs[0];
	for(int i=0;i<5;i++)
	{
		if(numbs[i]>largest)
		{
			largest=numbs[i];
		}
		if(numbs[i]<smallest)
		{
			smallest=numbs[i];
		}
	}
	std::cout<<"The largest value is: "<<largest<<'\n';
	std::cout<<"The smallest value is: "<<smallest<<'\n';

	
}