#include<stdio.h>
#include<stdlib.h>
int main()
{
	char name[15];
	int marks, i;
	FILE * fptr;
	fptr = (fopen("C:\\Student\\studentinfo.txt", "w"));
	int n;
	printf("How many students information you want to store?\n");
	scanf("%d",&n);
	fflush(stdin);
	for(i=0; i<n; i++)
	{
		printf("\nStudent %d:\n\nEnter name: ",i+1);
		gets(name);
		fflush(stdin);
		printf("Enter marks: ");
		scanf("%d",&marks);
		fflush(stdin);
		
		fprintf(fptr, "\nName: %s\nMarks: %d\n",name,marks);
		
	}
	fclose(fptr);
	fptr = fopen("C:\\Student\\studentinfo.txt", "r");
	if(fptr==NULL)
	{
		printf("FILE NOT FOUND!!");
		exit(1);
	}
	char c;
	c=getc(fptr);
	while(c!=EOF)
	{
		printf("%c",c);
		c=getc(fptr);
	}
	
	fclose(fptr);
	return(0);
	
}
