// 12.2.2. Use define to define constant.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


#include <stdio.h>

#define TRUE           1
#define FALSE          0
#define BS             '\b'
#define TAB            '\011'

int main() {

	printf("%d", TRUE);
	printf("%d", FALSE);
	printf("%c", BS);
	printf("%d", TAB);
}
//19