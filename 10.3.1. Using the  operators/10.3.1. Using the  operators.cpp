// 10.3.1. Using the & and * operators.cpp :
// Defines the entry point for the console application.
//

#include "stdafx.h"

#include <stdio.h>

int main()
{
	int a;        /* a is an integer */
	int *aPtr;    /* aPtr is a pointer to an integer */

	a = 7;
	aPtr = &a;    /* aPtr set to address of a */

	printf("The address of a is %p"
		"\nThe value of aPtr is %p", &a, aPtr);

	printf("\n\nThe value of a is %d"
		"\nThe value of *aPtr is %d", a, *aPtr);

	printf("\n\nShowing that * and & are complements of "
		"each other\n&*aPtr = %p"
		"\n*&aPtr = %p\n", &*aPtr, *&aPtr);

	return 0;

}
//The address of a is 0000005EC7B4FA24
//The value of aPtr is 0000005EC7B4FA24
//
//The value of a is 7
//The value of *aPtr is 7
//
//Showing that * and & are complements of each other
//&*aPtr = 0000005EC7B4FA24
//*&aPtr = 0000005EC7B4FA24