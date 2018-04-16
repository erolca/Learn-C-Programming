
//7.11.3.	Get the values in a two-dimensional array through array pointer

#include "stdafx.h"
#include <stdio.h>

int main(void)
{
	char board[3][3] = {
		{ '1','2','3' },
	{ '4','5','6' },
	{ '7','8','9' }
	};


	int i;
	for (i = 0; i < 9; i++)
		printf(" board: %c\n", *(*board + i));
	return 0;
}
//board: 1
//	board : 2
//	board : 3
//	board : 4
//	board : 5
//	board : 6
//	board : 7
//	board : 8
//	board : 9