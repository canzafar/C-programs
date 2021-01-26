#include<stdio.h>
#include<stdlib.h>
typedef struct
{
	int st;
	char hno[5], area[10], city[10], country[10];
}Address;

typedef struct
{
	char name[20], desig[20];
	int ID, age;
	float sal;
	Address ad;
}EMPLOYEE;

int main()
{
	int n;
	printf("How many employees address you want to enter: ");
	scanf("%d",&n);
	EMPLOYEE E[n];
	fflush(stdin);
	int i;
	for(i=0; i<n; i++)
	{
		printf("Enter ID of Employee %d: ",i+1);
		scanf("%d",& E[i].ID);
		fflush(stdin);
		printf("Enter name of Employee %d: ",i+1);
		gets(E[i].name);
		fflush(stdin);
		printf("Enter designation of Employee %d: ",i+1);
		gets(E[i].desig);
		fflush(stdin);
		printf("Enter age of Employee %d: ",i+1);
		scanf("%d",& E[i].age);
		fflush(stdin);
		printf("Enter salary of Employee %d: ",i+1);
		scanf("%f",& E[i].sal);
		fflush(stdin);
		printf("Enter Address of Employee %d (house# st.# area city country): ",i+1);
		scanf("%s %d %s %s %s",&E[i].ad.hno, &E[i].ad.st, &E[i].ad.area, &E[i].ad.city, &E[i].ad.country);
		fflush(stdin);
	}
	printf("\n\n***RECORD OF EMPLOYEES***\n\n");
	for(i=0; i<n; i++)
	{
		printf("\n\nEMPLOYEE %d\n\n",i+1);
		printf("ID: %d\n",E[i].ID);
		printf("Name: %s\n",E[i].name);
		printf("Designation: %s\n",E[i].desig);
		printf("Age: %d\n",E[i].age);
		printf("Salary: %.3f\n",E[i].sal);
		printf("Address: %s %d %s %s %s\n",E[i].ad.hno, E[i].ad.st, E[i].ad.area, E[i].ad.city, E[i].ad.country);
	}
}


