#include <iostream>
#include <iomanip>
#include <string>


int main()
{
	std::string userName, age, favoriteColor, answer; 

	std::cout << "Enter Name: ";
	getline(std::cin, userName);

	std::cout << "Enter Age: ";
	std::cin >> age; 

	std::cout << "Favorite Color: ";
	std::cin >> favoriteColor;

	system("cls");


	std::cout << std::setw(55) << "Hello my name is Mak 2.0" << std::endl << std::endl;
	 

	std::cout << "Nice to meet you " << userName << std::endl; 

	system("cls");


	system("Pause");
	return 0; 
}

