/*
Author:			Lecture
Description:	Triangle Calc
*/

// Allowed Warnings
#pragma warning (disable:6031) // getch

// libs
#include <conio.h>	// getch
#include <iostream>	// cout
#include <iomanip>	// formatting
using namespace std;

// constants
const unsigned char ASCII_BLOCK = (char)178;

int main() {
	// vars and setup
	double sideA = 0.0;
	double sideB = 0.0;
	double sideC = 0.0;
	double height = 0.0;
	double area = 0.0;
	double perimeter = 0.0;

	// program title
	cout << ASCII_BLOCK << ASCII_BLOCK << ASCII_BLOCK << ASCII_BLOCK << ASCII_BLOCK
		<< ASCII_BLOCK << ASCII_BLOCK << ASCII_BLOCK << ASCII_BLOCK << ASCII_BLOCK
		<< ASCII_BLOCK << ASCII_BLOCK << ASCII_BLOCK << ASCII_BLOCK << ASCII_BLOCK
		<< ASCII_BLOCK << ASCII_BLOCK << endl;
	cout << ASCII_BLOCK << " TRIANGLE CALC " << ASCII_BLOCK << endl;
	cout << ASCII_BLOCK << ASCII_BLOCK << ASCII_BLOCK << ASCII_BLOCK << ASCII_BLOCK
		<< ASCII_BLOCK << ASCII_BLOCK << ASCII_BLOCK << ASCII_BLOCK << ASCII_BLOCK
		<< ASCII_BLOCK << ASCII_BLOCK << ASCII_BLOCK << ASCII_BLOCK << ASCII_BLOCK
		<< ASCII_BLOCK << ASCII_BLOCK << endl;
	cout << endl;

	// user input
	cout << "What is the length of side A?: ";
	cin >> sideA;
	cout << "What is the length of side B? (this is also the base): ";
	cin >> sideB;
	cout << "What is the length of side C?: ";
	cin >> sideC;
	cout << "What is the height of the triangle?: ";
	cin >> height;

	// calculations
	area = height * sideB / 2.0;
	perimeter = sideA + sideB + sideC;

	// output results
	cout << endl;
	cout << setw(20) << "The area is: " << setw(10) << area << endl;
	cout << setw(20) << "The perimeter is: " << setw(10) << perimeter << endl;
	cout << endl;

	// Exit to OS
	cout << "... press any key to exit ..." << endl;
	_getch();
	return 0;
}
