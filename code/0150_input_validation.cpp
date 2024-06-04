// Description: This example illustates the C++ syntax used for a basic
//  input validation loop with 'cin'.

#include <iostream>
#include <conio.h>
using namespace std;

#define TRUE	1
#define FALSE	0

int main() {
	// number holder
	int myNumber = 0;

	// prompt
	cout << "Please enter a number: ";
	cin >> myNumber;

	// if there was a bad read, the fail flag
	// will be set to 'true'
	while (cin.fail() == TRUE) {
		cout << "That wasn't a number." << endl;
		cin.clear();        // clear out cin flags
		rewind(stdin);      // purge keyboard buffer

							// re-prompt
		cout << "Please enter a number: ";
		cin >> myNumber;
	}

	// display the number entered by the user
	cout << "You entered: " << myNumber << endl;

	_getch();
	return 0;
}
