// 8.9.1. va_arg, va_copy, va_start, and va_end.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <stdio.h>
#include <stdarg.h>

//Header file	stdarg.h
//Declartion	type va_arg(va_list argptr, type);
//void va_copy(va_list target, va_list source);
//void va_end(va_list argptr);
//void va_start(va_list argptr, last_parm);
//
//
//Use va_arg(), va_start(), and va_end() macros together to pass a variable number of arguments to a
//function.For example, printf().The type va_list is defined by .


double sum_series(int num, ...);

/* Variable length argument example - sum a series. */
int main(void)
{
	double d;

	d = sum_series(5, 0.5, 0.25, 0.125, 0.0625, 0.03125);

	printf("Sum of series is %f.\n", d);
	return 0;
}

double sum_series(int num, ...)
{
	double sum = 0.0, t;
	va_list argptr;

	/* initialize argptr */
	va_start(argptr, num);

	/* sum the series */
	for (; num; num--) {
		t = va_arg(argptr, double); /* get next argument */
		sum += t;
	}

	/* do orderly shutdown */
	va_end(argptr);
	return sum;
}
//Sum of series is 0.968750.