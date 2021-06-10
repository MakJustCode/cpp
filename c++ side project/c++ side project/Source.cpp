#include <iostream>
#include <string> 

void color()
{
	//declaring int so that a value can be stored in to the variable number; 
	int number;

	//This clears the screen of the previous text
	system("cls");

	//This changes the compiler chararcter colors to yellow 
	system("color 0E");

	//This text will be shown on the screen, the user will prompted to enter a number or the question
	//If the use is right then the program will print out "Great Job" in green characters
	// if the user is wrong then program will output "Wrong" in red characters
	std::cout << "Hello " << std::endl << std::endl;
	std::cout << "2 x 2 = ";
	std::cin >> number; 

	//This clears the screen of the previous characters; 
	system("cls"); 

	//if statement, if the user is right an answers four, then they will get the out put; 
	if (number == 4)
	{
		//The compiler changes the character colors to green
		system("color 02");

		std::cout << "\n\nGreat Job" << std::endl;
	}


	else 
	{	
		//The compiler changes the character colors to red
		system("color 04");
		std::cout << "\n\nWrong" << std::endl;
	}

	return;
}

void color1()
{
	system("cls");
	std::cout << "Hi " << std::endl;
	system("color E0");
	return;
}
int main()
{
	std::string answer; 

	std::cout << "Pick a or b" << std::endl; 
	std::cin >> answer; 

	if (answer == "a")
	{
		color();
	}

	else if (answer == "b")
	{
		color1();
	}


	system("pause");
	return 0;
}