#include "Locol.h"


int main()
{
	std::string answer;
	std::cout << std::setw(55) << "Welcome to Locol " << std::endl;

	Locol User;

	/*std::cout << "Do you have an account ?" << std::endl;
	getline(std::cin, answer); 
	system("cls");

	if (answer == "Y" || answer == "y")
	{*/
		std::cout << "Log In" << std::endl << std::endl;

		
		User.setEmail(); 
		User.setPassword(); 


		
		//system("cls");
		
	//}

	/*else 
	{
		std::cout << "Create A New Account\n\n";

		std::cout << "Name: ";
		getline(std::cin, name);

		std::cout << "Email: ";
		std::cin >> email;

		std::cout << "Password: ";
		std::cin >> passWord;

		std::cout << "Birthday: ";
		std::cin >> month >> day >> year;

		std::cout << "Gender: ";
		getline(std::cin, gender);

		std::cout << "Occupation ";
		getline(std::cin, occupation);

		std::cout << "Income Range ";
		std::cin >> incomeRange;

		system("cls");
		
		
	}*/

	system("Pause");
	return 0;
}