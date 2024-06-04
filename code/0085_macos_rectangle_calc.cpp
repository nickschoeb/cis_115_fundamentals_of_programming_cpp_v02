/*
Description:    Rectangle Calculator v1 macOS

Unicode reference:
https://unicode-table.com/en/

for P01:
https://www.compart.com/en/unicode/block/U+2500
*/

// C
#include <stdio.h>

// C++
#include <iostream>
#include <iomanip>
using namespace std;

const char UNICODE_SQUARED[4] = "\u00B2";

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
    cout << "The area of the rectangle is: " << area << " units" << UNICODE_SQUARED << "." << endl;
    cout << "The perimeter of the rectangle is: " << perimeter << " units." << endl << endl;
    cout << "***********************" << endl;
    cout << "*                     *" << endl;
    cout << "*                     *" << endl;
    cout << "*                     *" << "  " << height << " units" << endl;
    cout << "*                     *" << endl;
    cout << "*                     *" << endl;
    cout << "***********************" << endl;
    cout << "         " << length << " units" << endl << endl;

    // Exit to OS
    rewind(stdin);
    getchar();
    return 0;
}
