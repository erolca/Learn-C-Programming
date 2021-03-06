// 7.8.2.get address of an array.cpp : Defines the entry point for the console application.
//	7.8.2.	Arrays and pointers: get address of an array

#include "stdafx.h"
#include <stdio.h>
char i;
int main(void)
{
	char multiple[] = "My string";
	

	char *p = &multiple[0];
	printf("\nThe address of the first array element (p)				: %p", p);
	printf("\nThe address of the first array element (&multiple[0])		: %p", &multiple[0]);
	printf("\nThe address of the first array element (multiple[0])		: %p", multiple);
	printf("\nThe address of the first array element (&multiple)		: %p", &multiple);

	p = multiple;
	printf("\nThe address obtained from the array name					: %p\n", p);
	printf("\nThe address obtained from the array name					: %p\n", i);

	return 0;
}
//The address of the first array element  : 9a372
//The address obtained from the array name : 9a372