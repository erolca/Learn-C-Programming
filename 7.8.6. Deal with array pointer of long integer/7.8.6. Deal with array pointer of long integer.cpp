// 7.8.6. Deal with array pointer of long integer.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <stdio.h>

int main(void)
{
	long multiple[] = { 15L, 25L, 35L, 45L };
	long * p = multiple;
	int i;
	int size=sizeof(multiple[0]);
	int sizeArray = sizeof(multiple);
	for (i = 0; i<sizeof(multiple[0]) / sizeof(multiple[0]); i++)
		printf("\naddress p+%d (&multiple[%d]): %d   *(p+%d) value: %d", i, i, p + i, i, *(p + i));

	printf("\n    Type long occupies: %d bytes\n", sizeof(long));
	return 0;
}
//address p + 0 (&multiple[0]) : 631656 * (p + 0) value : 15
//address p + 1 (&multiple[1]) : 631660 * (p + 1) value : 25
//address p + 2 (&multiple[2]) : 631664 * (p + 2) value : 35
//address p + 3 (&multiple[3]) : 631668 * (p + 3) value : 45
//Type long occupies : 4 bytes