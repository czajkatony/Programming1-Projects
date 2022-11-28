/*----------------------------------------------------------------------------------------------------------------
**File Name: main.cpp
*Author: Tony Czajka
*Assignment: EECS-168-Lab03-Exercise3
*Description: This program will ask user if they want Tacos, sushi, and deserts and how many they want. It will
*then generate a receipt based on their age, any discounts, and the tax.
*Date: 9/14/20
*-----------------------------------------------------------------------------------------------------------------
*/
#include <iostream>
#include <math.h>

int main()
{
std::cout.precision(2);
std::cout << std::fixed;
//char for food to determine if they want it or not (y/n)
char taco=0;
char sushi=0;
char desert=0;

//int for these if they do want them
int taconumb=0;
int sushinumb=0;
int desertnumb=0;

//int for age
int age=0;

//math values
double tacoTotal=0.0;
double sushiTotal=0.0;
double desertTotal=0.0;
double subtotal= 0.0;
double tax= 0.0;
double discount=0.0;
double total=0.0;

std::cout<<"========================="<<'\n'<<"WELCOME TO THE RESTAURANT"<<'\n'<<"========================"<<'\n';
std::cout<<"Do you want Tacos? (y/n): ";
std::cin>>taco;
	if (taco =='y' || taco =='Y')
	{
	std::cout<<"How many?: ";
	std::cin>>taconumb;
	}
std::cout<<"Do you want Sushi? (y/n): ";
std::cin>>sushi;
	if (sushi == 'y' || sushi =='Y')
	{
	std::cout<<"How many?: ";
	std::cin>>sushinumb;
	}
std::cout<<"Do you want Deserts? (y/n): ";
std::cin>>desert;
	if (desert == 'y' || desert == 'Y')
	{
	std::cout<<"How many?: ";
	std::cin>>desertnumb;
	}
std::cout<<"How old are you?: ";
std::cin>>age;
std::cout<<"========================"<<'\n';

//math calculations
tacoTotal= taconumb*3.50;
sushiTotal= sushinumb*7.25;
desertTotal= desertnumb*5.50;
	if (age <=12)
	{
	desertTotal=0;
	}
subtotal= tacoTotal+sushiTotal+desertTotal;
tax= subtotal/2.0;
	if (age >=65)
	{
	discount= (subtotal+tax)*0.1;
	}
total= (subtotal+tax)-discount;

//presenting the totals
std::cout<<taconumb<<" Tacos @ $3.50 ==>  $"<<tacoTotal<<'\n';
std::cout<<sushinumb<<" Sushi @ $7.25 ==>  $"<<sushiTotal<<'\n';
std::cout<<desertnumb<<" Deserts @ $5.50 ==> $"<<desertTotal<<'\n';
std::cout<<"Subtotal: $"<<subtotal<<'\n';
std::cout<<"Tax: $"<<tax<<'\n';
std::cout<<"Discount: $"<<discount<<'\n';
std::cout<<"========================"<<'\n';
std::cout<<"Total: $"<<total<<'\n';
std::cout<<"Please come again!"<<'\n';


}
