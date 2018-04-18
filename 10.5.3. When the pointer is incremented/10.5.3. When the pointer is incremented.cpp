// 10.5.3. When the pointer is incremented.cpp : Defines the entry point for the console application.
//When the pointer is incremented by an increment operator, it is always right incremented.

#include "stdafx.h"


int main()
{
	int a[5];
	int i;
	for (i = 0; i<5; i++) {
		a[i] = i;
	}

	int *b;
	b = a;
	for (i = 0; i<5; i++)
	{
		printf("value in array %d and address is %16lu\n", *b, b);
		b++;
	}
    return 0;
}

//value in array 0 and address is       1066531448
//value in array 1 and address is       1066531452
//value in array 2 and address is       1066531456
//value in array 3 and address is       1066531460
//value in array 4 and address is       1066531464

