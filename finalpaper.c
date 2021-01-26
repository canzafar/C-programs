#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct
{
	int Dep_id;
	char Dep_name[20];
	
}department;

typedef struct
{
	int Emp_id;
	char Emp_name[30];
	int salary;
	int age;
	department d;
	
}Employee;
void func();
void replace();
int main()
{
	Employee *Eptr;
	Employee E;
	Eptr=&E;
	int n;
	FILE *fptr;
	fptr=fopen("C:\\K200423\\K200423.txt","a");
	if(fptr==NULL)
	{
		printf("FILE NOT FOUND!!");
		exit(1);
	}
	printf("How many employess data you want to enter: ");
	scanf("%d",&n);
	int i;
	for(i=0; i<n; i++)
	{
		printf("\nEmployee %d:\n",i+1);
		printf("Enter Employee ID: ");
		scanf("%d",&Eptr->Emp_id);
		fflush(stdin);
		printf("Enter Employee name: ");
		gets(Eptr->Emp_name);
		fflush(stdin);
		printf("Enter Employee age: ");
		scanf("%d",&Eptr->age);
		fflush(stdin);
		printf("Enter department name: ");
		gets(Eptr->d.Dep_name);
		fflush(stdin);
		printf("Enter department ID: ");
		scanf("%d",&Eptr->d.Dep_id);
		fflush(stdin);
		printf("Enter salary: ");
		scanf("%d",&Eptr->salary);
		fflush(stdin);
		
		fwrite(Eptr, sizeof(Employee), 1, fptr);
	}
	fclose(fptr);    
	fptr=fopen("C:\\K200423\\K200423.txt","r");
	if(fptr==NULL)
	{
		printf("FILE NOT OPENED!!");
		exit(1);
	}
	while(fread(Eptr, sizeof(Employee), 1, fptr)>0)
	{
		printf("%d\n %s\n %d\n %s\n %d\n %d\n",E.Emp_id,E.Emp_name,E.age,E.d.Dep_name,E.d.Dep_id,E.salary);
	}
	fclose(fptr); 
	func();
	replace();
}

void func()
{
	Employee Emp;
	printf("Enter first department ID: ");
	int d1;
	scanf("%d",&d1);  //department Y
	fflush(stdin);
	printf("Enter second department ID: ");
	int d2;
	scanf("%d",&d2);  //department X
	//let HR be department EE and CS be department X
	FILE *fptr2;	
	fptr2= fopen("C:\\K200423\\K200423.txt","r");
	if(fptr2==NULL)
	{
		printf("FILE NOT OPENED(2)!!");
		exit(1);
	}
	int sum=0,c1=0;
	int highest=0, min, max=0;
	while(fread(&Emp, sizeof(Emp), 1, fptr2)>0)
	{
		if(Emp.d.Dep_id == d1)
		{
			sum=sum+ Emp.salary;
			c1++;
			if(Emp.salary>max)
			{
				max=Emp.salary;
			}
		}
		if(Emp.d.Dep_id == d2)
		{
			if(Emp.salary>highest)
			{
				highest=Emp.salary;
			}
			
		}
	}
	
	float avg;
	avg = sum/c1;
	printf("AVG: %.2f",avg);
	fclose(fptr2);
	fptr2 = fopen("C:\\K200423\\K200423.txt","r");
	if(fptr2==NULL)
	{
		printf("FILE NOT OPENED(2)!!");
		exit(1);
	}
	min=max;
	while(fread(&Emp, sizeof(Emp), 1, fptr2)>0)
	{
		if(Emp.d.Dep_id == d1)
		{
			if(Emp.salary<min)
			{
				min=Emp.salary;
			}
		}
	}
	printf("\nhighest of %d department: %d\nmin of %d department: %d\nmax of %d department: %d\n",d1,highest,d2,min,d2,max);
	fclose(fptr2);
	fptr2 = fopen("C:\\K200423\\K200423.txt","r");
	if(fptr2==NULL)
	{
		printf("FILE NOT OPENED(2)!!");
		exit(1);
	}
	printf("Department %d employees having avg salary greater than maximum salary of department %d are:\n\n",d1,d2);
	while(fread(&Emp, sizeof(Emp), 1, fptr2)>0)
	{
		if(Emp.d.Dep_id==d1)
		{
			if(Emp.salary>highest && Emp.salary>min && Emp.salary<max)
			{
				printf("%d\n %s\n %d\n %s\n %d\n %d\n\n",Emp.Emp_id,Emp.Emp_name,Emp.age,Emp.d.Dep_name,Emp.d.Dep_id,Emp.salary);
			}
		}
	}
	fclose(fptr2);			
}

void replace()
{
	Employee E;
	int i;
	char name[30];
	FILE *fptr3;
	fptr3=fopen("C:\\K200423\\K200423.txt","w");
	while(fread(&E, sizeof(E),1,fptr3)>0)
	{
		for(i=0; i<strlen(E.Emp_name); i++)
		{
			if(E.Emp_name[i]==' ')
			{
				name[i]='-';
			}
			else
			{
				name[i]=E.Emp_name[i];
			}
			strcpy(E.Emp_name,name);
			fwrite(&E, sizeof(E), 1, fptr3);
		}
		//remove;
		//rename;
		
	}
	fclose(fptr3);
	fptr3=fopen("C:\\K200423\\K200423.txt","r");
	if(fptr3==NULL)
	{
		printf("FILE NOT OPENED!!");
		exit(1);
	}
	while(fread(&E, sizeof(E), 1, fptr3)>0)
	{
		printf(" %s\n ",E.Emp_name);
	}
	fclose(fptr3); 
}

