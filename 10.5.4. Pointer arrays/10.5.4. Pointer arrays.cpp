// 10.5.4. Pointer arrays.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	int *a[5];

	int i1 = 4, i2 = 3, i3 = 2, i4 = 1, i5 = 0;
	a[0] = &i1;
	a[1] = &i2;
	a[2] = &i3;
	a[3] = &i4;
	a[4] = &i5;

	printf("Address        Address in array         Value\n");

	
	for (int j = 0; j<5; j++)
	{
		printf("%16u           %16u                 %d\n",
			a[j], a[j], a[j]);
	}

	printf("using pointer\n");
	int *b;
	/*b = a;
	for (j = 0; j<5; j++)
	{
		printf("value of elements   %d %16lu\n", *b, *b, b);
		b++;

	}*/
    return 0;
}

