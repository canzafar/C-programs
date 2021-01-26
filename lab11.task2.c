#include<stdio.h>
typedef struct 
{
	char name[20];
	int rollno, t1, t2, t3;
}STUDENT;

int main()
{
	int n,i;
	int *ptr1, *ptr2, *ptr3;
	printf("How many students' record you want to enter?: ");
	scanf("%d",&n);
	STUDENT S[n];
	for(i=0; i<n; i++)
	{
		printf("Enter roll no of student %d: ",i+1);
		scanf("%d",&S[i].rollno);
		fflush(stdin);
		printf("Enter name of student %d: ",i+1);
		gets(S[i].name);
		fflush(stdin);
		printf("Enter test.1 marks of student %d: ",i+1);
		scanf("%d",&S[i].t1);
		ptr1= &S[i].t1;
		*ptr1+=3;
		fflush(stdin);
		printf("Enter test.2 marks of student %d: ",i+1);
		scanf("%d",&S[i].t2);
		ptr2= &S[i].t2;
		*ptr2+=10;
		fflush(stdin);
		printf("Enter test.3 marks of student %d: ",i+1);
		scanf("%d",&S[i].t3);
		ptr3= &S[i].t3;
		*ptr3+=8;
		fflush(stdin);
		
	}
	printf("\n\n***STUDENTS RECORD***\n\n");
	for(i=0; i<n; i++)
	{
		printf("\n--RECORD OF STUDENT %d--\n",i+1);
		printf("Name: %s\n",S[i].name);
		printf("Roll no: %d\n",S[i].rollno);
		printf("Test 1 marks: %d\n",S[i].t1);
		printf("Test 2 marks: %d\n",S[i].t2);
		printf("Test 3 marks: %d\n",S[i].t3);
	    printf("Total sessional marks: %d\n",(S[i].t1 + S[i].t2 + S[i].t3));
	}
}
