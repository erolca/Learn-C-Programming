// 8.1.1. Function.cpp : Defines the entry point for the console application.
//Functions provides modularity to the software.

#include "stdafx.h"
#include <stdio.h>

int add(int x, int y) {
	int z;
	z = x + y;
	return (z);
}
int main()
{
	int i, j, k;
	i = 10;
	j = 20;
	k = add(i, j);
	printf("The value of k is %d\n", k);
	return 0;
}
//The value of k is 30