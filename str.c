#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void space(char **ptr,int n)
{
	int i,j;
	for(i=0; i<n; i++)
	{
		
		if(*(*ptr+i)==' ' && *(*ptr+i+1)==' ')
		{ 
			i--;
			for(j=i+1; j<n; j++)
			{
				*(*ptr+j)= *(*ptr + j + 1);
			}
			n--;
		}
	}
	ptr='\0';
}
int main()
{
	char *txt;
	int n=1,i;
	printf("Enter a string:\n");
	txt=(char *)malloc(n*sizeof(txt));
	if(txt==NULL)
	{
		printf("Memory allocation failed!!");
		exit(0);
	}
	for(i=0; ; i++)
	{
		scanf("%c",&txt[i]);
		if(txt[i]=='\n')
		{
			break;	
		}
	
		
		txt=(char *)realloc(txt,n++);
	}
	txt[i]='\0';
	printf("Before removing spaces:\n");
	puts(txt);
	space(&txt,n);
	printf("\nAfter removing spaces:\n");
	puts(txt);
}

