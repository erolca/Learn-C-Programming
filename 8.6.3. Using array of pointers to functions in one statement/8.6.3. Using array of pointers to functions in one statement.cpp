// 8.6.3. Using array of pointers to functions in one statement.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <stdio.h>

int sum(int x, int y) {
	return x + y;
}

int product(int x, int y) {
	return x * y;
}

int difference(int x, int y) {
	return x - y;
}

int main(void) {
	int a = 10;
	int b = 5;
	int result = 0;
	int(*pfun[3])(int, int);           /* Function pointer array declaration */

									   /* Initialize pointers */
	pfun[0] = sum;
	pfun[1] = product;
	pfun[2] = difference;

	/* Call all three functions through pointers in an expression */
	result = pfun[1](pfun[0](a, b), pfun[2](a, b));
	//product(5, 15) ->75
	printf("\n\nThe product of the sum and the difference = %d\n",
		result);

	return 0;
}
//The product of the sum and the difference = 75