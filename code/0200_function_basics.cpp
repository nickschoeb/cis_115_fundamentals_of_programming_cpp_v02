// Including libraries and external dependencies
#pragma warning(disable:6031)
#include <iostream>
#include <conio.h>
using namespace std;

// Function 'Prototypes'
void A();
void B();
void C();

int main() {
	cout << "Hello" << endl;
	// Function 'calls'
	A();
	B();
	C();
	_getch();
	return 0;
}

// Function definition.
void A() {
	cout << "I'm A." << endl;
}

void B() {
	cout << "I'm B." << endl;
	C();
}

void C() {
	cout << "I'm C." << endl;
}
