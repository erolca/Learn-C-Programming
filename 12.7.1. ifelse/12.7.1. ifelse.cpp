// 12.7.1. ifelse.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#define USA 1
#define EUP 1

#include <stdio.h>


#if (defined (USA))
#define currency_rate 46
#else
#define currency_rate 100           
#endif                         


int main()
{
	int rs;
	rs = 10 * currency_rate;
	printf("%d\n", rs);
    return 0;
}
//460
