// 8.5.1. Parameter passing.cpp : Defines the entry point for the console application.
//
//Parameter passing

#include "stdafx.h"
#include<stdio.h>

void f1(int k);

int main()
{
	int i;
	i = 0;
	printf(" The value of i before call %d \n", i);
	f1(i);
	printf(" The value of i after call %d \n", i);
	return 0;

}

void f1(int k)
{
	k = k + 10;
}
//The value of i before call 0
//The value of i after call 0