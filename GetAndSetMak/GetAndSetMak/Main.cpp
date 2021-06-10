#include "Sleep.h"

int main()
{

	Home Obj1;

	
	
	std::cout << "Enter Name: ";
	getline(std::cin, Obj1.name);
	Obj1.liveFunc(); 

	std::cout << "Enter Name: ";
	getline(std::cin, Obj1.name);
	Obj1.liveFunc();

	std::cout << "Enter Name: ";
	getline(std::cin, Obj1.name);
	Obj1.liveFunc();

	std::cout << "Enter Name: ";
	getline(std::cin, Obj1.name);
	Obj1.liveFunc();




	system("Pause"); 
	return 0; 
}