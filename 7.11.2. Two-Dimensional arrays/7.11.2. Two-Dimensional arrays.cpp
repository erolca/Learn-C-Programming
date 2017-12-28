
//	7.11.2.	Two-Dimensional arrays: pointer of pointer for its element

#include "stdafx.h"
#include <stdio.h>

int main(void)
{
	char board[3][3] = {
		{ '1','2','3' },
	{ '4','5','6' },
	{ '7','8','9' }
	};

	printf("value of board[0][0] : %c\n", board[0][0]);
	printf("value of *board[0]   : %c\n", *board[0]);
	printf("value of **board     : %c\n", **board);
	return 0;
}
//value of board[0][0] : 1
//value of *board[0] : 1
//value of **board : 1