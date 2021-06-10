#include <iostream>
#include <cmath>
#include <ctime>
#include <iomanip>

/*void yoo(int myArray[])
{
	const int HELEN = 7;
	int myArray[1]; 
	for (int i = 0; i < HELEN; i++)
	{
		std::cout << myArray[i] << std::endl;
		std::cout << *myArray << std::endl;
		std::cout << &myArray << std::endl;
	}
}*/

int main()
{
	/*const int TWENTY_FOUR = 24, SIXTY = 60, SECONDS = 60;

	for(int hours = 0; hours < TWENTY_FOUR; hours++)
	{
		for(int minutes = 0; minutes < SIXTY; minutes++)
		{
			for (int seconds = 0; seconds < SECONDS; seconds++)
			{
				std::cout << hours << ":" << minutes << ":" << seconds << std::endl;
			}
		}*/
	

	const int HELEN = 4; 
	
	int myArray[] = { 5, 6, 3, 5 };
	int myArray2[] = { 5, 8, 3, 6 }; 
	int count = 0;

	for (int i = 0; i < HELEN; i++)
	{
		for (int j = 0; j < HELEN; j++)
		{
			//std::cout << myArray[i] << std::endl;

			//std::cout << myArray2[j] << std::endl;

			if (myArray[i] == myArray2[j])
			{
	
				std::cout << count++ << std::endl;
			}
		}

		//std::cout << news << std::endl << std::endl;
		//std::cout << newer << std::endl << std::endl; 
		//std::cout << *myArray << std::endl << std::endl;
		//std::cout << &myArray << std::endl << std::endl;
	}

	
	system("Pause");

	return 0;
}