// High-Low Game - C++ Implementation

// External library dependencies
#include <iostream>
#include <conio.h>
using namespace std;

// SET UP CONSTANTS
// Concept of TRUE = 1
// Concept of FALSE = 0
// Concept of the secret number not being set
// Number of newlines needed to clear console
#define TRUE				1
#define FALSE				0
#define SN_NOT_SET			-1
#define NEWLINES_IN_CLEAR	40

int main() {
	// DECLARE VARIABLES
	// Integer Variable - secretNumber -  holds the secret number
	// Integer Variable - currentGuess - holds the current guess
	// Integer Variable - wasGuessed - controls guess loop (0 = False, 1 = True)
	// Integer Variable - loop counter
	int secretNumber = SN_NOT_SET;
	int currentGuess = 0;
	int wasGuessed = FALSE;
	int loopCounter = 0;

	// Display game instructions
	cout << "--- SECRET NUMBER GUESSING GAME                ---" << endl;
	cout << "--- 1.) Enter a secret number and hit enter.   ---" << endl;
	cout << "--- 2.) Make guessed and use the clues         ---" << endl;
	cout << "---      until the secret number is found      ---" << endl << endl;
	
	// Prompt the user for a secret number
	cout << "NOTE: The screen will clear after the secret number is given..." << endl;
	cout << "Please enter the secret number: ";
	cin >> secretNumber;

	// Clear the screen
	loopCounter = 1;
	while (loopCounter <= NEWLINES_IN_CLEAR) {
		cout << '\n';
		loopCounter = loopCounter + 1;
	}

	// Assume the secret number wasn't guessed (set variables)
	wasGuessed = FALSE;

	// LOOP - While the guess and the secret number don't match
	while (wasGuessed == FALSE) {
		// Prompt the user for a guess
		cout << "Enter your guess: ";
		cin >> currentGuess;

		// IF - The guess was incorrect
		if (currentGuess != secretNumber) {
			// IF - The guess was higher than the secret number
			if (currentGuess > secretNumber) {
				// Display HIGHER message
				cout << "Your guess is too HIGH..." << endl;
			}
			// ELSE - The guess was lower than the secret number
			else {
				// Display LOWER message
				cout << "Your guess is too LOW..." << endl;
			}
		}
		// ELSE - The guess must be correct
		else {
			// Display victory message
			cout << "Your guess is CORRECT!!!" << endl;
			// SET 'wasGuessed' to TRUE and stop the looping
			wasGuessed = TRUE;
		}
	}

	// Exit program
	_getch();
	return 0;
}
