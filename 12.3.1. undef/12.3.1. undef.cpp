// 12.3.1. undef.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#define VAL 40;     
#undef  VAL          
#define VAL 50 

int main()
{
	printf("%d\n", VAL);
    return 0;
}

