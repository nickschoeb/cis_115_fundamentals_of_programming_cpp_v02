/*
Author:			Nick Schoeb
Description:	DRY Intro + Magic Numbers - Notes and Examples
*/

// Allowed Warnings
#pragma warning (disable:6031) // getch

// Libraries
#include <conio.h>	// getch
#include <iostream>	// cout
#include <iomanip>
using namespace std;

int main() {
	// SOME NOTES ON THIS EXAMPLE CODE:
	// ================================
	// this is an incomplete program
	// this may contain parts of different programs
	// focusing on the magic numbers concept
	// some of the var names in here are not what would normally be appropriate
	// they are here to differentiate the examples and avoid naming conflicts
	// this is to avoid having several different source files to illustrate one concept

	/*
	 _____  _______     __
	 |  __ \|  __ \ \   / /
	 | |  | | |__) \ \_/ /
	 | |  | |  _  / \   /
	 | |__| | | \ \  | |
	 |_____/|_|  \_\ |_|


	  _____              _ _     _____                       _    __     __                       _  __
	 |  __ \            ( ) |   |  __ \                     | |   \ \   / /                      | |/ _|
	 | |  | | ___  _ __ |/| |_  | |__) |___ _ __   ___  __ _| |_   \ \_/ /__  _   _ _ __ ___  ___| | |_
	 | |  | |/ _ \| '_ \  | __| |  _  // _ \ '_ \ / _ \/ _` | __|   \   / _ \| | | | '__/ __|/ _ \ |  _|
	 | |__| | (_) | | | | | |_  | | \ \  __/ |_) |  __/ (_| | |_     | | (_) | |_| | |  \__ \  __/ | |
	 |_____/ \___/|_| |_|  \__| |_|  \_\___| .__/ \___|\__,_|\__|    |_|\___/ \__,_|_|  |___/\___|_|_|
										   | |
										   |_|

	 D.R.Y.

	 Don't Repeat Yourself (Principle)
	 Don't Repeat Yourself (Principle)

	 When programming we want to be efficient as possible in our instructions (our code).
	 There is a principle called DRY or Don't Repeat Yourself.
	 You may see it used in reference to the idea of "Clean Code".

	 In general we do not want to repeat anything we do not have to.
	 This can take many forms and we can avoid it in many different ways.

	 In this course one of those instances is the idea of "Magic Numbers".

	  __  __             _        _   _                 _
	 |  \/  |           (_)      | \ | |               | |
	 | \  / | __ _  __ _ _  ___  |  \| |_   _ _ __ ___ | |__   ___ _ __ ___
	 | |\/| |/ _` |/ _` | |/ __| | . ` | | | | '_ ` _ \| '_ \ / _ \ '__/ __|
	 | |  | | (_| | (_| | | (__  | |\  | |_| | | | | | | |_) |  __/ |  \__ \
	 |_|  |_|\__,_|\__, |_|\___| |_| \_|\__,_|_| |_| |_|_.__/ \___|_|  |___/
					__/ |
				   |___/

	 Magic numbers are numbers which are repeated in the code, usually in the form of literal values,
	 which represent the same idea.

	 This is an issue because these values are static, placed throughout the code, and if you need to change the value used,
	 you will have to change it in several places.
	 It is easy to forget one instance of the number, causing potential bugs and correctness problems.

	 The way we avoid this is to use variables initialized to the value needed,
	 We can also use constants to define these values,
	 and then use those variables or constants in the code whenever that idea needs to be represented.
	 Now if the value changes for that idea, it can be changed in one place and reflected throughout the code immediately.

	 Don't take it too far though:
	 One common issue to watch out for is if you have 2 number ideas with the same value,
	 but they represent different ideas.
	 If the ideas are different they should be put into different vars or constants even though the value is the same.
	 They should then be used appropriately by the idea they represent.
	 This way one idea can change values without affecting the other idea.
	 Even if both values change to the same value again they should be separate.

	 If the values are always the same by the nature of their idea then it can be one,
	 since it is one idea.

	 You will have to use some judgment here.

	 This will be checked as part of the grading criteria in:
	 { P1, A6, A7, A8, P2 }
	*/

	/*
	  ______                           _          _  _      ___  __ 
	 |  ____|                         | |       _| || |_   / _ \/_ |
	 | |__  __  ____ _ _ __ ___  _ __ | | ___  |_  __  _| | | | || |
	 |  __| \ \/ / _` | '_ ` _ \| '_ \| |/ _ \  _| || |_  | | | || |
	 | |____ >  < (_| | | | | | | |_) | |  __/ |_  __  _| | |_| || |
	 |______/_/\_\__,_|_| |_| |_| .__/|_|\___|   |_||_|    \___/ |_|
								| |                                 
								|_|                                 
	*/
	// Example # 01 With Magic Numbers
	// ************************************************************************************************************************

	// ... (this notation indicates missing code for a complete program)
	// ... ignoring vars, setup, program title, and input ...

	// although a few vars just for this example
	double userInputA = 9.8;
	double userInputB = 1.2;
	double userInputC = 6.5;
	double calculationResult01 = 0.0;
	double calculationResult02 = 0.0;
	double calculationResult03 = 0.0;

	// Calculations
	calculationResult01 = userInputA / 30.0;
	calculationResult02 = userInputB / 30.0;
	calculationResult03 = userInputC / 30.0;

	// .. ignoring exit to OS ...
	// ...

	/*
	In this case what we are doing is:
	* Pretending to get user input in 3 doubles called userInputA, etc.
	* Creating vars for the results of 3 calculations called calculationResult01, etc.
	* Calculating the result using expressions which divide each input by 30.0
	
	30.0 is a "MAGIC NUMBER" in this example.
	Why?:
	* 30.0 represents the same idea here, as a denominator for a calculation
	  (we are missing some requirements and context here but for this example this is the case)
	
	How do we fix it?:
	* We add a variable called "calcDenominator" and initialize to 30.0 (put it in setup)
	* We use it in our calculations
	*/

	// What might this look like?:

	// ...
	// add this to vars
	double calcDenominator = 30.0;
	// ...

	// calculations should now look like this:
	calculationResult01 = userInputA / calcDenominator;
	calculationResult02 = userInputB / calcDenominator;
	calculationResult03 = userInputC / calcDenominator;

	// ...

	/*
	Now if we decide that 30.0 is no longer relevant to our requirements we can simply change one value
	and the program will calculate properly.
	(We should still run several test cases since we changed the code)
	*/
	


	/*
	  ______                           _          _  _      ___ ___  
	 |  ____|                         | |       _| || |_   / _ \__ \ 
	 | |__  __  ____ _ _ __ ___  _ __ | | ___  |_  __  _| | | | | ) |
	 |  __| \ \/ / _` | '_ ` _ \| '_ \| |/ _ \  _| || |_  | | | |/ / 
	 | |____ >  < (_| | | | | | | |_) | |  __/ |_  __  _| | |_| / /_ 
	 |______/_/\_\__,_|_| |_| |_| .__/|_|\___|   |_||_|    \___/____|
								| |                                  
								|_|                                  
	*/
	// Example # 02 Without Magic Numbers (Maybe???)
	// ************************************************************************************************************************

	/*
	This is not always needed and you need to use some judgment based on your understanding of the
	requirements and context you are in.
	
	Where does this not apply or optionally apply?:
	* When using 10.0 or 100.0 to convert a floating point to a readable percentage by shifting the decimal place in a display value
	* When every value represents a different idea
	
	Below is an example of display number conversion where we can optionally apply a solution 
	*/

	// ...
	
	// vars
	double userInputD = 48.2;
	double userInputE = 32.4;
	double userInputF = 25.2;
	double calculationResult04 = 0.0;
	double calculationResult05 = 0.0;
	double calculationResult06 = 0.0;
	double calcDenominator2 = 50.0;

	// calculations
	calculationResult04 = userInputD / calcDenominator2 * 100.0;
	calculationResult05 = userInputE / calcDenominator2 * 100.0;
	calculationResult06 = userInputF / calcDenominator2 * 100.0;

	// ...

	/*
	What is going on here?:
	* The calculation is taking user input from 0 - 50 and dividing it by 50 to get a percentage
	* The resulting values without "* 100.0" would look like { 0.964, 0.648, 0.504 }
	* Since we want to get a "Display Value" for the user we multiply by 100.0
	* The values will then look like { 96.4, 64.8, 50.4 }
	* We are also just storing this display value directly into the result vars since we never need to use the intermediate values
		(NOTE: that sometimes you may need to have 2 different values such as the intermediate calculation result
		 and a different one for the display value, not always but sometimes.
		 Generally, only do this if you truly need to keep the intermediate value for later use)
	
	In this case we could optionally consider 100.0 a magic number.
	Now it would be best to represent it in a var or constant, however
	converting percentages into display values will never be anything other than 100.0 unless the way math works changes,
	and in that case we may have bigger problems.

	If you did want to apply our solution to this it would look like this:
	*/
	

	// ...
	// add this to vars
	double percentConversion = 100.0;

	// calculations now look like this:
	calculationResult04 = userInputD / calcDenominator2 * percentConversion;
	calculationResult05 = userInputE / calcDenominator2 * percentConversion;
	calculationResult06 = userInputF / calcDenominator2 * percentConversion;

	// ...

	/*
	I do suggest doing it in this optional case to become used to the practice.
	*/



	/*
	  ______                           _          _  _      ___ ____
	 |  ____|                         | |       _| || |_   / _ \___ \
	 | |__  __  ____ _ _ __ ___  _ __ | | ___  |_  __  _| | | | |__) |
	 |  __| \ \/ / _` | '_ ` _ \| '_ \| |/ _ \  _| || |_  | | | |__ <
	 | |____ >  < (_| | | | | | | |_) | |  __/ |_  __  _| | |_| |__) |
	 |______/_/\_\__,_|_| |_| |_| .__/|_|\___|   |_||_|    \___/____/
								| |
								|_|
	*/
	// Example # 03 Magic Numbers In Output
	// ************************************************************************************************************************

	/*
	Another common case you will run into is in project 1.
	In project 1 we will create tables using minimum field width.
	The common width value for each column is a common place to end up with magic numbers.
	*/

	// ...
	// some extended ASCII chars
	const unsigned char ASCII_BLOCK = (char)219;

	// vars for this example
	int valueA = 999;
	int valueB = 88;
	int valueC = 7;
	int valueD = 1;
	int valueE = 22;
	int valueF = 33333;
	
	// output - partial table
	cout << "Ex 02 table PRE" << endl;
	cout << ASCII_BLOCK << " Lorem " << ASCII_BLOCK << setw(5) << valueA << ' ' <<
		ASCII_BLOCK << setw(7) << valueD << ' ' << ASCII_BLOCK << endl;
	cout << ASCII_BLOCK << " Ipsum " << ASCII_BLOCK << setw(5) << valueB << ' ' <<
		ASCII_BLOCK << setw(7) << valueE << ' ' << ASCII_BLOCK << endl;
	cout << ASCII_BLOCK << " Dolor " << ASCII_BLOCK << setw(5) << valueC << ' ' <<
		ASCII_BLOCK << setw(7) << valueF << ' ' << ASCII_BLOCK << endl;
	cout << endl;

	// ...

	/*
	What is going on here?:
	* We have some values just for illustration purposes we will use and are set to values which will take up
		different amounts of characters when printed out
	* We are creating a table which uses minimum field width
	* The table will be the same size no matter what the values are
	* We are setting the column widths of the table wider than needed to accommodate larger numbers
	* The column widths are repeated in each output line with values { 5, 7 }
	* Each unique value represents the idea of the width of a column

	What if we needed to change the column width because we expect to get larger numbers or maybe add floating points?
	OK, we should fix this.
	*/

	// ...
	// add these to vars
	int firstColumnWidth = 5;
	int secondColumnWidth = 7;

	// Output now looks like this:
	cout << "Ex 02 table POST" << endl;
	cout << ASCII_BLOCK << " Lorem " << ASCII_BLOCK << setw(firstColumnWidth) << valueA << ' ' <<
		ASCII_BLOCK << setw(secondColumnWidth) << valueD << ' ' << ASCII_BLOCK << endl;
	cout << ASCII_BLOCK << " Ipsum " << ASCII_BLOCK << setw(firstColumnWidth) << valueB << ' ' <<
		ASCII_BLOCK << setw(secondColumnWidth) << valueE << ' ' << ASCII_BLOCK << endl;
	cout << ASCII_BLOCK << " Dolor " << ASCII_BLOCK << setw(firstColumnWidth) << valueC << ' ' <<
		ASCII_BLOCK << setw(secondColumnWidth) << valueF << ' ' << ASCII_BLOCK << endl;
	cout << endl;

	// ...

	/*
	You can run this for output and see that the result is the same however
	the code is cleaner and more maintainable

	Change the values in { firstColumnWidth, secondColumnWidth } to see this in action.
	(change to larger values for it to make sense)

	Also remember that even if you changed both to 10, they need to be in different vars since
	the idea of the first column width is different than the idea of the second column width.
	*/



	/*
	   ____  _   _                 _   _       _            
	  / __ \| | | |               | \ | |     | |           
	 | |  | | |_| |__   ___ _ __  |  \| | ___ | |_ ___  ___ 
	 | |  | | __| '_ \ / _ \ '__| | . ` |/ _ \| __/ _ \/ __|
	 | |__| | |_| | | |  __/ |    | |\  | (_) | ||  __/\__ \
	  \____/ \__|_| |_|\___|_|    |_| \_|\___/ \__\___||___/
	*/
	// Other Notes
	/*
	What not to do:
	* Do not just name vars a number and use it when that number is needed
	
	Although this works don't do it.
	You might as well just use the literal value
	The idea of putting 100 into a var is great, just name it what it represents.

	Exceptions to this are special numbers like Pi, but there are better ways to handle these numbers sometimes.
	There are many other exceptions so just use your best judgment.
	
	Ask yourself:
	* Would this code be readable and understood by a programmer other than myself?
	* Am I repeating myself?
	*/
	
	// ...
	// vars
	double userInputValueG = 50.0;
	double userInputValueH = 51.0;
	double oneHundred = 100.0; // BAD IDENTIFIER - does this represent an idea?
	double calculationResult07 = 0.0;
	double calculationResult08 = 0.0;

	// usage
	calculationResult07 = userInputValueG / oneHundred;
	calculationResult08 = userInputValueH / oneHundred;

	// ...

	/*
	If a value is just used once then it is ok to just put in the literal value.
	If you go back and change the code just check to see if that value gets used more than once representing the same idea.
	This does not prevent you from applying the solution but it is not necessary.
	You might have seen this on A04 with the temperature conversions where you likely used literal values in the calculations.
	*/

	// ...
	// vars
	int userInputValueI = 40;
	int calculationResult09 = 0;

	// calculation
	calculationResult09 = userInputValueI / 100.0; // if this is the only instance of 100.0 then it is fine

	// ...

	// Exit to OS
	_getch();
	return 0;
}
