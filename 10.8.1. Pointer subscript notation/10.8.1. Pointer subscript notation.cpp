// 10.8.1. Pointer subscript notation.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	int b[] = { 10, 20, 30, 40 };
	int *bPtr = b;
	int i;
	int offset;

	printf("\nPointer subscript notation\n");

	for (i = 0; i < 4; i++) {
		printf("bPtr[ %d ] = %d\n", i, bPtr[i]);
	}

	return 0;
}

//Pointer subscript notation
//bPtr[0] = 10
//bPtr[1] = 20
//bPtr[2] = 30
//bPtr[3] = 40

