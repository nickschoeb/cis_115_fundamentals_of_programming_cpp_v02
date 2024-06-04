// ****************************************************************************
// Rectangle Calculator v1
// Author: Mark Dencler
// Description: This program takes integer inputs for the length and height
//  of a rectangle and displays the corresponding area and perimeter.
// ****************************************************************************

// Include external libraries, definitions, and other pre-main()
//  activities.
#include <iostream>		// for cout, cin
#include <iomanip>
#include <conio.h>		// for _getch()
using namespace std;
const unsigned char ASCII_SQUARED = (char)253;

int main() {
	// Declare and initialize all of the variables that will be used
	//  in the program
	int length = 0;
	int height = 0;
	int area = 0;
	int perimeter = 0;

	// Prompt the user for values to place in the appropriate input
	//  variables
	cout << "Please enter a value for the length of the rectangle: ";
	cin >> length;
	cout << "Please enter a value for the height of the rectangle: ";
	cin >> height;

	// Perform any behind-the-scene mathematics.  Note that the
	//  statements here should manipulate the information
	//  stored in the variables through whatever
	//  calculations are necessary, but no input or output
	//  takes place here.
	area = length * height;
	perimeter = 2 * length + 2 * height;

	// Display the final results in an aesthetically pleasing
	//  manner on the output console.
	cout << endl << endl;
	cout << "-------------------------------------------------------" << endl;
	cout << "The area of the rectangle is: " << area << " units" << ASCII_SQUARED << "." << endl;
	cout << "The perimeter of the rectangle is: " << perimeter << " units." << endl << endl;
	cout << "***********************" << endl;
	cout << "*                     *" << endl;
	cout << "*                     *" << endl;
	cout << "*                     *" << "  " << height << " units" << endl;
	cout << "*                     *" << endl;
	cout << "*                     *" << endl;
	cout << "***********************" << endl;
	cout << "         " << length << " units" << endl << endl;

	// Exit to the OS
	_getch();
	return 0;
}
