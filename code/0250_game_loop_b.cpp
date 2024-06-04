/*
Author:			Nick Schoeb
Description:	P2 Game Loop 2
*/

// Allowed Warnings
#pragma warning (disable:6031) // getch

// C
#include <conio.h>

// C++
#include <iostream>
#include <iomanip>
using namespace std;

// H
#include "CIS115-P02S - Menu Driven Combat Simulator.h"

#define WINNING_SCORE	10

void clearScreenUi();

int main() {
	// set up some stuff
	SeedRNGToSystemClock();
	int playerScore = 0;
	int continueGame = 1;

	while (continueGame) {
		// play a game turn
		// at some point continueGame must be set to zero

		// Winning conditions (player always wins here)
		// Adjust as needed for 2+ players
		// Test state conditions (ties, >= WIN, etc.)
		if (playerScore < WINNING_SCORE) {
			// simple game turn
			
			// set this roll to (1, 1) or other numbers to simulate state conditions
			int roll = generateRandomValue(1, 3);

			cout << "Your score was:\t\t" << playerScore << endl;
			cout << "You gained " << roll << " points!" << endl;
			
			// You can also adjust this to test/simulate conditions
			playerScore = playerScore + roll;
			
			cout << "Your score is now:\t" << playerScore << endl;
			clearScreenUi();
		}
		else {
			continueGame = 0;
		}
	}

	// Winning message
	// 2+ players might require conditional logic here
	cout << "You win with " << playerScore << " points!" << endl;

	// Exit to OS
	cout << "... Thank you for playing ...";
	_getch();
	return 0;
}

void clearScreenUi() {
	cout << "... press any key to continue ...";
	_getch();
	ClearScreen();
}
