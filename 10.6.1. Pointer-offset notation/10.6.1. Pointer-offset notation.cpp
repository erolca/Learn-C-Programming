// 10.6.1. Pointer-offset notation.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <stdio.h>

int main()
{
	int b[] = { 10, 20, 30, 40 };
	int *bPtr = b;
	int i;
	int offset;

	printf("\nPointer/offset notation\n");

	for (offset = 0; offset < 4; offset++) {
		printf("*( bPtr + %d ) = %d\n", offset, *(bPtr + offset));
	}

	return 0;
}
//Pointer / offset notation
//*(bPtr + 0) = 10
//* (bPtr + 1) = 20
//* (bPtr + 2) = 30
//* (bPtr + 3) = 40