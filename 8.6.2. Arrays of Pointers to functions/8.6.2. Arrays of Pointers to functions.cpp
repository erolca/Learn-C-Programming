// 8.6.2. Arrays of Pointers to functions.cpp : Defines the entry point for the console application.
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

	int i;
	for (i = 0; i < 3; i++)
	{
		result = pfun[i](a, b);           /* Call the function through a pointer */
		printf("\nresult = %d", result);  /* Display the result                  */
	}

	return 0;
}
//result = 15
//result = 50
//result = 5