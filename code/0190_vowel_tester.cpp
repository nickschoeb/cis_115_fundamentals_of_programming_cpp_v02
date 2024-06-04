// Vowel Tester - Pseudocode Only

// External library dependencies
#include <iostream>
#include <conio.h>
using namespace std;

// SET UP CONSTANTS
// Concept of TRUE = 1
// Concept of FALSE = 0
// Concept of input character not being set
#define TRUE			1
#define FALSE			0
#define CHAR_UNSET		-1

int main() {
	// DECLARE VARIABLES
	// Character Variable - inputSymbol - holds the character being tested
	char inputSymbol = CHAR_UNSET;

	// Prompt the user for a single character, 'inputSymbol'
	cout << "Please enter a single character and press enter: ";
	cin >> inputSymbol;

	// IF - this is not a letter at all
	if ( !(inputSymbol >= 'a' && inputSymbol <= 'z' || inputSymbol >= 'A' && inputSymbol <= 'Z') ) {
		// Display 'This isn't a letter' message
		cout << "The symbol you entered isn\'t a letter..." << endl;
	}
	// ELSE - this must be a letter
	else {
		// IF - the letter is a VOWEL
		if (inputSymbol == 'A' || inputSymbol == 'a' || 
			inputSymbol == 'E' || inputSymbol == 'e' ||
			inputSymbol == 'I' || inputSymbol == 'i' ||
			inputSymbol == 'O' || inputSymbol == 'o' ||
			inputSymbol == 'U' || inputSymbol == 'u') {
			// Display 'This is a VOWEL' message
			cout << "This is a VOWEL..." << endl;
		}
		// ELSE - it must be a CONSONANT
		else {
			// Display 'This is a CONSONANT' message
			cout << "This is a CONSONANT..." << endl;
		}
	}
	
	// Exit program
	_getch();
	cout << "It\'s over!" << endl;
	return 0;
}
