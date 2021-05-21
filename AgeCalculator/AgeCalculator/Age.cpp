/*
	Age calculator
	Created By: Makenson Noel
	Copyright Makenson Noel
*/

#include "Age.h"

void YourAge::setYear()
{
	// Birth year input
	std::cout << "Enter birth year: ";
	std::cin >> birthYear; 

	// Current year input
	std::cout << "Enter current year: "; 
	std::cin >> currentYear; 

	// Age is calculated 
	age = currentYear - birthYear; 
}

void YourAge::title()
{
	std::cout << "AGE CALCULATOR\n" << std::endl; 
}

int YourAge::getYear() const
{
	//returning the results of age to the user 
	return age;
}


