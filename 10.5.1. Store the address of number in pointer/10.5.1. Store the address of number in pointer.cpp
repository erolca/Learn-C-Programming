// 10.5.1. Store the address of number in pointer.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(void)
{
	int number = 0;
	int *pointer = NULL;

	number = 10;

	pointer = &number;  /*Store the address of number in pointer   */

	printf(" Pointer's address: %p", &pointer);
	printf("\n The value at that location is: %d", *pointer);

	return 0;
}
// Pointer's address: 0000004441D9FAA8
//The value at that location is : 10