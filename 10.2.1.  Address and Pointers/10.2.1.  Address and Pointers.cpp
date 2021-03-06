// 10.2.1.  Address and Pointers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

//Address

	//Each variable has two attributes : address and value.
	//The address is the location in memory.
	//In that locaton, the value is stored.
	//During the lifetime of the variable, the address is not changed but the value may change.
	//Pointers
//Pointers
	//A pointer is a variable whose value is an address.
	//A pointer to an integer is a variable that can store the address of that integer.
int main()
{
	int i;
	int * ia;
	i = 10;
	ia = &i;

	printf(" The address of i is %8u \n", ia);
	printf(" The value at that location is %d\n", i);
	printf(" The value at that location is %d\n", *ia);
	*ia = 50;
	printf("The value of i is %d\n", i);

    return 0;
}

//The address of i is   631672
//The value at that location is 10
//The value at that location is 10
//The value of i is 50

