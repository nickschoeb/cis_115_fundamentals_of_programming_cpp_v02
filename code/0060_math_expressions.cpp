/*
Author: Mark Dencler
Description: Demonstration of order of operations and casting solutions
			 to assignment statements.
*/

#include <stdio.h>
#include <conio.h>

int main() {
	int int1 = 4;
	int int2 = 6;
	double dbl1 = 2.5;
	double dbl2 = 1.5;
	int intAnswer;
	double dblAnswer;

	// INTEGER STORES THE ANSWERS
	intAnswer = int1 + int1 * int2;
	printf("Answer #%2d: %d\n", 1, intAnswer);

	intAnswer = (int1 + int1) * int2;
	printf("Answer #%2d: %d\n", 2, intAnswer);

	intAnswer = int2 * int1 / 7;
	printf("Answer #%2d: %d\n", 3, intAnswer);

	intAnswer = int2 * int1 / 7.0;
	printf("Answer #%2d: %d\n", 4, intAnswer);

	intAnswer = dbl1 * int1 * 2;
	printf("Answer #%2d: %d\n", 5, intAnswer);

	intAnswer = (int2 * int1 / 7) / (int1 + 4 * 3 / dbl2);
	printf("Answer #%2d: %d\n", 6, intAnswer);

	intAnswer = int1 % 3;
	printf("Answer #%2d: %d\n", 7, intAnswer);

	intAnswer = 17 + 40 % int2;
	printf("Answer #%2d: %d\n", 8, intAnswer);

	printf("\n");

	// SAME THING WITH DOUBLE STORING ANSWERS
	dblAnswer = int1 + int1 * int2;
	printf("Answer #%2d: %f\n", 9, dblAnswer);

	dblAnswer = (int1 + int1) * int2;
	printf("Answer #%2d: %f\n", 10, dblAnswer);

	dblAnswer = int2 * int1 / 7;
	printf("Answer #%2d: %f\n", 11, dblAnswer);

	dblAnswer = int2 * int1 / 7.0;
	printf("Answer #%2d: %f\n", 12, dblAnswer);

	dblAnswer = dbl1 * int1 * 2;
	printf("Answer #%2d: %f\n", 13, dblAnswer);

	dblAnswer = (int2 * int1 / 7) / (int1 + 4 * 3 / dbl2);
	printf("Answer #%2d: %f\n", 14, dblAnswer);

	dblAnswer = int1 % 3;
	printf("Answer #%2d: %f\n", 15, dblAnswer);

	dblAnswer = 17 + 40 % int2;
	printf("Answer #%2d: %f\n", 16, dblAnswer);

	_getch();
	return 0;
}
