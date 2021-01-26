#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char str[100];
	const char s[2]= " ";
	char *token;
	printf("Enter a string: ");
	gets(str);
	token = strtok(str,s);
	printf("\nModified string: ");
	while(token != NULL)
	{
		if(!strcmp(token,"stupid"))
		printf(" %s ","the great");
		else if(strcmp(token,"ugly")==0)
		printf(" %s ","vibrant");
		else if(!strcmp(token,"pathetic"))
		printf(" %s ","shiny");
		else if(!strcmp(token,"Alas"))
		printf(" %s ","Wow");
		else printf("%s ",token);
		
		token = strtok(NULL, s);
	}
	return(0);
}
