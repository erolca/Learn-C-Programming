// 7.6.2. Binary search of an array.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#define SIZE 15
#define _CRT_SECURE_NO_WARNINGS

int binarySearch(const int b[], int searchKey, int low, int high);

int main() {
	int a[SIZE];
	int i;
	int key = 10;
	int result = -1;

	for (i = 0; i < SIZE; i++) {
		a[i] = 2 * i;
	}








	result = binarySearch(a, key, 0, SIZE - 1);

	if (result != -1) {
		printf("\n%d found in array element %d\n", key, result);
	}
	else {
		printf("\n%d not found\n", key);
	}


	_gettch();
	return 0;

}

int binarySearch(const int b[], int searchKey, int low, int high)
{
	int middle;

	while (low <= high) {
		middle = (low + high) / 2;

		if (searchKey == b[middle]) {
			return middle;
		}
		else if (searchKey < b[middle]) {
			high = middle - 1;
		}
		else {
			low = middle + 1;
		}
	}
	return -1;

}
//10 found in array element 5