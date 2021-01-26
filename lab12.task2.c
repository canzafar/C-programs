#include<stdio.h>
#include<stdlib.h>
int main()
{
	char sent[30];
	FILE *fptr;
	fptr = fopen("C:\\sentence\\sentence.txt","w");
	printf("Enter a sentence: ");
	gets(sent);
	fflush(stdin);
	fprintf(fptr, "%s", sent);
	fclose(fptr);
	return(0);
}
