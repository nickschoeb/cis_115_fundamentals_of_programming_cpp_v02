// Description: This example illustrates the syntax used to construct
//   a basic IF-ELSE clause.  The IF clauses will perform some basic
//   analyses on the contents of the variable 'testValue'.

#include <iostream>
#include <conio.h>		// for _getch()
using namespace std;

int main() {
	// declare variables
	int testValue = 0;

	// show the contents of 'testValue'
	cout << "The value in \'testValue\' is: " << testValue << endl << endl;

	// an IF statement can exist all by itself
	if (testValue > 0) {											// If the statement inside of the () evaluates
		cout << "\'testValue\' is a POSITIVE integer." << endl;		//   to TRUE, the statement(s) attached to the
	}																//   IF clause will execute.  If the statement
																	//   inside of the () evaluates to FALSE, the
	if (testValue < 0) {											//   statement inside of the IF clause are
		cout << "\'testValue\' is a NEGATIVE integer." << endl;		//   ignored.
	}

	// we can optionally attach an ELSE clause immediately
	//   after a IF clause.
	if (testValue % 2 == 0) {
		cout << "\'testValue\' is an EVEN integer." << endl;
	}
	else {															// We may optionally attach an ELSE clause
		cout << "\'testValue\' is an ODD integer." << endl;			//   to an already existing IF clause.  If
	}																//   the statement in the IF clause's ()s
																	//   evaluates to FALSE, the statements
																	//   attached the IF clause are ignored
																	//   and the statement in the ELSE clause
																	//   are executed instead.
	// exit demonstration	
	_getch();
	return 0;
}
