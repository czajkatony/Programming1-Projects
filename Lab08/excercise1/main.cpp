/*-----------------------------------------------------------------------------------------------------------
*Author: Tony Czajka
*Assignment: EECS 168 Lab08 excercise 1
*Description: Create a single large program that uses several function definitions, main should have very little
*			  going on.
*Date: 10/26/2020
*-------------------------------------------------------------------------------------------------------------
*/
#include <iostream>

//declaring all the functions
int lastDigit(int n);
int removeLastDigit(int n);
int addDigit(int currentNum, int newDigit);
int reverse(int n);
bool isPalindrome(int n);
int countDigits(int n);
int sumDigits(int n);
void printMenu();
void run();

//main function
int main()
{
	run();
	return(0);
}

//lastDigit funciton
int lastDigit(int n)
{
	int answer=0;
	answer=n%10;
	return(answer);
}

//removeLastDigit function
int removeLastDigit(int n)
{
	int answer=0;
	answer=n/10;
	return(answer);
}

//addDigit Function
int addDigit(int currentNum, int newDigit)
{
	int answer=0;
	answer=currentNum*10+newDigit;
	return(answer);
}

//reverse Funciton
int reverse(int n)
{
	int currentNum=0;
	do
	{
		currentNum=addDigit(currentNum,lastDigit(n));
		n=removeLastDigit(n);

	}while(n!=0);

	return(currentNum);
}
//is Palindrome function
bool isPalindrome(int n)
{
	if(n==reverse(n))
	{
		return(true);
	}
	else
	{
		return(false);
	}
}

//int countDigits function NOT DONE YET 
int countDigits(int n)
{
	int digitCount=0;
	do
	{
		n=removeLastDigit(n);
		digitCount++;
	}while(n!=0);
	
	return(digitCount);
}

//Sum Digits function
int sumDigits(int n)
{
	int digitSum=0;
	do
	{
		digitSum+=lastDigit(n);
		n=removeLastDigit(n);
	}while(n!=0);
	return(digitSum);
}
//printMenu function
void printMenu()
{
	std::cout<<"1) Count digits\n"<<"2) Sum digits\n"<<"3) Is Palindrome\n"<<"4) Reverse\n"<<"5) Exit\n"<<"Choice: ";
}
//run function

void run()
{
	bool exitVariable=false;
	do{
		int functionChoice=0;
		printMenu();
		std::cin>>functionChoice;
		if(functionChoice==1)
		{
			int number=0;
			std::cout<<"Enter a positive integer to count the digits of: ";
			std::cin>>number;
			std::cout<<"The number of digits is: "<<countDigits(number);
			std::cout<<std::endl;
		}
		if(functionChoice==2)
		{
			int number=0;
			std::cout<<"Enter a positive integer for all the digits to be summed: ";
			std::cin>>number;
			std::cout<<"The sum of all the digits in your number is: "<<sumDigits(number);
			std::cout<<std::endl;
		}
		if(functionChoice==3)
		{
			int number=0;
			std::cout<<"Enter a positive integer to tell whether it is a palindrome or not: ";
			std::cin>>number;
			if(isPalindrome(number)==1)
			{
				std::cout<<"Your number is a palindrome.";
			}
			else
			{
				std::cout<<"Your number is not a palindrome.";
			}
			std::cout<<std::endl;
		}
		if(functionChoice==4)
		{
			int number=0;
			std::cout<<"Enter a positive integer to find the reverse order of: ";
			std::cin>>number;
			std::cout<<"The reverse order of this number is: "<<reverse(number);
			std::cout<<std::endl;
		}
		if(functionChoice==5)
		{
			std::cout<<"Exiting program.\n";
			exitVariable=true;
		}
		if(functionChoice>5||functionChoice<1)
		{
			std::cout<<"Error with your choice, please try again.\n";
		}
	
	}while(exitVariable!=true);
	
}