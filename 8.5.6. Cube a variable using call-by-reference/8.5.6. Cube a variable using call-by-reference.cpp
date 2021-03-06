// 8.5.6.	Cube a variable using call-by-reference with a pointer argument : 
// Defines the entry point for the console application.
//

#include "stdafx.h"

#include <stdio.h>

void cubeByReference(int *nPtr);

int main()
{
	int number = 5;

	printf("The original value of number is %d", number);

	cubeByReference(&number);

	printf("\nThe new value of number is %d\n", number);

	return 0;

}

void cubeByReference(int *nPtr)
{
	*nPtr = *nPtr * *nPtr * *nPtr;  /* cube *nPtr */
}
//The original value of number is 5
//The new value of number is 125