// ****************************************************************************
// Author: Mark Dencler
// Description:  This example provides examples and explanations for performing
//   basic console output tasks with 'printf()' (imperative/procedural paradigm)
//   and 'cout' (object-oriented paradigm).  The concepts of minimum field width,
//   justification, and precision control are explored.
// ****************************************************************************

// C
#include <stdio.h>
#include <conio.h>

// C++
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	// C
	printf("Hello\n");
	// C++
	cout << "Hello" << endl;

	// C
	printf("%5d\n", 7);
	// C++
	cout << setw(5) << 7 << endl;

	// C
	printf("%c\n", 'L');
	// C++
	cout << 'L' << endl;

	// C
	printf("%-5da\n", 7);
	// C++
	cout << left << setw(5) << 7 << endl;
	cout << right;

	// C
	// In C, the number we use for precision indicates
	//  the number of digits showing after the decimal.
	double theNumber = 3.1415;
	printf("%.2f\n", theNumber);
	// C++
	// In C++, the number sent to setprecision() indicates
	//  the number of significant digits to show in the 
	//  entire figure.
	cout << fixed;
	cout << setprecision(3) << theNumber << endl;

	_getch();
	return 0;
}
