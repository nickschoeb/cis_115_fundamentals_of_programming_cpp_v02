// PRE-PROCESSOR, LIBRARIES AND EXTERNAL DEPENDENCIES
#pragma warning(disable:4996)	// enable deprecated scanf()
#pragma warning(disable:6001)	// enable referencing uninitialized data
#pragma warning(disable:6031)	// enable return value drops
#include <iostream>				// for 'cout', 'cin'
#include <iomanip>				// for setw()
#include <conio.h>				// for _getch()
using namespace std;

// CONSTANTS
#define CAPACITY	5		// indicates the number of elements in the array
// NOTE: This value must be conveyed as a 'constant' value (not variable).
//  In the event that a variable resolution is used to establish the physical
//  array capacity during a declaration, the compiler will generate an error.

// DRIVER LOGIC
int main() {
	// DECLARE VARIABLES
	// Declare an array of 'int's, but do not initialize it.  It should contain garbage
	//  at this point.
	int integerArray[CAPACITY];
	
	// Declare a counter that will be recycled and used to control loops
	//  that move through the array.
	int indexCounter = 0;		// used to control loops

	// Display the contents of the array (currently memory garbage values).
	cout << "Display the current array contents..." << endl;
	cout << left;
	indexCounter = 0;
	while (indexCounter < CAPACITY) {
		cout << "integerArray[" << indexCounter << "] = " << setw(15) << integerArray[indexCounter] << endl;
		indexCounter = indexCounter + 1;
	}

	// Initialize the array to contain all 0s.
	indexCounter = 0;
	while (indexCounter < CAPACITY) {
		integerArray[indexCounter] = 0;		// Set each element to the value 0.
		indexCounter = indexCounter + 1;	// Increment the counter.
	}

	// Display the contents of the array.
	cout << "Display the current array contents..." << endl;
	cout << left;
	indexCounter = 0;
	while (indexCounter < CAPACITY) {
		cout << "integerArray[" << indexCounter << "] = " << setw(15) << integerArray[indexCounter] << endl;
		indexCounter = indexCounter + 1;
	}

	// Pause and return to OS.
	_getch();
	return 0;
}
