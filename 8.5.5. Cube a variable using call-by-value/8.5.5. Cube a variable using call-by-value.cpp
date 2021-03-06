// 8.5.5. Cube a variable using call-by-value.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>

int cubeByValue(int n);

int main()
{
	int number = 5;

	printf("The original value of number is %d", number);

	/* pass number by value to cubeByValue */
	number = cubeByValue(number);

	printf("\nThe new value of number is %d\n", number);

	return 0;

}

int cubeByValue(int n) {
	return n * n * n;

}
//The original value of number is 5
//The new value of number is 125