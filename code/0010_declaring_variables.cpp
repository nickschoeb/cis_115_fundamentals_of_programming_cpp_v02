// ****************************************************************************
// Author: Mark Dencler
// Description: This program documents and demonstrated the basic concepts
//   that need to be understood in regard to decalring and initializing
//   variables.  Keep in mind this program compiles and runs but does not
//   produce any output on the console.
// ****************************************************************************

#include <stdio.h>		// for 'printf()'
#include <iostream>		// for 'cout'
#include <conio.h>		// for '_getch()'

using namespace std;

int main() {
	// *** DECLARING VARIABLES ***
	// Basic Declaration Syntax
	
	// <data type> <variable identifier>;			                 (no initialization)
	// <data type> <variable identifier> = <initialization value>    (with initialization)
	
	
	// *** ENCODING TYPES ***
	// In programming languages, variables are typically divided into three main categoies:
	// 1.) INTEGER ENCODINGS - variables that hold integer values
	// 2.) FLOATING-POINT ENCODINGS - 'Floating-point' variables
	// 3.) STRINGS - There is no build-in explicit type for 'strings' in C/C++.  There is
	//   a 'string' object in the standard library that performs all of the activities
	//   typically associated with a 'string' that is commonly used, but not technically
	//   part of the C/C++ language definition.  The data type associated with 'strings'
	//   in C/C++ is an array of characters (char[]).
	//
	// When a variable is declared, a type is established when determines the encoding
	//   used along with the number of bytes used to hold that encoding.  A single instance
	//   of one of these variables is called the 'singleton' form.  All of the data
	//   types can be declared in their 'array' form as well, which establishes a
	//   set of variables of the requested type.  In this example, all of the demonstrated
	//   integer and floating-point encodings are presented in 'singleton' form.  The string
	//   is an example of an 'array' of char variables (a grouped set of more than one letter).

	
	// EXAMPLE DECLARATIONS - INTEGER ENCODINGS
	// The data types that are implemented with an 'integer' encoding are:
	//   char, short, int, long, short int, long int
	char myCharValue = 97;			// A 'char' is technically an integer encoding, so
									//  an integer literal (i.e. 97) is an acceptable
									//  form for an initialization value.  However,
									//  the communication would be more clear if
									//  a character literal was used instead.

	char myOtherCharValue = 'a';	// When initializing 'chars', a literal character
									//   ultimately turns back into an integer resolution.
									//   The syntax performs an ASCII look-up for the
									//   character symbol and resolves the expression
									//   to the corredponding base-10 integer value
									//   from the ASCII table.
	int myInteger = 10;
	short myShortInteger = -20;
	long myLongInteger = 0;
	long int myOtherLongInteger = 40;

	// Note that all of the literal values used for initializing integers have no decimal point.
	//   As soon as a decimal point is included in the literal representation, it is promoted
	//   to the encoding for a 'double' and is no longer an 'int'.  Left by itself, this would
	//   result in an warning/error at compile time.
									

	// EXAMPLE DECLARATIONS - FLOATING-POINT ENCODINGS
	// The data types that are implemetned with 'floating-point' encodings are:
	//   float, double, long double
	double myDoubleVariable = 1.0;
	double myLongDouble = -2.5;
	double yetAnotherDouble = 0.0;

	// Note that all of the literal values used for initializing floating-point encodings
	//   explicitly contain a decimal point.  Even when representing a value that doesn't
	//   have a fractional component (i.e 1.0) it is essential that the decimal point
	//   be included in the value since the presence of the decimal point causes
	//   the literal value to be interpreted as a floating-point encoding ('double' in this case)

	float myFloatVariable = (float)1.5;

	// Note that 'float' variables take up 4 byes on 32-bit architecture and 'double' variables
	//   take up 8 bytes on 32-bit architecture.  As a result, the normal literal encoding for
	//   a value isn't appropriate for intializing an 'float'.  The literal value is represented
	//   with 8 bytes (like a double/8 bytes), and the variable itself is a float (4 bytes).  To
	//   remedy the problem, we will sanction the potential truncation of decimal data with an
	//   explicit type-cast to 'float'.

	
	// EXAMPLE DECLARATIONS - STRINGS
	// There is no explicit data type for 'strings' in C/C++.  Instead a character
	//   array should be used (char[]).  We must indicate the capacity of the array
	//   and provide an initialization value that takes the form of a 'string' literal.
	char mySampleString[40] = "I'm a string.";

	// Note that the capacity for this string is 40 'chars'.  The inclusion of the capacity
	//   value in the square brackets causes this declaration to form an 'array' form variable,
	//   not a 'singleton'.  Memory was allocated for 40 chars (40 bytes), but only the first
	//   14 characters in the string contain meaningful data (13 language symbols + 1 null 
	//   byte for string termination).

	// Note that unlike 'singleton' variables, the value inside the string cannot be modified
	//   with an assignment statement.  The opportunity to initialize the string with a starting
	//   value is a one-time opportunity with a windows that closes when declaration is complete.
	
	// YOU CAN'T DO THIS!
	//mySampleString = "Something else...";

	// It's Over
	_getch();
	return 0;
}
