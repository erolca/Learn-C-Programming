// 8.8.2. Calculate factorials using recursion.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <stdio.h>

unsigned long factorial(unsigned long);

int main(void)
{
	unsigned long number = 0L;
	printf("\nEnter an integer value: ");
	scanf_s(" %lu", &number);
	printf("\nThe factorial of %lu is %lu\n", number, factorial(number));
	return 0;
}

unsigned long factorial(unsigned long n)
{
	if (n < 2L)
		return n;
	else
		return n * factorial(n - 1L);
}