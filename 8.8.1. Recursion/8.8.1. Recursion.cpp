// 8.8.1. Recursion.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <stdio.h>

int add(int k, int m);

void main()
{
	int k, i, m;
	m = 2;
	k = 3;
	i = add(k, m);
	printf("The value of addition is %d\n", i);
}

int add(int pk, int pm)
{
	if (pm == 0)
		return(pk);
	else
		return(1 + add(pk, pm - 1));
}
//The value of addition is 5