/*
Author:			Nick Schoeb
Description:	User Input Demo
*/

// Allowed Warnings
#pragma warning (disable:6031) // getch

// C
#include <stdio.h>
#include <conio.h>

// C++
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	// set up and vars
	int rating = 0;
	
	// Program Title
	cout << "****************************" << endl;
	cout << "* User Input Demonstration *" << endl;
	cout << "****************************" << endl;
	cout << endl;

	// Prompt and user input
	cout << "On a scale of 1 to 10, how much do you like C++?: ";
	cin >> rating;

	// Output
	cout << endl;
	cout << "You rated C++ a " << rating << " out of 10" << endl;
	cout << endl;

	// Exit to OS
	cout << "... press any key to exit ..." << endl;
	cout << "Where is the any key anyway?" << endl;
	_getch();
	return 0;
}
