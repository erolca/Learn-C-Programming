// 8.7.2. Return value as pointer.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <stdio.h>

long *myFunction(long* pPay);

int main(void)
{
	long your_pay = 30000L;
	long *pold_pay = &your_pay;
	long *pnew_pay = NULL;

	pnew_pay = myFunction(pold_pay);
	printf("\n Old pay = $%ld", *pold_pay);
	printf("\n your_pay pay = $%ld", your_pay); //.....same adress
	printf("\n New pay = $%ld\n", *pnew_pay);
	return 0;
}

long *myFunction(long *pPay)
{
	*pPay += 10000L;
	return pPay;
}
//Old pay = $40000   New pay = $40000