// Live Complete Example.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>

struct Employee
{
	char ename[20];
	int ssn;
	float salary;
	struct Date
	{
		int date;
		int month;
		int year;
	}doj;
};
struct Employee emp = { "Pritesh",1000,1000.50,{ 22,6,1990 }};

int main(int argc, char *argv[])
{
	printf("\nEmployee Name   : %s", emp.ename);
	printf("\nEmployee SSN    : %d", emp.ssn);
	printf("\nEmployee Salary : %f", emp.salary);
	printf("\nEmployee DOJ    : %d/%d/%d", emp.doj.date, emp.doj.month, emp.doj.year);

	return 0;
}