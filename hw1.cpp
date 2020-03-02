#include <iostream>
#include <cstdlib> 
#include <ctime>

using namespace std; 

int main(){	
   
    int randomNumber = 0;
    int numberToGuess = 4;
    int guess;
    int b=0;

	srand(time(NULL));

		randomNumber = (rand() % 49) +1;

	cout << "Lets play a game" << endl;
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
		cout << endl << "You lose" << endl << "The number was " << randomNumber << endl;
	}

    return 0;
}

