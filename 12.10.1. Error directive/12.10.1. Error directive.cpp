// 12.10.1. Error directive.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
//#define USA 1
//#define EUP 1
#include <stdio.h>

#if (!defined (USA) || !defined (EUP))
#error ERROR: NO_CURRENCY rate is specified.
#endif

int main()
{
	int rs;
	rs = 10;
	printf("%d\n", rs);
    return 0;
}

