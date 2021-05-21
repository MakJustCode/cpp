#ifndef Rps_h
#define Rps_h
#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib> 

class RPSGame
{

	public :

		void title(); //Title for RPS

		void User1();
		
		void User2(); 

		void Rock();//Rock Object

		void Paper();//Paper Object

		void Scissors(); // Sciccors Object

		void tied();//Tied Object, displays when there is a tied game 

		void startScreen(); //Shows at the beginning of the game

		void instructions();//Instructions for the game 
		                                   
		void invalidInput(); //When an input is invalid, this shows, it will tell you what are the valid inputs to you
		
		void Exit(); //Exit object

		std::string player1, player2, gameChoice, computer; 

	private : 
		int rock, paper, scissors; 
		const int TEMP = 1; // 
		const int TEMPZERO = 0; 
		
};



#endif