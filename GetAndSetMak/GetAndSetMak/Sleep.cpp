#include "Sleep.h"

void Home::liveFunc()
{
	if (name == "Makenson" || name == "Marie" || name == "Nathanael" || name == "Lucien" || name == "Nate" || name == "Mak")
	{
		std::cout << live << std::endl;

	}

	else
	{
		std::cout << dontLive << std::endl;
	}
}

void Home::wifi()
{

	std::cout << "Would you like the wifi password " << std::endl;
	std::cin >> password;

	if (password == 'y' || password == 'Y')
	{
		std::cout << "The wifi password is: Makenson123 " << std::endl;
	}

	else
	{
		std::cout << "its your lost " << std::endl;
	}


}