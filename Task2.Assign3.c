#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int n=5;
	int i,j, a[n][n];
    int *p=&a[0][0];
	for(i=0; i<n*n; i++)
	{   
		printf("Enter element : ");
		scanf("%d",p+i);
		
	}
	printf("*YOUR ARRAY IS:*\n");
	for(i=0; i<n*n; i++)
	{
		printf(" %d, ",*(p+i));
	}
        
return 0;
}
