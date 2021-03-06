// 11.1.1. Memory Allocation.cpp : Defines the entry point for the console application.
// The functions for allocation of memory: malloc, relloc, and calloc.
// The functions return the pointers to void, which can be typecast to any data type.
// These functions take the input as the size of memory requirement.

#include "stdafx.h"

#include <stdio.h>
#include <malloc.h>

void main() {

	int *base;
	int i, j;
	int cnt = 0;
	int sum = 0;
	printf("how many integers you have to store \n");
	scanf_s("%d", &cnt);
	base = (int *)malloc(cnt * sizeof(int));
	printf("the base of allocation is %16lu \n", base);
	if (!base)
		printf("unable to allocate size \n");
	else {
		for (j = 0; j<cnt; j++)
			*(base + j) = 5;
	}
	sum = 0;
	for (j = 0; j<cnt; j++)
		sum = sum + *(base + j);
	printf("total sum is %d\n", sum);
	free(base);
	printf("the base of allocation is %16lu \n", base);
	base = (int *)malloc(cnt * sizeof(int));
	printf("the base of allocation is %16lu \n", base);
	base = (int *)malloc(cnt * sizeof(int));
	printf("the base of allocation is %16lu \n", base);
	base = (int *)calloc(10, 2);
	printf("the base of allocation is %16lu \n", base);
}

//how many integers you have to store
//1234
//the base of allocation is          4016352
//total sum is 6170
//the base of allocation is          4016352
//the base of allocation is          4016352
//the base of allocation is          4021296
//the base of allocation is          4007120