// ****************************************************************************
// Author: Mark Dencler
// Description:  This example provides examples and explanations for performing
//   basic console intput tasks with 'cin' (object-oriented paradigm).
// ****************************************************************************

// C++
#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;

int main() {
	
	// READING AN INTEGER & DISPLAY
	int storeInThisInt;						// declare variable
	cout << "INTEGER READ         :";		// for aesthetic reasons
	cin >> storeInThisInt;					// read input from keyboard
	cout << storeInThisInt << endl;			// display captured input
	rewind(stdin);

	// READING A FLOOATING-POINT
	double storeIntoThisDouble;				// declare variable
	cout << "FLOATING-POINT READ  :";		// for aesthetic reasons
	cin >> storeIntoThisDouble;				// read input from keyboard
	cout << storeIntoThisDouble << endl;	// display captured input

	// READING A STRING (CHAR[])
	char storeIntoThisString[10];			// declare variable
	cout << "STRING (CHAR[]) READ :";		// for aesthetic reasons
	cin >> storeIntoThisString;				// read input from keyboard
	cout << storeIntoThisString << endl;	// display captured input

	// PAUSE AND END PROGRAM
	_getch();
	return 0;
}
