// 10.4.1. Assign NULL to pointer.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <stdio.h>

int main(void)
{
	int number = 0;
	int *pointer = NULL;

	number = 10;
	printf("\nnumber's address: %p", &number);            /* Output the address */
	printf("\nnumber's value: %d\n\n", number);           /* Output the value   */

	return 0;
}
//number's address: 9a378
//number's value: 10