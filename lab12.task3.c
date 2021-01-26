#include<stdio.h>
#include<stdlib.h>
int main()
{
	int line=0;
	char a;
	FILE *fptr;
	fptr = fopen("C:\\mytextfile\\text.txt", "r");
	if(fptr==NULL)
	{
		printf("Error!!");
		exit(1);
	}
	a=fgetc(fptr);
	while(a!=EOF)
	{
		if(a=='\n')
		{
			line++;
		}
		a=fgetc(fptr);
	}
	if(line>0)
	{
		printf("NUMBER OF LINES IN YOUR FILE 'text.txt' is %d.",line);
	}
	else
	{
		printf("File is empty");
	}
	fclose(fptr);
	return(0);
}
