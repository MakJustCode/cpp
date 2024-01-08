/*
Makenson Noel
Game of Rock, Paper, Scissors Game
*/

// C++ Libraries
#include <iostream>
#include <random>
#include <iomanip>

using namespace std;

string answer;
//cout << "Best out of 3" << endl;
string AI[] = {"Rock", "Paper", "Scissors"};
string PC[] = {"Rock", "Paper", "Scissors"};

int choice, game = 0;

//Functions for Rock Paper Scissors Game

/*Currently the game is simulated, computer vs computer,
I'll be adding a mode for player vs player and computer vs player.*/

void RPS (string AI[], string PC[], char size) {

    int pc_count = 0;
    int ai_count = 0;

    int ran = rand() % 3;
    int rand = rand % 3;

    cout << AI[ran] << endl;
    cout << PC[rand] << endl;

    if (AI[ran] == PC[rand])
    {
        cout << "Tied Game" << endl;
    }

    else if (AI[ran] == "Rock" && PC[rand] == "Paper")
    {
        cout << "PC  W I N S " << endl;
        pc_count = pc_count + 1;
        //cout << "Point: " << pc_count << endl;
    }

    else if (AI[ran] == "Paper" && PC[rand] == "Rock")
    {
        cout << "AI  W I N S " << endl;
        ai_count = ai_count + 1;
        //cout << "Point: " << ai_count << endl;
    }

    else if (AI[ran] == "Scissors" && PC[rand] == "Paper")
    {
        cout << "PC  W I N S " << endl;
        pc_count = pc_count + 1;
        //cout << "Point: " << pc_count << endl;
    }

    else if (AI[ran] == "Paper" && PC[rand] == "Scissors")
    {
        cout << "AI  W I N S " << endl;
        ai_count = ai_count + 1;
        //cout << "Point: " << ai_count << endl;
    }

    else if (AI[ran] == "Rock" && PC[rand] == "Scissors")
    {
        cout << "AI  W I N S " << endl;
        ai_count = ai_count + 1;
        //cout << "Point: " <<  ai_count << endl;
    }

    else if (AI[ran] == "Scissors" && PC[rand] == "Rock")
    {
        cout << "PC  W I N S " << endl;
        pc_count = pc_count + 1;
        //cout << "Point: " << pc_count << endl;
    }
}

// Title Function
void title()
{
    cout << "Welcome to R-P-S" << endl;
}

// Error Function
void error()
{
    cout << "E R R O R" << endl;
}

// Quit Function
void quit()
{
    cout << "E X I T T I N G " << endl;
}

//Function for instructions
void startingScreen()
{
    title();
    cout << "1) Instructions " << endl;
    cout << "2) Play " << endl;
    cout << "3) Quit " << endl;
}

// Instructions Function
void instructions()
{
    title();
    cout << "Enter R for Rock " << endl;
    cout << "Enter P for Paper " << endl;
    cout << "Enter S for Scissors " << endl;
}



void mai()
{

    //cout << "Best out of 3" << endl;
    string AI[] = {"Rock", "Paper", "Scissors"};
    string PC[] = {"Rock", "Paper", "Scissors"};

    /* initialize random seed: */
    srand(time(NULL));

    int size = sizeof(AI) / sizeof(AI[0]);

    cout << "Choose the amount of games you want simulated: ";
    cin >> choice;
    cout << "\n\n";


    for (int i = 0; i < choice; i++)
    {
        game = game + 1;
        cout << "Game " << game << endl;
        RPS(AI, PC, size);
        cout << "\n\n";
    }

    cout << "Would you like you play again ?: ";
    cin >> answer;
    cout << "\n";

    if (answer == "Y" || answer == "y")
    {
        cout << "Choose the amount of games you want simulated: ";
        cin >> choice;
        cout << "\n\n";


        for (int i = 0; i < choice; i++)
        {
            game = 0;
            game++;
            cout << "Game " << game << endl;
            RPS(AI, PC, size);
            cout << "\n\n";
        }
    }

    else
    {
        error();
    }

}



int main()
{

    startingScreen();

    int iChoice; // User Input
    string answer;
    cout << "Please enter choice  (1-3): "; // Question
    cin >> iChoice; // User Input

    cout << "\n\n";

    if (iChoice == 1)
    {
        instructions();
        startingScreen();
    }

    else if (iChoice == 3)
    {
        quit();
    }

    else if (iChoice == 2)
    {

        //cout << "Best out of 3" << endl;
        string AI[] = {"Rock", "Paper", "Scissors"};
        string PC[] = {"Rock", "Paper", "Scissors"};

        /* initialize random seed: */
        srand(time(NULL));

        int size = sizeof(AI) / sizeof(AI[0]);

        cout << "Choose the amount of games you want simulated: ";
        cin >> choice;
        cout << "\n\n";


        for (int i = 0; i < choice; i++)
        {
            game = game + 1;
            cout << "Game " << game << endl;
            RPS(AI, PC, size);
            cout << "\n\n";
        }

        cout << "Would you like you play again ?: ";
        cin >> answer;
        cout << "\n";

        if (answer == "Y" || answer == "y")
        {
            mai();
        }

        else
        {
            error();
        }

    }

    else
    {
        error();
        startingScreen();
    }

    return 0;
}
