#include<stdio.h>
#include<stdlib.h>
typedef struct
{
	char name[10], gender[8];
	int age;
}General;

int main()
{
	int n,i;
	printf("How many persons info you want to store?\n");
	scanf("%d",&n);
	fflush(stdin);
	General info[n];
	FILE * fptr;
	fptr = fopen("C:\\mytextfile\\text.txt","w");
	for(i=0; i<n; i++)
	{
	    printf("Person %d:\n",i+1);
	    printf("Enter name: ");
	    gets(info[i].name);
	    fflush(stdin);
	    printf("Enter age: ");
	    scanf("%d",&info[i].age);
	    fflush(stdin);
	    printf("Enter gender: ");
	    gets(info[i].gender);
	    fflush(stdin);
	    fwrite(&info, sizeof(General), 1, fptr);
    }
    fclose(fptr);
    fptr = fopen("C:\\mytextfile\\text.txt", "r");
    if(fptr==NULL)
	{
		printf("FILE NOT FOUND!!");
		exit(1);
	}
	
	fread(&info, sizeof(General), 1, fptr);
	for(i=0; i<n; i++)
	{   
	    printf("\n\n**PERSON %d:**\n\n",i+1);
	    printf("Name : %s\n",info[i].name);
	    printf("Age : %d\n",info[i].age);
	    printf("Gender : %s\n",info[i].gender);
    }
	fclose(fptr);
	return(0);
	
}
