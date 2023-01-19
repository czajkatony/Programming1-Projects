/*-----------------------------------------------------------------------------------
**File Name: main.cpp
*Author: Tony Czajka
*Assignment: Lab06 exercise 4
*Description: Get an array from an existed file, and then write information to 2 new files.
*Date: 10/13/20
*-------------------------------------------------------------------------------------
*/
#include <iostream>
#include <fstream>
int main()
{
	
	char exitVariable= ' ';
	while(exitVariable!='n'&&exitVariable!='N')
	{
	
	//input file name variable (string) declaration
	std::string inputFileName= "";
	
	//prompt user for file name
	std::cout<<"Enter File Name: ";
	std::cin>>inputFileName;
	
	//read and copy the variables into an array
	int size=0;		//variable for the first value in input.txt which equals size
	std::ifstream inFile; //create inFile
	inFile.open(inputFileName); //inFile opens input.txt
	
	if(inFile.is_open())
		{
			inFile>>size; //collecting size from first value
		
			double* numsOrig=nullptr;	//creating the pointer and array
			numsOrig= new double[size];
			
			for(int i=0; i<size; i++) //putting the values into the array
			{
				inFile>>numsOrig[i];
			}
		
		//--------------------------------------------
		std::ofstream myOutFile1;
		std::string fileName1 = "reversed.txt";
		myOutFile1.open(fileName1); //You can pass in strings if you want

		myOutFile1<<"Original array: ["; //original file text stuff
			for(int i=0;i<size;i++)//printing stuff to file normal
			{
				if(i==size-1) //for last number
				{
					myOutFile1<<numsOrig[i]<<"]\n";
				}
				else //for normal numbers
				{
					myOutFile1<<numsOrig[i]<<", ";
				}
			}
		
		myOutFile1<<"Reversed array: ["; //reversed file text stuff
		for(int i=size-1; i>=0; i--)
		{
			if(i==0)
			{
				myOutFile1<<numsOrig[i]<<"]\n";
			}
			else
			{
				myOutFile1<<numsOrig[i]<<", ";
			}
		}

		 myOutFile1.close(); //VERY important to do with output files
			
			//============================================
			std::ofstream myOutFile; //creating and opening normalized.txt
			std::string fileName = "normalized.txt";
			myOutFile.open(fileName);
			
			int min=numsOrig[0];
			int max=numsOrig[0];
			myOutFile<<"Original array: [";
			for(int i=0;i<size;i++)//printing stuff to file normal
			{
				if(i==size-1) //for last number
				{
					myOutFile<<numsOrig[i]<<"]\n";
				}
				else //for normal numbers
				{
					myOutFile<<numsOrig[i]<<", ";
				}
				//finding max
				if(numsOrig[i]>max)
				{
					max=numsOrig[i];
				}
				//finding min
				if(numsOrig[i]<min)
				{
					min=numsOrig[i];
				}
			}
			
			//start of normalized array
			myOutFile<<"Normalized array: [";

			for(int i=0;i<size;i++)
			{
				if(i==size-1)//last number
				{
					myOutFile<<((numsOrig[i]-min)/(max-min))<<"]\n";
				}
				else
				{
					myOutFile<<((numsOrig[i]-min)/(max-min))<<", ";
				}
			}
			myOutFile.close();
			//--------------------------------------------
		
			
			
			
			delete[] numsOrig;
			inFile.close();
			exitVariable='n';
		}
		else
		{
			std::cout<<"Invalid file name. Would you like to try again? (y/n): ";
			std::cin>>exitVariable;
		}
	}
}
	
