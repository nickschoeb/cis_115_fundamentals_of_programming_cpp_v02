// Description: This example illustrates the syntax used to construct
//   a basic WHILE loop.  The loop will display a count to 100 on
//   the screen.

#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;

#define HOW_HIGH	500

int main() {
	// declare variables
	int counter = 0;		// used to control the loop

	// count to HOW_HIGH
	counter = 1;
	while (counter <= HOW_HIGH) {				// As long as the condition inside of the ()
		// display number in the count			//  attached to the WHILE clause evaluates
		cout << setw(5) << counter;				//  to TRUE, the contained statement(s) will
												//  exeute is a cyclical manner.   The only
		// increase the counter by 1			//  way to get the loop to end is to create
		counter = counter + 1;					//  a chance that causes the statement in
	}											//  the () to evaluate to FALSE.

	// exit demonstration
	_getch();
	return 0;
}
