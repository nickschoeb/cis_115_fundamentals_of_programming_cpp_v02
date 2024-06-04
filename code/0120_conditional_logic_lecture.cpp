/*
Author:			Nick Schoeb
Description:	Conditional Logic
*/

// Allowed Warnings
#pragma warning (disable:6031) // getch

// includes
#include <conio.h>
#include <iostream>
#include <iomanip>
using namespace std;

// macros
#define HOW_HIGH	10
#define TRUE		1
#define FALSE		0

int main() {
	// create some values to use in expression evaluations
	int testValue = 0; // change this initialization to see how each statement works

	/*
	=====================
	= Conditional Logic =
	=====================

	So far the programs you have written have run top to bottom
		without any deviation from that pattern.
	Every statement was executed in those programs.

	With conditional logic we can perform actions based on
		the evaluation of an expression.
	Now, we can perform logic conditionally.

	This opens up a lot of possibilities...

	This also builds upon the ideas from expressions.
	Here is where we are going to craft expressions again,
		not for calculations,
		for determining whether or not to execute code

	We will explore 3 options for this course:
	* if
	* if-else
	* while loop

	You can do whatever conditional logic flow with these 3 options
		(actually just 2 if and while)
	Other conditional logic is just an easier way to do the same
		idea with what we are exploring.

	What are we going to use this for?:
	* Control flow
	* User input validation
	* A6
	* A7
	* A8
	* P2

	This is an extremely important foundation of programming to understand!
	*/

	/*
	======
	= if =
	======

	An if allows code to be executed only if an expression evaluates to true.
	Note the indentation used.
	An if statement can exist by itself.
	We can run 1 or more statements inside the if.
	*/

	// change testValue to 1 or anything greater than 0 to get the output statement
	// if testValue is 0 or less the output statement will not print
	// Test with these values: { -1, 0, 1, 2 }

	cout << "Example # 001 START" << endl;

	testValue = 0;

	if (testValue > 0) {
		cout << testValue << " is a positive integer." << endl;
	}

	cout << "Example # 001 END" << endl << endl;

	/*
	Why?:

	* The statement inside the () gets evaluated
	* Note that there is an implied reduction to a boolean (FALSE/zero vs TRUE/non-zero values)
	* If the statement is TRUE then the statement(s) attached to the if clause will execute
	* If the statement is FALSE then the statements(s) are ignored
	*/

	// DO NOT DO THIS!
	// Normally an if will involve a variable in the expression (not always but generally)
	// In order to explore how this works we can just put numbers in the expression

	cout << "Example # 002 START" << endl;

	// ILLUSTRATION PURPOSES ONLY!
	if (1) {
		cout << "1 is a TRUE" << endl;
	}

	// ILLUSTRATION PURPOSES ONLY!
	if (2) {
		cout << "2 is also a TRUE" << endl;
	}

	// ILLUSTRATION PURPOSES ONLY!
	if (-1) {
		cout << "-1 is also a TRUE" << endl;
	}

	// ILLUSTRATION PURPOSES ONLY!
	if (0) {
		cout << "This will never get executed" << endl;
	}

	cout << "Example # 002 END" << endl << endl;

	// We can also run multiple statements attached to the if
	// Change testValue to 1 to see this

	cout << "Example # 003 START" << endl;

	testValue = 0;

	if (testValue > 0) {
		cout << testValue << " is a positive integer." << endl;
		cout << testValue << " allows this to be executed." << endl;
		// we could keep going here ...
	}

	cout << "Example # 003 END" << endl << endl;

	// We can have multiple if statements to cover multiple conditions
	// Example: output a description for any integer

	cout << "Example # 004 START" << endl;

	testValue = 0;

	if (testValue > 0) {
		cout << testValue << " is a positive integer." << endl;
	}

	if (testValue == 0) {
		cout << testValue << " is zero." << endl;
	}

	if (testValue < 0) {
		cout << testValue << " is a negative integer." << endl;
	}

	cout << "Example # 004 END" << endl << endl;

	/*
	===========
	= if-else =
	===========

	In an if we only executed code if the expression was TRUE.
	if-else allows us to have code which executes if TRUE but also different code for FALSE.
	We can do this by only writing one expression.
	An else can not exist on its own, it must be attached to an if.
	Only one of the code blocks can run, both can never be run due to the binary nature of the boolean.
	*/

	cout << "Example # 005 START" << endl;

	testValue = 0;

	if (testValue % 2 == 0) {
		cout << testValue << " is EVEN" << endl;
	}
	else {
		cout << testValue << " is ODD" << endl;
	}

	cout << "Example # 005 END" << endl << endl;

	// we can also run multiple statements in either case
	// We can also simplify something we did earlier

	cout << "Example # 006 START" << endl;

	testValue = 0;

	if (testValue > 0) {
		cout << testValue << " is a positive integer." << endl;
		cout << "Something else here" << endl;
	}
	else {
		cout << testValue << " is NOT a positive integer." << endl;
		cout << "Note that we can only say it is NOT a positive here." << endl;
	}

	cout << "Example # 006 END" << endl << endl;

	/*
	=============================
	= Conditional Logic Nesting =
	=============================

	We can also perform conditional logic inside conditional logic.
	Once we are on our logic path it is just another statement.
	Note the indentation pattern.
	*/

	cout << "Example # 007 START" << endl;

	testValue = 0;

	if (testValue > 0) {
		// POSITIVES
		cout << testValue << " is a positive integer." << endl;
	}
	else {
		// NOT POSITIVES
		if (testValue == 0) {
			// ZERO
			cout << testValue << " is zero." << endl;
		}
		else {
			// NOT ZERO
			// Implied that this is negative since we already evaluated positives in the first if
			cout << testValue << " is a negative integer." << endl;
		}
	}

	cout << "Example # 007 END" << endl << endl;

	// More complex example:
	// Differentiate positive vs zero vs integer but highlight some specific numbers

	cout << "Example # 008 START" << endl;

	testValue = 0;

	if (testValue > 0) {
		// POSITIVES
		cout << testValue << " is a positive integer." << endl;

		// highlight 8
		if (testValue == 8) {
			cout << "8 is a number" << endl;
		}

		// highlight positive evens
		if (testValue % 2 == 0) {
			cout << testValue << " is a positive EVEN integer." << endl;
		}
	}
	else {
		// NOT POSITIVE
		if (testValue == 0) {
			// ZERO
			cout << testValue << " is zero." << endl;
		}
		else {
			// NEGATIVE
			cout << testValue << " is a negative integer." << endl;
		}
	}

	cout << "Example # 008 END" << endl << endl;

	/*
	So far we have seen that we can execute something inline based on a condition.
	This is useful for when we need to perform an action conditionally.
	This happens once when it is encountered in the path it is in.
	What if we need to perform an action for a number of times (known or unknown)?
	For that idea, we need a loop...
	*/

	/*
	=========
	= while =
	=========
	(and the idea of a loop)
	(the idea of performing actions a number of times)
	(known and unknown number)
	*/

	// counter example - known number of times to perform an action

	cout << "Example # 009 START" << endl;

	int counter = 1;
	while (counter <= 10) {
		cout << counter << " ";
		counter = counter + 1;
	}
	cout << endl;

	cout << "Example # 009 END" << endl << endl;

	/*
	WHY?:
	* The check is performed before execution of attached code
	* If the expression is TRUE, execute
	* After each execution, reevaluate and repeat until the expression is FALSE
	* Once it is FALSE the code will not be executed
	* Definitely set a breakpoint and step into for this example

	NOTE:
	* We are using a var counter
	* counter value is changed inside the {} attached to the while
	* This allows us to set a limit or stopping point on the loop
	* If counter is not changed we can get an infinite loop
	*/

	// We can express this differently by starting to count at zero
	//	and still getting the same output
	//	remember this for arrays!!!

	cout << "Example # 010 START" << endl;

	counter = 0; // notice that this is reset if reused in the previous loop
	while (counter < HOW_HIGH) { // NOTE < used in this case
		cout << counter + 1 << " "; // output like we count starting at 1
		counter++; // this is the same as "counter = counter + 1;"
	}
	cout << endl;

	cout << "Example # 010 END" << endl << endl;

	// NESTING while and if/if-else

	cout << "Example # 011 START" << endl;

	counter = 1;
	while (counter <= HOW_HIGH) {
		if (counter % 2 == 0) {
			cout << counter << " is even." << endl;
		}
		else {
			cout << counter << " is odd." << endl;
		}
		counter++;
	}

	cout << "Example # 011 END" << endl << endl;

	/*
	=========================
	= User Input Validation =
	=========================
	*/

	// We can also use while to do an action until a condition is met
	// A good use for this is to wait for user input which meets validation conditions
	// Remember up to now we just had to have valid user input for programs to work properly
	// Now we can perform some basic user input validation

	cout << "Example # 012 START" << endl;

	// vars
	int userInput = 0;

	// prompt
	cout << "Please enter a number: ";
	cin >> userInput;

	// The condition we will check for is a bad read
	// The fail flag will be set to TRUE if input is bad
	while (cin.fail() == TRUE) {
		cout << "That is not a valid number!" << endl; // prompt user, they need to know
		cin.clear();	// clear out cin flags	// this is the condition we are checking in while
		rewind(stdin);	// purge keyboard buffer

		// re-prompt
		cout << "Please enter a number: ";
		cin >> userInput;
	}

	// What did we get?
	// We should only get this on good input now!
	// Now proceed with the rest of the code which logically comes after this
	cout << "You entered: " << userInput << endl;

	cout << "Example # 012 END" << endl << endl;

	/*
	==================================================
	= User Input Validation - Check for number range =
	==================================================
	*/

	// We can simplify the expression and also add some nested logic to handle conditions
	// We can check for bad input but also for number ranges!

	cout << "Example # 013 START" << endl;

	userInput = 0;

	// re-prompt
	cout << "Please enter an integer 1-10: ";
	cin >> userInput;

	while (cin.fail() || userInput < 1 || userInput > 10) {
		// prompt user differently based on conditions, nested logic
		if (cin.fail()) {
			cout << "That is not an integer!" << endl;
		}
		else {
			if (userInput < 1) {
				cout << "Too low!" << endl;
			}
			else {
				cout << "Too high!" << endl;
			}
		}

		// clear out flags and buffer
		cin.clear();
		rewind(stdin);

		// re-prompt
		cout << "Please enter a number: ";
		cin >> userInput;
	}

	cout << "You entered: " << userInput << endl;

	cout << "Example # 013 END" << endl << endl;


	// Exit to OS
	cout << "... press any key to continue ..." << endl;
	_getch();
	return 0;
}
