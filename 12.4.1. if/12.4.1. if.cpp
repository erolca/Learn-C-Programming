// 12.4.1. if.cpp : Defines the entry point for the console application.
//To define more generalized conditions.
//Multiple conditions are connected by relational operators such as AND(&&), OR(|| ).

#include "stdafx.h"

// #define EUP 1
#define USA 1

#include <stdio.h>

#if ((1>0) && defined USA)
#define currency_rate 46
#endif

#if (defined (EUP))
#define currency_rate 100
#endif

int main()
{
	int rs;
	rs = 10 * currency_rate;
	printf("%d\n", rs);
}
//460