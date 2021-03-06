// 10.5.2. Change value of variable through pointer.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(void)
{
	long num1 = 0;
	long num2 = 0;
	long *pnum = NULL;

	pnum = &num1;
	*pnum = 2;
	++num2;
	num2 += *pnum;

	pnum = &num2;
	++*pnum;

	printf("\nnum1 = %ld  num2 = %ld  *pnum = %ld   *pnum + num2 = %ld\n",
		num1, num2, *pnum, *pnum + num2);
	return 0;
}
//num1 = 2  num2 = 4 * pnum = 4 * pnum + num2 = 8