#include<stdio.h>
typedef struct
{
	int Eno; //serial number
	char Ename[20]; //name of employee
	float Esal; //salary of employee
	
}Employees;

int main()
{
	Employees E;
	printf("The size of struct Employees is %d",sizeof(E));
}
