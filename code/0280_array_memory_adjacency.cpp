// PRE-PROCESSOR, LIBRARIES AND EXTERNAL DEPENDENCIES
#pragma warning(disable:6031)	// enable return value drops
#include <iostream>				// for 'cout', 'cin'
#include <iomanip>				// for output formatting
#include <conio.h>				// for _getch();
using namespace std;

// DRIVER LOGIC
int main() {
	// Declare a character array.  Notice there are only 9 characters in 
	// the string constant because the null byte ('\0') was automatically
	// added as the last character on the string by virtue of the double-quote 
	// string literal syntax ("").
	char sampleCharArray[10] = "abc123!@#";
	
	// Declare an integer array.  Notice that there
	int sampleIntArray[10] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

	// VERY IMPORTANT C/C++ SYNTAX CONCEPT ------------------------------------
	//  Unlike most other programming langauges, the C/C++ syntax treats the
	//  resolution of array-type variables very differently.  Since direct 
	//  memory manipulation operations are common at the C/C++ level of 
	//  design abstraction, array identifiers allow read-only access to 
	//  the compiler assignment memory addresses where arrays are being 
	//  stored.  Although these exact values will often vary from build
	//  to build as a result of stack-randomization (a common security 
	//  measure), consistency of these values from execution to execution 
	//  cannot be easily pre-determined (although not impossible).  
	//  However, we may assume memory adjacency among array elements 
	//  associated with a common identifier.
	// ------------------------------------------------------------------------
	// The identifier for an array-type variable naturally resolves to the starting
	//  memory address of the first array element.  The addresses of all other
	//  elements common to that array can be inferred by memory offset calculations.
	// ---------------------------------------------------------------------------

	// Display the starting address of the first element of the 'char' array.
	cout << "STARTING ADDRESS (char) : ";
	cout << hex << (int)sampleCharArray << endl;

	// Display the starting address of the first element of the 'int' array.
	cout << "STARTING ADDRESS (int)  : ";
	cout << hex << (int)sampleIntArray << endl << endl;

	// Display the contents and memory addresses of the elements in
	//  the 'char' array.
	cout << left;
	cout << "CHAR ARRAY DISPLAY" << endl;
	cout << setw(10) << "INDEX" << "|" 
		 << setw(10) << "VALUE" << "|" 
		 << setw(20) << "MEMORY ADDRESS" << endl;
	int index = 0;
	while (index < 10) {
		cout << setw(10) << index << "|" 
			 << setw(10) << sampleCharArray[index] << "|" 
			 << setw(20) << hex << (int)&sampleCharArray[index] << endl;
		index = index + 1;
	}
	cout << endl;

	// Display the contents and memory addresses of the elements in
	//  the 'int' array.
	cout << left;
	cout << "INT ARRAY DISPLAY" << endl;
	cout << setw(10) << "INDEX" << "|" 
		 << setw(10) << "VALUE" << "|" 
		 << setw(20) << "MEMORY ADDRESS" << endl;
	index = 0;
	while (index < 10) {
		cout << setw(10) << index << "|"
			<< setw(10) << sampleIntArray[index] << "|"
			<< setw(20) << hex << (int)& sampleIntArray[index] << endl;
		index = index + 1;
	}

	// Pause and return to OS.
	_getch();
	return 0;
}
