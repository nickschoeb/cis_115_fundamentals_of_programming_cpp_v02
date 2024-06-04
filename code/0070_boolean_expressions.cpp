#include <stdio.h>
#include <conio.h>

#ifndef __TRUE_FALSE__
#define __TRUE_FASLE__
#define TRUE 1
#define FALSE 0
#endif

int main() {
	int solution;
	int imTrue = TRUE;
	int imFalse = FALSE;

	solution = imTrue && imFalse;
	printf("Solution %2d: %d\n", 1, solution);

	solution = imTrue || imFalse;
	printf("Solution %2d: %d\n", 2, solution);

	solution = imTrue || imFalse && 5;
	printf("Solution %2d: %d\n", 3, solution);

	solution = (imTrue && imFalse) || !imFalse;
	printf("Solution %2d: %d\n", 4, solution);

	solution = (3 && 4) && imTrue;
	printf("Solution %2d: %d\n", 5, solution);

	solution = !(imTrue) || 7 && imFalse;
	printf("Solution %2d: %d\n", 6, solution);

	solution = !((6 % 3) || imFalse);
	printf("Solution %2d: %d\n", 7, solution);

	solution = !(!(!imTrue));
	printf("Solution %2d: %d\n", 8, solution);

	solution = 0 && -1 || imFalse && imTrue && imTrue;
	printf("Solution %2d: %d\n", 9, solution);

	solution = ((5 < 6) == 6 * 7);
	printf("Solution %2d: %d\n", 10, solution);

	solution = !((3 % 6) && imTrue <= -1) || imFalse;
	printf("Solution %2d: %d\n", 11, solution);

	_getch();
	return 0;
}
