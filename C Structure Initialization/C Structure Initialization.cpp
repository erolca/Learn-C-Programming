// C Structure Initialization.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
struct student
{
	char name[20];
	int roll;
	float marks;
}std1 = { "Pritesh",67,78.3 };

int main()
{
	printf("student name :%s\n",std1.name);
	printf("student roll :%d\n", std1.roll);
	printf("student roll :%f\n", std1.marks);
    return 0;
}

