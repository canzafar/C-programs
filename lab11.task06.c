#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
	char *ptr;
	int n;
	printf("Enter length of string: ");
	scanf("%d",&n);
	fflush(stdin);
	ptr=(char*)malloc(n*sizeof(char));
	printf("\nEnter a string: ");
	gets(ptr);
	printf("\nYour string is:\n%s",ptr);
	free(ptr);
	return(0);
}
