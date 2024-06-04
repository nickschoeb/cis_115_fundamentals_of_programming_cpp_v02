/*
Author:			Nick Schoeb
Description:	More Functions
*/

// Allowed Warnings
#pragma warning (disable:6031) // getch

// C
#include <conio.h>

// C++
#include <iostream>
#include <iomanip>
using namespace std;

void noArgsNoReturn();
int getSomethingBack();
void passSomeNumbers(int, double);
void changeNumber(int&);
void passStringData(char*);
int allTogether(double&, char*, int);

int main() {
	// Function Calls
	noArgsNoReturn();

	int theMagicNumber = getSomethingBack();
	cout << "The magic number is: " << theMagicNumber << endl;

	// pass literal values
	passSomeNumbers(1, 2.3);

	// pass vars from main scope
	int anotherInt = 3;
	double anotherDouble = 9.8;
	passSomeNumbers(anotherInt, anotherDouble);

	// change a number here
	// pass by reference (not value)
	int shouldBeSeven = 7; // or should it?
	cout << "Before: " << shouldBeSeven << endl;
	changeNumber(shouldBeSeven);
	cout << "After: " << shouldBeSeven << endl;

	// pass a string
	char myName[10] = "Abcd";
	passStringData(myName);

	// all together
	double shouldBeTwo = 2.0;
	int result = allTogether(shouldBeTwo, myName, 2);
	cout << result << endl;
	cout << shouldBeTwo << endl;

	// applicable to your game???

	// Exit to OS
	_getch();
	return 0;
}

void noArgsNoReturn() {
	// Here we can do something
	// But don't know about anything
	// We also can't tell anyone about anything
	cout << "Hello from a function!" << endl;
}

int getSomethingBack() {
	// We don't know about anything
	// But we can send something back
	return 42;
}

void passSomeNumbers(int specialNumber, double superSpecialNumber) {
	// We know about things
	// But we can't send something back
	cout << "The numbers are: " << specialNumber << " and " << superSpecialNumber
		<< endl;
}

void changeNumber(int &numberToChange) {
	// & denotes a reference
	numberToChange = numberToChange + 1;
}

void passStringData(char *name) {
	// C++ strings are character arrays that are null-terminated
	cout << name << endl;
}

int allTogether(double &changeMe, char *playerName, int information) {
	cout << "We were told about " << information << endl;
	cout << "We are going to change something" << endl;
	changeMe = changeMe + information;
	cout << "Hello " << playerName << endl;
	return 43;
}
