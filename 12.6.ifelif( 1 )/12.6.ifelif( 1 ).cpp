// 12.6.ifelif( 1 ).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#define USA 1
#define EUP 1
#include <stdio.h>


#if (defined (USA))
#define currency_rate 46
#elif (defined (EUP))
#define currency_rate 100
#else
#define currency_rate 1
#endif

int main()
{
	int rs;
	rs = 10 * currency_rate;
	printf("%d\n", rs);
	return 0;
}
//460