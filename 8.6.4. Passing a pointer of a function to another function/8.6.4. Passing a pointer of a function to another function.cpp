// 8.6.4. Passing a pointer of a function to another function.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
/*
Beginning C: From Novice to Professional, Fourth Edition

By Ivor Horton
ISBN: 1-59059-735-4
640 pp.
Published: Oct 2006
*/


#include <stdio.h>

int any_function(int(*pfun)(int, int), int x, int y) {
	return pfun(x, y);
}

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
	int(*pf)(int, int) = sum;          /* Pointer to sum function */

	result = any_function(pf, a, b);
	printf("\nresult = %d", result);

	result = any_function(product, a, b);
	printf("\nresult = %d", result);

	printf("\nresult = %d\n", any_function(difference, a, b));
	return 0;
}
//result = 15
//result = 50
//result = 5