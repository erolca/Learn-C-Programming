// 12.8.1. ifndef.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>

#ifndef USA            
#define currency_rate 100    
#endif               

#ifndef EUP                 
#define currency_rate 46
#endif  

int main()
{
	int rs;
	rs = 10 * currency_rate;
	printf("%d\n", rs);
    return 0;
}
//460
