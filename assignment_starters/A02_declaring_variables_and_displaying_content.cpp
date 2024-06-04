#include <stdio.h>		// C Library
#include <iostream>		// C++ Library
#include <iomanip>		// for cout::setprecision()
#include <conio.h>		// for _getch()

using namespace std;

int main() {
	printf("PROBLEM #1 - RESULTS BEGIN\n");
	// PROBLEM #1
	// 1.) Declare two singleton variables appropriate for storing two integer values.
	//   Initialize the first variable to the value 17 and the second variable to
	//   the value -6.
  
	// 2.) Display the contents of the first variable in a single 'printf()' statement.
  
	// 3.) Display the contents of the second variable with a single 'cout' statement.
  
	// 4.) Display both values on the same line using the IO mechanism of your choice.
  
	cout << "PROBLEM #1 - RESULT END" << endl;

	printf("PROBLEM #2 - RESULTS BEGIN\n");
	// PROBLEM #2
	// 1.) Declare two singleton, floating-point variables.  One that uses up a single WORD
	//   of data and one that uses a double WORD of data.  Initialize the first variable
	//   to contain the value 1.23456 and the second to contain the value  7.89.
  
	// 2.) Display the contents of the first variable with 'printf()'.  Make the display
	//   round the figure shown to the nearest ten-thousandth.  After your statement,
	//   explain in a comment how rounding the floating-point value in the
	//   display impacted the memory that was allocated for the variable upon initial
	//   declaration.

   	// code

  	// comment
  
	// 3.) Display the contents of the second variable using 'cout'.  Make the display
	//   round the value to the nearest tenth.  As with the previous question,
	//   indicate in a comment after your statement how rounding the floating-point
	//   value in the display impacted the memory that was allocated for the variable
	//   upon initial declaration.

   	// code

  	// comment
  
	// 4.) Display both variables with a miniumum field width of 10 (left justified).
	//   When displaying the information use the 'printf()' function.
  
	// 5.) Display both variables with a miniumum field width of 10 (right justified).
	//   When displaying the information use the 'cout' object.
  
	cout << "PROBLEM #2 - RESULT END" << endl;

	printf("PROBLEM #3 - RESULTS BEGIN\n");
	// PROBLEM #3
	// 1.) Declare a 'string' in C/C++ with a capacity allowing it to hold up to
	//   30 different characters.  Initialize the 'string' to contain the phrase
	//   "Hello there...".  Underneath the comment, indicate the "data type"
	//   associated with the concept of a string in C/C++.

   	// code

  	// comment
  
	// 2.) Display the contents of the string with a single 'printf()' statement.
  
	// 3.) Display the contents of the string with a single 'cout' statement.
  
	cout << "PROBLEM #3 - RESULT END" << endl;

	// It's Over!
	_getch();
	return 0;
}
