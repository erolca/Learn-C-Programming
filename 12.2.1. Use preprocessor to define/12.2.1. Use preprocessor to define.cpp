//12.2.1.	Use preprocessor to define integer and string
//

#include "stdafx.h"
#define VAL 35
#define HELLO "HELLO"

int main()
{

		int res;

		res = VAL - 5;
		printf("res = VAL-5: res == %d\n", res);
		printf("%s", HELLO);
	}
	/*res = VAL - 5: res == 30
		HELLO*/