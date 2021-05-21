/*	
	Age calculator
	Created By: Makenson Noel 
	Copyright Makenson Noel

	This program calculates the person's age
*/

#include "Age.h"

int main()
{
	YourAge Obj1; // object created to access the YourAge class

	//Title
	Obj1.title(); 
	 
	// Takes input for current year and birth year and outputs age
	Obj1.setYear(); 

	std::cout << "\n\nHello, your age is " << Obj1.getYear() << std::endl << std::endl; 

	system("pause");

	for (;;)
	{
		system("cls"); //System clear sceen (function for windows operating system)
		//Title
		Obj1.title(); 

		// Takes input for current year and birth year and outputs age
		Obj1.setYear();
		std::cout << "\n\nHello, your age is " << Obj1.getYear() << std::endl;

		system("pause"); 
	}



	// Pause the window (function for windows operating system)
	system("Pause"); 
	return 0; 
}