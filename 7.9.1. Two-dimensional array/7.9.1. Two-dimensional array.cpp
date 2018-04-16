// 7.9.1. Two-dimensional array.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	int a[3][2];
	int i, j;
	for (i = 0; i<3; i++) {
		for (j = 0; j<2; j++) {
			a[i][j] = 2;
		}
	}

	for (i = 0; i<3; i++) {
		for (j = 0; j<2; j++) {
			printf("value in array %d\n", a[i][j]);
		}
	}

	for (i = 0; i<3; i++) {
		for (j = 0; j<2; j++) {
			printf("value in array %d and address is %8u\n", a[i][j], &a[i][j]);
		}
	}

	return 0;
}
//value in array 2
//value in array 2
//value in array 2
//value in array 2
//value in array 2
//value in array 2
//value in array 2 and address is   631648
//value in array 2 and address is   631652
//value in array 2 and address is   631656
//value in array 2 and address is   631660
//value in array 2 and address is   631664
//value in array 2 and address is   631668