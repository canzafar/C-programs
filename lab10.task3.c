#include<stdio.h>
typedef struct
{
	int Eno; //serial number
	char Ename[20]; //name of employee
	float Esal; //salary of employee
	
}Employees;

float average(float sum, int n)
{
	float b=sum/ n;
	return(b);
}

int main()
{
	Employees E;
	int i;
	float sum=0.0;
	float a;
	printf("How many employees salary you want to enter?\n");
	scanf("%d",&E.Eno);
	fflush(stdin);
	for(i=0; i<E.Eno; i++)
	{
		printf("Enter name of employee %d:",i+1);
		gets(E.Ename);
		fflush(stdin);
		printf("Enter salary of employee %s: ",E.Ename);
		scanf("%f",&E.Esal);
		fflush(stdin);
		sum = sum + E.Esal;
	}
	
	int n= E.Eno;
	a=average(sum, n);
	printf("\nAverage salary of %d employees is %.3f",E.Eno,a);
	
	
}
