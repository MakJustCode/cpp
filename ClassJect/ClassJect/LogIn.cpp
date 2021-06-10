#include "LogIn.h"
#include <iostream>
#include <string>

LogIn::LogIn()
{
	std::string email, passWord;
	std::cout << "Log In\n\n" << std::endl;

	std::cout << "Email: ";
	getline(std::cin, email);

	std::cout << "Password: ";
	std::cin >> passWord; 

	system("cls"); 
}