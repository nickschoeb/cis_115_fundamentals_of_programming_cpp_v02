/*
Author:			Nick Schoeb
Description:	P2 Game Loop Example 1
*/

// Allowed Warnings
#pragma warning (disable:6031) // getch

// C
#include <conio.h>

// C++
#include <iostream>
#include <iomanip>
using namespace std;

// h file
#include "CIS115-P02S - Menu Driven Combat Simulator.h"

#define SCORE_TO_WIN	50

// fx protos
void clearScreenWithUi();

int main() {
	// set up some vars to use
	int counter = 0;
	int playerScore = 0;

	// Title Text
	cout << "Welcome to the game!" << endl;
	clearScreenWithUi();

	// Game loop
	while (playerScore <= SCORE_TO_WIN) {
		// play the game

		// TESTING the loop for all conditions!!!
		// especially with multiple players

		// simple game
		int randomPoints = generateRandomValue(1, 5);
		playerScore = playerScore + randomPoints;
		cout << "You got " << randomPoints << " points!" << endl;
		cout << "Your score is now " << playerScore << endl;

		clearScreenWithUi();
	}

	// Win conditions


	// Exit to OS
	cout << "... press any key to exit ..." << endl;
	_getch();
	return 0;
}

void clearScreenWithUi() {
	cout << "... press any key to clear screen ..." << endl;
	_getch();
	ClearScreen();
}
