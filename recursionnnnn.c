#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct
{
	int age;
	char school[20];
}info;
typedef struct
{
	int srn;
	char name[20];
	info f;
	
}person;
int main()
{
	person p;
	person *ptr;
	ptr=&p;
	int i;
	FILE *fptr;
	fptr=fopen("C:\\Student\\studentinfo.txt","w");
	for(i=0; i<2; i++)
	{
		printf("\nPerson %d\n",i+i);
		printf("Enter name: ");
		gets(ptr->name);
		fflush(stdin);
		printf("Enter srno: ");
		scanf("%d",&ptr->srn);
		fflush(stdin);
		printf("Enter age: ");
		scanf("%d",&ptr->f.age);
		fflush(stdin);
		printf("Enter school name: ");
		gets(ptr->f.school);
		fflush(stdin);
		fwrite(&p,sizeof(p),1,fptr);
	}
	fclose(fptr);
	fptr=fopen("C:\\Student\\studentinfo.txt","r");
	while(fread(&p,sizeof(p),1,fptr)>0)
	{
		printf("%d\n%s\n%d\n%s",p.srn,p.name,p.f.age,p.f.school);
	}
	fclose(fptr);
}
