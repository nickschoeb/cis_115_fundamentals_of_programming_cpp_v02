// PRE-PROCESSOR, LIBRARIES AND EXTERNAL DEPENDENCIES
#pragma warning(disable:6031)	// enable return value drops
#include <iostream>				// for 'cout', 'cin'
#include <conio.h>				// for _getch();
#include <string.h>				// for puts();
using namespace std;

// CONSTANTS
const int TRUE = 1;
const int FALSE = 0;
const int CAPACITY = 200;

// DRIVER LOGIC
int main() {
	// DECLARE VARIABLES
	// Declare a sample array with arbitrary contents.
	char sampleString[CAPACITY] = "This is a string.  It has a mix of letters and characters.";

	// Write a loop that displays the contents of the string one character at a time.
	//  Start by setting the loop counter to zero.
	int index = 0;

	// Go through each character in the string until we hit the 'null byte' ('\0').
	while (sampleString[index] != '\0') {
		// Print the character as we visit each index.
		cout << (char)sampleString[index];
		
		// Increment the index counter.
		index = index + 1;
	}
	cout << endl;

	// Convert each lower-case letter in the string to an upper-case letter.
	index = 0;		// Set the loop counter to zero.
	while (sampleString[index] != '\0') {
		// Use consistent spacing between upper and lower-case equivalent
		//  alphabetics in the ASCII table to convert lower-case elements
		//  to their upper-case equivalents.
		if (sampleString[index] >= 'a' && sampleString[index] <= 'z') {
			sampleString[index] = sampleString[index] + ('A' - 'a');
		}
		
		// Increment the index counter.
		index = index + 1;
	}

	// Display the string with a library function.
	puts(sampleString);

	// Pause and return to OS.
	_getch();
	return 0;
}
