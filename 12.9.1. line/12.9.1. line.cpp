// 12.9.1. line.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	printf("A\n");

#line 100
	printf("B\n");
	printf("C FILE %s LINE %d\n", __FILE__, __LINE__);
#line 200

	printf("D\n");
	printf("E\n");
    return 0;
}

//A
//B
//C FILE line0.c LINE 101
//D
//E

