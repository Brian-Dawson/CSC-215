#include <iostream>
#include <cstdlib> 
#include <ctime>

using namespace std; 
void GuessANumber();
void DisplayMenu();
int x = 1;
void GuessANumber()
{
	int randomNumber = 0;
    int numberToGuess = 4;
    int guess;
    int b=0;

	srand(time(NULL));

		randomNumber = (rand() % 49) +1;

	cout << endl << "Lets play a game" << endl;
	cout << "You will guess a number between 1 and 50" << endl;
	cout << "Let's begin" << endl;


		system("PAUSE");
		system("CLS");

		for(int i = 0; i < 4; i++)
		{
			cout << "Enter your guess" << endl;
			cin >> guess;
			if ((guess < 1) || (guess > 50))
			{
				cout << "Please enter a valid guess" << endl;
			}
			else if (guess < randomNumber)
			{
				cout << "Your guess was too low." << endl;
			}
			else if (guess > randomNumber)
			{
				cout << "Your guess was too high." << endl;
			}
			else if (guess == randomNumber)
			{
				cout << "You won the game! Congradulations!" << endl;
				break;
			}
		}
	if (guess != randomNumber)
	{
		cout << endl << "You lose" << endl << "The number was " << randomNumber << endl << endl;
	}
    
}
void DisplayMenu()
{
	int Userchoice = 0;
		system("PAUSE");
		system("CLS");
	cout << endl << " 1) Guess a Number" << endl << " 2) Quit" << endl << endl << "Enter your choice with either 1 or 2 please" << endl;
	cin >> Userchoice;
	if(Userchoice == 1)
	{
		GuessANumber();
	}
	else if (Userchoice == 2)
	{
		cout << endl << "Goodbye" << endl;
		x = 2;
	}
	
}

int main(){	
	
	while(x == 1)
	{
		DisplayMenu();
	}
	

    return 0;
}

