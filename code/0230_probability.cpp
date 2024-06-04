/*
Author:			Nick Schoeb
Description:	P2 Probability Examples
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

#define LOTTA_TEXT	50
#define LOTTA_ROLLS	20

// fx protos
void clearScreenWithUi();

int main() {
	// set up some vars to use
	int counter = 0;

	// Here is a lot of text
	while (counter < LOTTA_TEXT) {
		cout << "Sample Text" << endl;
		counter++;
	}
	cout << "... press any key to clear screen ..." << endl;
	_getch();
	ClearScreen();

	cout << "This is the text after the clear screen ..." << endl;
	cout << "You cannot scroll up to see the text this way!" << endl;

	// RNG setup USE ONCE ONLY!!!
	SeedRNGToSystemClock();

	// random numbers RNG
	int singleRandomRoll = generateRandomValue(1, 10);
	cout << "Single random roll is " << singleRandomRoll << endl << endl;

	// look at a lot of random rolls
	counter = 0;
	while (counter < LOTTA_ROLLS) {
		int roll = generateRandomValue(1, 5);
		cout << (counter + 1) << ": \t" << roll << endl;
		counter++;
	}

	// clear the screen but in a fx
	clearScreenWithUi();

	// probability
	// 10% chance to win
	// roll 1 to 100 look for <= 10
	// vs.
	// roll 1 to 10 look for 1
	cout << "10% chance to win:" << endl;
	int chanceToWin = generateRandomValue(1, 10);
	if (chanceToWin == 1) {
		cout << "You win!" << endl;
	}
	else {
		cout << "Sorry try again next time" << endl;
	}

	clearScreenWithUi();

	// 34% chance to win
	cout << "34% chance to win:" << endl;
	chanceToWin = generateRandomValue(1, 100);
	if (chanceToWin <= 34) {
		cout << "You win!" << endl;
	}
	else {
		cout << "Sorry try again next time" << endl;
	}

	// chance to win a lot of times 50%
	// count them instead of showing each time
	clearScreenWithUi();
	int countWins = 0;
	int countLosses = 0;
	counter = 0;
	while (counter < 100) {
		int roll = generateRandomValue(1, 100);
		if (roll <= 50) {
			countWins++;
		}
		else {
			countLosses++;
		}
		counter++;
	}
	cout << "Wins:\t" << countWins << endl;
	cout << "Losses:\t" << countLosses << endl;

	// Exit to OS
	cout << endl << "... press any key to exit ..." << endl;
	_getch();
	return 0;
}

void clearScreenWithUi() {
	cout << "... press any key to clear screen ..." << endl;
	_getch();
	ClearScreen();
}
