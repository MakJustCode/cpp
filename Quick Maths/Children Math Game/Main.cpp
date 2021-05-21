/*
	Created by: Makenson Noel
	Copyright: Makenson Noel
	Programming Langauge: C++

	Math practice using addition, subtraction and multiplication 
*/


#include "RandomNumbers.h"

int main()
{
	int num1, num2, results, answer,count, number = 1, choice; 

	std::cout << " \n ---- Math Game ---- \n\n\n\n" << std::endl;

	std::cout << "1) Addition \n2) Subtraction \n3) Multiplication \n"; 

	std::cout << "Enter choice : "; 
	std::cin >> choice; 

	//Addition Choice 
	if (choice == 1)
	{
		std::cout << "Enter number of problems: ";
		std::cin >> count;

		// Clear system screen on windows opearting system
		system("cls"); 

		std::cout << " \n ---- Math Game ---- \n\n\n\n" << std::endl;

		for (int i = 0; i < count; i++)
		{
			srand(time(NULL));

			num1 = rand() % 10;
			num2 = rand() % 10;

			std::cout << number++ << ")   What is " << num1 << " + " << num2 << " = ";
			std::cin >> answer;

			results = addition(num1, num2);


			if (answer == results)
			{
				correct();
			}

			else
			{
				wrong();
			}
		}
	}
	
	//Subtraction Choice
	if (choice == 2)
	{
		std::cout << "Enter number of problems: ";
		std::cin >> count;
		system("cls");

		std::cout << " \n ---- Math Game ---- \n\n\n\n" << std::endl;

		for (int i = 0; i < count; i++)
		{
			srand(time(NULL));

			num1 = rand() % 20;
			num2 = rand() % 10;

			std::cout << number++ << ")   What is " << num1 << " - " << num2 << " = ";
			std::cin >> answer;

			results = subtraction(num1, num2);


			if (answer == results)
			{
				correct();
			}

			else
			{
				wrong();
			}
		}
	}

	//Multiplication Choice
	if (choice == 3)
	{
		std::cout << "Enter number of problems: ";
		std::cin >> count;
		system("cls");

		std::cout << " \n ---- Math Game ---- \n\n\n\n" << std::endl;

		for (int i = 0; i < count; i++)
		{
			srand(time(NULL));

			num1 = rand() % 12;
			num2 = rand() % 12;

			std::cout << number++ << ")   What is " << num1 << " * " << num2 << " = ";
			std::cin >> answer;

			results = multiplication(num1, num2);


			if (answer == results)
			{
				correct();
			}

			else
			{
				wrong();
			}
		}
	}

	//Pause system consle on windows operating system
	system("Pause");
	return 0; 
}