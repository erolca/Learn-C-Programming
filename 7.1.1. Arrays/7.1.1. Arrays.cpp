// 7.1.1. Arrays.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>

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
		printf("value in array %d\n", a[i]);
	}

	return 0;

}
