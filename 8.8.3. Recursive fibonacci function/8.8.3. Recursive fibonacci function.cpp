// 8.8.3. Recursive fibonacci function.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <stdio.h>

long fibonacci(long n);

int main()
{
	long result;
	long number;

	printf("Enter an integer: ");
	scanf_s("%ld", &number);

	result = fibonacci(number);

	printf("Fibonacci( %ld ) = %ld\n", number, result);

	return 0;

}

long fibonacci(long n)
{
	if (n == 0 || n == 1) {
		return n;
	}
	else {
		return fibonacci(n - 1) + fibonacci(n - 2);
	}

}
//Enter an integer : 3
//Fibonacci(3) = 2