#include "Locol.h"

void Locol::setName()
{
	std::cout << "Name: ";
	getline(std::cin, name); 
}

void Locol::setEmail()
{
	std::cout << "Email: ";
	getline(std::cin, email); 
}

void Locol::setPassword()
{
	std::cout << "Password: ";
	getline(std::cin, passWord);
}


std::string Locol::getName() const
{
	return name;
}

std::string Locol::getEmail() const
{
	return email;
}

std::string Locol::getPassword() const
{
	return passWord;
}
