#include <iostream>

int main()
{
	int userAge;
	std::cout << "What is your age? ";
	std::cin>> userAge;

	if(userAge <21)
	{
		std::cout << "NO ENTRY\n";
	}
	else
	{
		std::cout << "Welcome to the pub!\n";
	}
	return (0);
}
