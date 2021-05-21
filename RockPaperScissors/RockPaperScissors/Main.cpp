#include "RPS.h"


int main()
{
	RPSGame Obj;
	//Game of Rock Paper Scissors 
	Obj.title();
	Obj.startScreen();
	Obj.instructions(); 


	while (Obj.gameChoice == "s" || Obj.gameChoice == "S")
	{

		//Player Choices 


		//Obj.title();
//----------------------------------------------------------------------------------------Player Vs Player-------------------------------------------------------------------------------------------

		Obj.title(); 
		std::cout << "Player 1 Enter Choice: ";
		std::cin >> Obj.player1;

		system("cls");
	
		Obj.title();
		std::cout << "Player 2 Enter Choice: ";
		std::cin >> Obj.player2;


		//Rock
		if (Obj.player1 == "r" && Obj.player2 == "s" || Obj.player1 == "R" && Obj.player2 == "S")
		{
			Obj.User1();
			Obj.Rock();
		}

		else if (Obj.player1 == "s" && Obj.player2 == "r" || Obj.player2 == "R" && Obj.player1 == "S")
		{
			Obj.User2();
			Obj.Rock(); 
			
		}

		//Paper
		else if (Obj.player1 == "p" && Obj.player2 == "r" || Obj.player1 == "P" && Obj.player2 == "R")
		{
			Obj.User1();
			Obj.Paper();
		}

		else if (Obj.player2 == "p" && Obj.player1 == "r" || Obj.player2 == "P" && Obj.player1 == "R")
		{
			Obj.User2();
			Obj.Paper(); 
		}

		//Scissors 
		else if (Obj.player1 == "s" && Obj.player2 == "p" || Obj.player1 == "S" && Obj.player2 == "P")
		{
			Obj.User1();
			Obj.Scissors();
		}

		else if (Obj.player2 == "s" && Obj.player1 == "p" || Obj.player2 == "S" && Obj.player1 == "P")
		{
			Obj.User2();
			Obj.Scissors(); 
		}

		//Tied Game
		else if (Obj.player2 == "p" && Obj.player1 == "p" || Obj.player2 == "P" && Obj.player1 == "P" || 
				 Obj.player2 == "s" && Obj.player1 == "s" || Obj.player2 == "S" && Obj.player1 == "S" || 
				 Obj.player2 == "r" && Obj.player1 == "r" || Obj.player2 == "R" && Obj.player1 == "R")
		{
			Obj.tied(); 
		}
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
		//Invalid Inputs
		else
		{
			Obj.invalidInput();
			Obj.instructions();
		}
	}

	while (Obj.gameChoice != "S" || Obj.gameChoice != "s")
	{

		Obj.Exit();
		break;

		system("pause");
	}

	return 0; 
}