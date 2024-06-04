/*
Author:			Nick Schoeb
Description:	Preprocessor Directives, Constants, and Casting
*/

/*
===========================
= Preprocessor Directives =
===========================
The section of code before main is referred to as the preprocessor.
As the name implies this section is examined before actual code compilation begins.
These begin with #

There are 3 directives and 1 related concept we will look at and use,
	consult the C++ documentation for more ...
* Pragma directives
* Source file inclusions
* Namespaces
* Macro definitions
*/

// Pragma directive
// (specify options to the compiler)
// We are using this to suppress allowed warnings and errors
// These are specific to the platform and compiler you are using,
//	so consult the specific documentation
#pragma warning (disable:6031) // getch
#pragma warning (disable:4996) // scanf

// Source File Inclusions
// (the #include we have already seen)
// This is where we get our libraries
// In Project 2 we will see how to get a custom library
#include <conio.h>	// for getch
#include <iostream>	// for cin, cout
#include <iomanip>	// cout formatting

// Namespaces
// (does not always need to be in the preprocessor, but for our usage we will put it here)
// This allows us to bring a name from a namespace into the current declarative region
// In C++ the standard library uses the std namespace
// 
// In C++ we can not have variables OR functions with the same name so we need to deconflict
// This indicates where to look for cout
// 
// Basically, this also saves us some typing for standard functionality.
// Without this:
// * cout would have to be std::cout
// * cin would have to be std::cin
// * endl would have to be std::endl
//
// Not every style uses this, but we will here,
//	there are reasons to not use this
using namespace std;

// Macro Definitions
// Think of these as fixed variables or values in usage,
// but in actuality it is just a replacement mechanism
// No actual memory is allocated, your code is pre-processed with replacements,
//	just as if you used literal values
// Note that this does count as avoiding magic numbers,
//	since the preprocessor does this for you
// 
// We can treat these as non changing constant values to be used in our program
// We can of course change them and recompile, this requires a source code change
//
// The preprocessor replaces any instance of the identifier defined here
// This can be anything since it uses replacement (value, expression, statement, ...)
// *** In general this is very useful for values that we can treat like a variable
// *** But, these values CAN NOT be changed!!!
//
// These will not show up in locals when debugging
// You can mouse over your code to see the value

// SYNTAX: #define <identifier> replacement_value

// Examples
// Note the use of tab to align these for style
#define MY_INTEGER			100
#define MY_FLOATING_POINT	9.87654
#define MY_CHAR				'a'
#define MY_STRING			"Hello"

// Here are some you may want to use in conditional logic, although not required
#define TRUE	1
#define FALSE	0

// More Examples relevant to assignments and projects
#define FIRST_COL_WIDTH		14
#define SECOND_COL_WIDTH	15
#define THIRD_COL_WIDTH		12
#define PERCENT_CONVERT		100.0
#define ASSIGNMENT_VALUE	50.0

int main() {
	// setup
	cout << fixed << setprecision(2);

	// We can try to print out macros here
	cout << "PRINT SOME MACROS!" << endl;
	cout << "MY_INTEGER is: " << MY_INTEGER << endl;
	cout << "MY_FLOATING_POINT is: " << MY_FLOATING_POINT << endl;
	cout << "MY_CHAR is: " << MY_CHAR << endl;
	cout << "MY_STRING is: " << MY_STRING << endl;
	cout << endl;

	// This code is not allowed:
	// MY_INTEGER = 2;

	// Sometimes we do not want to use the preprocessor but may want to
	// make sure a variable can not be changed
	// For this we can make a var a constant with the keyword const
	// SYNTAX: const <data_type> <identifier> <init>
	const int thisCanNotChange = 50;

	// This code is now not allowed because of const in the declaration:
	// thisCanNotChange = 49;

	// Why do we want constant values we can not change?:
	// * Sometimes it is required (array capacities)
	// * Sometimes we want to indicate the value should not be changed later
	// 
	// We can use either a macro or a constant in places where it is
	//	required that we have a value which can not change
	// The compiler will let you know when this occurs
	// We have already seen this with arrays
	char myString[MY_INTEGER] = "Hello";
	char myString2[thisCanNotChange] = "Hello";

	// We can not do this since arraySize CAN change:
	// int arraySize = 100;
	// char myString3[arraySize] = "Hello";

	// In general we will use macro definitions for constant values as a preferred method
	// We will also mainly use integer and floating point values for these
	// You may want to use these on your Project 1 to avoid magic numbers

	// Take-aways:
	// * Sometimes we need a value which CAN NOT change, these are constant values
	// * We can make a variable const
	// * We can also use macro definitions

	// Explicit vs Implicit Casting
	//
	// We already saw implicit casting when we looked at expressions
	// When we are using variables we might want to use explicit casting
	// We will look at a C-style cast

	// Implicit casting
	double result01 = 1.0 / 2;
	cout << "Result01: " << result01 << endl;

	// Explicit Casting using a C-style cast
	// use the () operator with a data type inside
	// We have already seen this with float
	float myFloat = (float)1.2;
	
	// Useful if we have int vars but need a floating point result
	int numerator = 1;
	int demominator = 2;
	double result02 = (double)numerator / (double)demominator;
	cout << "Result02: " << result02 << endl;

	/*
	How does this work?

	(double)numerator => resolves the numerator to 1 and then casts (converts) it to 1.0
	(double)demominator => resolves the demominator to 2 and then casts (converts) it to 2.0
	We now have an R value of "1.0 / 2.0" which results in 0.5
	0.5 can now properly be assigned to the double result02
	*/

	// If we did not explicitly cast we would get truncation
	double result03 = numerator / demominator;
	cout << "Result03: " << result03 << endl;
	
	// Take-aways:
	// * Do not always rely on implicit casting,
	//	you may need to do so explicitly,
	//	especially when using variables.
	// * Sometimes the input may be an int,
	//	but the calculation needs to have a floating point result

	// Exit to OS
	_getch();
	return 0;
}
