#include "Recall.h"
#include <iostream>
#include <string>


int main()
{
	std::string answer;

	std::cout << "Would you like to greet " << std::endl;
	std::cin >> answer;

	if (answer == "Yes" || answer == "yes")
	{
		Yoo();
	}
	
	system("Pause"); 
	return 0;
}