/*--------------------------------------------------------------------------------------------------------
**File Name: main.cpp
*Author: Tony Czajka
*Assignment: EECS-168 Lab2 exercise5
*Description: This program will take a number of sodas and tell the user how many--
*-- fridge cubes, six packs, and single sodas it will be packages as.
*Date: 9/10/20
*---------------------------------------------------------------------------------------------------------
*/

#include <iostream>
#include <math.h>

int main()
{
//declaring input variables, as well as Fridge Cube, Six-Pack, and Single variables
int input=0;
int fridge=0;
int sixpack=0;
int single=0;

//taking input number of total sodas
std::cout<<"Enter # of sodas: ";
std::cin>>input;

//calculating how many can fit in the fridge first
fridge= (input/24);
//subtracting the amount that fits in the fridge first to see how many can fit in the sixpack
sixpack= (input-(fridge*24))/6;
//finds the remanding number of sodas
single= (input-(fridge*24)-(sixpack*6));

//prints out the values for each type of container
std::cout<<"Fridge Cubes: "<<fridge<<'\n';
std::cout<<"Six-Packs: "<<sixpack<<'\n';
std::cout<<"Singles: "<<single<<'\n';
}
