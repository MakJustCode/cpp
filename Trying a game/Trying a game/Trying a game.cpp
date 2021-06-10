#include <iostream>
#include <conio.h>
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
	string name,color;
	
	system("Color fc");
	
	cout << "Enter your name: ";
	
	getline(cin,name);
	
	cout << "\nHello " << name << endl; 
	
	cout << "\nEnter Y/y for Yes and N/n for No" << endl << endl;
	
	cout << "The color of the compiler window is supposed to be black and white" << endl;
	
	cout << "\nDid the color change ?(Y/N):  ";
	cin >> color;
	
	if(color=="Y" || color == "y")
	{
		cout << "\nThats great welcome to my loop" << endl;
		
		string games;
		
		cout << "\nDo you like video games ?: ";
		cin >> games;
			
			if (games=="Y" || games=="y")
			{
				string genre;
				
				cout << "\nGood me too" << endl;
				
				cout << "\n\nOut of this list type in your favorite genre" << endl;
				cout << "Horror" << endl;
				cout << "RPG" << endl;
				cout << "Sports" << endl;
				cout << "Fighting" << endl;
				cout << "FPS" << endl;
				
				cout << "Answer: ";
				
				cin >> genre;
				
				if (genre=="Horror" || genre=="horror")
				{
					cout << "\nHorror games are really scary" <<endl;
				}
				
				else if(genre=="RPG" || genre=="rpg")
				{
					cout << "\nRPG games are fun" << endl;
				}
				
				else if (genre=="Sports" || genre=="sports")
				{
					cout << "\nSports games are challenging" << endl;
				}
				
				else if (genre=="\nFighting" || genre=="fighting")
				{
					cout << "\nFighting games are competitve" <<endl;
				}
				
				else if (genre=="FPS" || genre=="fps")
				{
					cout << "\nYou should try out Ironsight" <<endl;
				}
				
				else if (genre == "Battle Royal" || "battle royal")
				{
					cout <<"\nWe should play fortnite togther one day " << endl; 
				}
				
				else 
				{
					cout << "\nANSWER NOT VALID" << endl;
				}
				
				
		    }
		    
			else if (games=="N" || games=="n")
			{
				string movies; 
				
				cout << "\nWell let's not talk about video games" << endl;
				
				
				cout << "\nDo you like movies ? "; 
				cin >> movies; 
				
				
				
				
				if (movies == "N" || movies == "y" )
				{
					string genre;
					
					cout << "\n\nOut of this list type in your favorite genre" << endl;
					cout << "Horror" << endl;
					cout << "Drama" << endl;
					cout << "Romance" << endl;
					cout << "Comedy" << endl;
					cout << "Action" << endl;
					cout << "Adventure" << endl;
					cout << "Thriller " << endl; 
					cout << "\n" << endl;
					
					cin >> genre; 
					
					if (genre=="Horror" || genre=="horror")
					{
						cout << "\nHorror movies are really scary" <<endl;
					}
					
					else if(genre=="Drama" || genre=="Drama")
					{
						cout << "\nWhat is your favorite dramtic movie ? " << endl;
					}
					
					else 
					{
						cout << "\nPlease enter a valid answer" << endl << endl; 
					}
				
				
				}
		    }
	}
	
	else if (color=="N" || color=="n")
	{
		cout << "\nMALFUNCTION" << endl;
	}
	
	
	
	
	system("Pause");
	
}
