#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int respc(char **ptr2, int n);
int main()
{
	char *ptr;
	int i,n=1;
	printf("Enter a string:\n");
	ptr = (char *)malloc(n*sizeof(ptr));
	if(ptr==NULL)
	{
		printf("Memory allocation failed!!");
		exit(0);
	}
	for(i=0; ; i++)
	{
		scanf("%c",&ptr[i]);
		if(ptr[i]=='\n')
		{
			break;
		}
		ptr=(char*)realloc(ptr,n++);
	}
	ptr[i]='\0';
	printf("Before removing spaces: ");
	puts(ptr);
	int spaces;
	spaces=respc(&ptr,n);
	printf("\nAfter removing %d spaces:",spaces);
	puts(ptr);
	/*while(string[i] != '\0')
	{
		if(!(string[i]== ' ' && string[i+1] == ' '))
		{
			string2[j]= string[i];
			j++;
		}
		i++;
	}
	string2[j]='\0';
	printf("\nAfter removing extra spaces:\n");
	printf("%s",string2);*/
	
}
int respc(char **ptr2, int n)
{
	int i,j,count=0;
	for(i=0; i<n; i++)
	{
		if(*(*ptr2+i)==' ' && *(*ptr2+i+1)==' ')
		{
			i--;
			count ++;
			for(j=i+1; j<n; j++)
			{
				*(*ptr2 + j)= *(*ptr2 +j+1 );
			}
			n--;
		}
	}
	ptr2='\0';
	return(count);
}
