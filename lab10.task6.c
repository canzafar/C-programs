#include<stdio.h>
struct student
{
	int rn,age;
	char name[20], ad[30];
};

void age(struct student s[], int n)
{
	int i;
	for(i=0; i<n; i++)
	{
		if(s[i].age==14)
		{
			printf("%s",&s[i].name);
			
		}printf("\n");
	}
	
} 

void even(struct student s[], int n)
{
	int i;
	for(i=0; i<n; i++)
	{
		if(s[i].rn%2==0)
		{
			printf("%s",&s[i].name);
			
		}printf("\n");
	}
	
} 

void detail(struct student s[], int n)
{
	int i;
	for(i=0; i<n; i++)
	{
		printf("\nStudent %d",i+1);
		printf("\nRoll.no: %d\nName:",s[i].rn);
		puts(s[i].name);
		printf("Age: %d\nAddress:",s[i].age);
		puts(s[i].ad);
		printf("\n");
	}
}

int main()
{
	int n;
	printf("How many students' record you want to enter?\n");
	scanf("%d",&n);
	struct student s[n];
	int i;
	for(i=0; i<n; i++)
	{
		printf("Enter roll.no of student %d: ",i+1);
		scanf("%d",&s[i].rn);
		fflush(stdin);
		printf("Enter name of student %d: ",i+1);
		gets(s[i].name);
		fflush(stdin);
		a: //for age b/w 11 to 14.
		printf("Enter age of student %d: ",i+1);
		scanf("%d",&s[i].age);
		fflush(stdin);
		if(s[i].age>=11 && s[i].age<=14)
		{}
		else
		  {
		    printf("Age must be b/w 11-14\n");
		    goto a;
		  }
		
		printf("Enter address of student %d: ",i+1);
		gets(s[i].ad);
		fflush(stdin);
	}
	
	printf("\nStudents of age 14 are:\n");
	age(s,n);
	printf("\nStudents having even roll.no:\n");
	even(s,n);
	printf("\nDetail of all students:");
	detail(s,n);
}
