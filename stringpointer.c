#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void vowels(char **ptr)
{
	char *token;
	char s[2]= " ";
	token = strtok(*ptr, s);
	int count=0,i;
	while(token != NULL)
	{
		for(i=0; i<strlen(token); i++)
		{
			if(token[i]=='a' || token[i]=='A' || token[i]=='e' || token[i]=='E' ||token[i]=='i' || token[i]=='I' ||token[i]=='o' || token[i]=='O' ||token[i]=='u' || token[i]=='U')
			{
				count++;
			}
		}
		printf("\nword %s contains %d vowels.",token,count);
		count=0;
		token = strtok(NULL,s);
	}
	
} 
int main()
{
	char *ptr;
	int i, n=1;
	printf("Enter a string: ");
	ptr=(char *)malloc(n*sizeof(ptr));
	if(ptr==NULL)
	{
		printf("Memory allocation failed!!");
		exit(1);
	}
	for(i=0; ; i++)
	{
		scanf("%c",&ptr[i]);
		if(ptr[i]=='\n')
		{
			break;
		}
	ptr=(char *)realloc(ptr, n++);
	}
	ptr[i]='\0';
	//printf("%d",n);
	vowels(&ptr);
}
