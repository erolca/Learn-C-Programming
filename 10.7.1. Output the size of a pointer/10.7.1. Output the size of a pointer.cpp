// 10.7.1. Output the size of a pointer.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	int number = 0;
	int *pointer = NULL;

	number = 10;

	pointer = &number;

	printf("\npointer's size: %d bytes", sizeof(pointer)); /* Output the size   */
	return 0;
}
//pointer's size: 4 bytes
