#include "RPS.h"

void RPSGame::title()
{
	std::cout << "ROCK      PAPER        SCISSORS       SHOOT" << std::endl << std::endl << std::endl;
}

void RPSGame::User1()
{
	std::cout << "Player 1 Wins"; 
}

void RPSGame::User2()
{
	std::cout << "Player 2 Wins"; 
}

void RPSGame::startScreen()
{
	std::cout << "\n";
	std::cout << std::setw(47) << "W E L C O M E \n\n\n" << std::endl;
	std::cout << std::setw(50) << "Enter S to [ Start Game ]" << std::endl;
	std::cout << std::setw(48) << "Enter E to [ End Game ]" << std::endl;

	std::cout << "\n\n\nChoice: ";
	std::cin >> gameChoice;

	system("cls"); 
}

void RPSGame::instructions()
{
	std::cout << "\n";
	std::cout << std::setw(48) << "I N S T R U C T I O N S" << std::endl;
	std::cout << std::setw(40) << "[In game]" << std::endl;
	std::cout << "\n\n-Enter R for Rock " << std::endl;
	std::cout << "-Enter P for Paper " << std::endl;
	std::cout << "-Enter S for Scissors " << std::endl;
	std::cout << "\n"; 

	system("pause"); 

	system("cls"); 
}

void RPSGame::Rock()
{
		rock = TEMP;
		scissors = TEMPZERO; 

		while (rock > scissors)
		{
			std::cout << "\nRock beats Scissors " << std::endl << std::endl;
			system("pause"); 
			system("cls"); 
			break;
			
		}
}

void RPSGame::Paper()
{
			paper = TEMP;
			rock = TEMPZERO; 

			while (paper > rock)
			{
				std::cout << "\nPaper beats Rock " << std::endl << std::endl;
				system("pause");
				system("cls");
				break;
			}
}

void RPSGame::Scissors()
{
			scissors = TEMP;
			paper = TEMPZERO; 

			while (scissors > paper)
			{
				std::cout << "\nScissors beats Paper " << std::endl << std::endl;
				system("pause");
				system("cls");
				break;
			}
}



void RPSGame::tied()
{
	std::cout << "\nTied Game" << std::endl;
	system("pause");
	system("cls");
}

void RPSGame::invalidInput()
{
	system("cls");

	std::cout << "\nInvalid Input\n" << std::endl;
}

void RPSGame::Exit()
{
	std::cout << "E X I T I N G   A P P L I C A T I O N" << std::endl;
}

