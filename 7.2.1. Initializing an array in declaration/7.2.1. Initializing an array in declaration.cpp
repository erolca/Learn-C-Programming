// 7.2.1. Initializing an array in declaration.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#define SIZE 12


int main()
{
   
	int a[SIZE] = { 1, 3, 5, 4, 7, 2, 99, 16, 45, 67, 89, 45 };
	int i;
	int total = 0;

	for (i = 0; i < SIZE; i++) {
		total += a[i];
	}

	printf("Total of array element values is %d\n", total);

	return 0;

}
//Total of array element values is 383
