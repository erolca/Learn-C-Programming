// 8.5.2. Call by reference.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include<stdio.h>

void f1(int *k);

void main()
{
	int i;
	i = 0;
	printf(" The value of i before call %d \n", i);
	f1(&i);
	printf(" The value of i after call %d \n", i);
}
void f1(int *k)
{
	*k = *k + 10;
}

//The value of i before call 0
//The value of i after call 10