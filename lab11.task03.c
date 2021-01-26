#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n, i, *p;
	printf("Input total number of elements(1 to 50):");
	scanf("%d",&n);
	p = (int *)calloc(n, sizeof(int));
	if(p==NULL)
	{
		printf("\n**MEMORY ALLOCATION FAILED**");
		exit(0);
	}
	for(i=0; i<n; i++)
	{
		printf("\nEnter Num %d: ",i+1);
		scanf("%d",p+i);
	}
	for(i=0; i<n; i++)
	{
		if(*p>*(p+i))
		{
			*p= *(p+i);
		}
		
	}
	printf("\n--Smallest element is %d--",*p);
	return(0);
	
}
