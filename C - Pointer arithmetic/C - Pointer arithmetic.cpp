// C - Pointer arithmetic.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <stdio.h>

const int MAX = 3;

int main() {

	int  var[] = { 10, 100, 200 };
	int  i, *ptr;

	/* let us have array address in pointer */
	//increment
	ptr = var;
	i = 0;

	for (i = 0; i < MAX; i++) {

		printf("Address of var[%d] = %x\n", i, ptr);
		printf("Value of var[%d] = %d\n", i, *ptr);

		/* move to the next location */
		ptr++;
	}

	//decrement

	for (i = MAX; i > 0; i--) {

		printf("Address of var[%d] = %x\n", i - 1, ptr);
		printf("Value of var[%d] = %d\n", i - 1, *ptr);

		/* move to the previous location */
		ptr--;
	}


	while (ptr <= &var[MAX - 1]) {

		printf("Address of var[%d] = %x\n", i, ptr);
		printf("Value of var[%d] = %d\n", i, *ptr);

		/* point to the previous location */
		ptr++;
		i++;
	}



	return 0;
}