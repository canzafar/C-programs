#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fptr1, *fptr2;
	char fname[100], ch;
	printf("Enter the name of file name to encrypt: ");
	gets(fname);
	fptr1 = fopen(fname, "r");
	if(fptr1==NULL)
	{
		printf("***FILE NOT FOUND!!***\n\t***Error!!!***");
		exit(1);
	}
	fptr2 = fopen("C:\\myfiles\\TEST.txt", "w");
	if(fptr2==NULL)
	{
		printf("Error in creating file TEST.txt!!");
		exit(1);
	}
	while(1)
	{
		ch=fgetc(fptr1);
		if(ch==EOF)
		{
			break;
		}
		else
		{
			ch=ch+100;
			fputc(ch,fptr2);
		}
	}
	fclose(fptr1);
	fclose(fptr2);
	fptr1=fopen(fname, "w");
	if(fptr1==NULL)
	{
		printf("Error!!");
		exit(1);
	}
	fptr2=fopen("C:\\myfiles\\TEST.txt","r");
	if(fptr2==NULL)
	{
		printf("Error!!");
		exit(1);
	}
	while(1)
	{
		ch=fgetc(fptr2);
		if(ch==EOF)
		{
			break;
		}
		else
		{
			fputc(ch,fptr1);
		}
	}
	printf("\nFile %s successfully encrypted..!!",fname);
	fclose(fptr1);
	fclose(fptr2);
	return(0);
}
