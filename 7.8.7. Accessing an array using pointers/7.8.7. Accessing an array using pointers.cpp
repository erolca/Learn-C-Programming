// 7.8.7. Accessing an array using pointers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>

int main(void) {
	int a[5];
	int i;
	for (i = 0; i<5; i++) {
		a[i] = i;
	}

	int *b;

	b = a;
	for (i = 0; i<5; i++) {
		printf("value in array %d and address is %16lu\n", *b, b);
		b = b + 2;
	}
	return 0;
}
//value in array 0 and address is          9436164
//value in array 2 and address is          9436172
//value in array 4 and address is          9436180
//value in array 1171580679 and address is          9436188
//value in array 11018302 and address is          9436196