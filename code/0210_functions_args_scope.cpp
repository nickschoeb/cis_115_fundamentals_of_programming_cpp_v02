// Including libraries and external dependencies
#pragma warning(disable:6031)
#include <iostream>
#include <conio.h>
using namespace std;

// Function 'Prototypes'
void addNumbers(int, int);

int main() {
	int firstNumber = 3;
	int secondNumber = 4;
	addNumbers(firstNumber, secondNumber);
	cout << firstNumber << " " << secondNumber << endl;
	_getch();
	return 0;
}

// Function definition.
void addNumbers(int firstNumber, int secondNumber) {
	cout << firstNumber << " " << secondNumber << endl;
	firstNumber = 10;
	secondNumber = 20;
	int sum = firstNumber + secondNumber;
	cout << firstNumber << " + "
		<< secondNumber << " = "
		<< sum << endl;
}
