#include <iostream>

int main()
{
	//declare variables
	double grade = 0.0;

	//ask user for input
	std::cout << "What grade did you receive?\n";
	std::cin >> grade;

	//determine grade
	if (grade >= 90)
	{
	std::cout << "You have an A!\n";
	}

	if ( (grade >= 80) && (grade < 90))
	{
	std::cout << "You have a B!\n";
	}

	if ( (grade >=70) && (grade < 80) )
	{
	std::cout << "You have a C!\n";
	}

	if ( (grade >= 60) && (grade < 70) )
	{
	std::cout << "You have a D!\n";
	}

	else
	{
	std::cout << "You have FAILED!\n";
	}

return(0);

}
