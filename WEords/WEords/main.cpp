#include <iostream>

void choice()
{

}

void instructions() 
{
	std::cout << "I N S T R U C T I O N S" << std::endl; 
	std::cout << "Enter Y for Yes" << std::endl; 
	std::cout << "Enter N for No" << std::endl; 

	std::cout << "Enter I for Instructions in game" << std::endl << std::endl; 
}

void title()
{
	std::cout << "Welcome to WEords" << std::endl << std::endl;

	instructions(); 

	system("pause");
	system("cls"); 
}


int main()
{
	int amountOfWords;
	char answer; 
	std::string word; 
	std::string myArray[] = { "Cat", "Dog", "Back" };

	title(); 

	std::cout << "Would you like to add words ?";
	std::cin >> answer; 

	if (answer == 'Y' || answer == 'y')
	{
		std::cout << "How many words ? ";
		std::cin >> amountOfWords; 

		for (int i = 0; i < amountOfWords; i++)
		{
			std::cout << "Enter your word : "; 
			std::cin >> word; 

		}
	}

	else if (answer == 'N' || answer == 'n')
	{

		std::cout << "Select Choice" << std::endl;

		std::cout << "1) 3 Words ";


	}

	else
		instructions(); 




	return 0; 
}