// 10.2.3. Print addresses using place holders.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
//Print addresses using place holders %16lu or %p.

int main()
{
	int a[5];
	int i;
	for (i = 0; i<5; i++)
	{
		a[i] = i;
	}

	for (i = 0; i<5; i++)
	{
		printf("value in array %d and address is %16lu\n", a[i], &a[i]);
	}

	for (i = 0; i<5; i++)
	{
		printf("value in array %d and address is %p\n", a[i], &a[i]);
	}
    return 0;
}

//value in array 0 and address is      631656
//value in array 1 and address is      631660
//value in array 2 and address is      631664
//value in array 3 and address is      631668
//value in array 4 and address is      631672
//value in array 0 and address is		9a368
//value in array 1 and address is		9a36c
//value in array 2 and address is		9a370
//value in array 3 and address is		9a374
//value in array 4 and address is		9a378

