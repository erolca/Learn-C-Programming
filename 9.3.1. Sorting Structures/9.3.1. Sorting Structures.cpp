// 9.3.1. Sorting Structures.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <string.h>

struct address {
	char name[40];
	char street[40];
	char city[20];
	char state[3];
	char zip[11];
};

int qs_struct(struct address items[], int, int);



/* A Quicksort for structures of type address. */
void quick_struct(struct address items[], int count)
{
	qs_struct(items, 0, count - 1);
}

int qs_struct(struct address items[], int left, int right)
{

	register int i, j;
	char *x;
	struct address temp;

	i = left; j = right;
	x = items[(left + right) / 2].zip;

	do {
		while ((strcmp(items[i].zip, x) < 0) && (i < right)) i++;
		while ((strcmp(items[j].zip, x) > 0) && (j > left)) j--;
		if (i <= j) {
			temp = items[i];
			items[i] = items[j];
			items[j] = temp;
			i++; j--;
		}
	} while (i <= j);

	if (left < j) qs_struct(items, left, j);
	if (i < right) qs_struct(items, i, right);

	return 0;
}

int main(void) {

	struct address addrs[4] = {
		"A. ", " 1st St", "AAAA", "Ga", "55555",
		"B. ", " 2nd Ave", "AA", "Pa", "33333",
		"C. ", " 3rd Blvd", "VVV", "gt", "99999",
		"D. ", " Fourth Dr", "EEE", "Sd", "44444"
	};

	quick_struct(addrs, 4);

	int i;
	for (i = 0; i<4; i++) {
		printf("%s \n", addrs[i].zip);
	}

}
//33333
//44444
//55555
//99999