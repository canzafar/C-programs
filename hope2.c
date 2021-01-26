#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int n,i,j,l, count=0;
	printf("Enter number of integers: ");
	scanf("%d",&n);
	int arr[n];
	for(i=0; i<n; i++)
	{
		printf("Enter number %d: ",i+1);
		scanf("%d",&arr[i]);
		fflush(stdin);
	}
	int low =arr[0];
	for(i=1; i<n; i++)
	{
		if(low>arr[i])
		{
			low=arr[i];
		}
	}
	while(1)
	{
		a:
		for(i=0; i<n; i++)
		{
			if(arr[i] % low == 0)
			count++;
		}
		if(count==n)
		{
			printf("\nGCD found: %d",low);
			break;
		}
		if(low>=2)
		{
			printf("\nGCD not found");
			break;
		}
		low--;
		count=0;
	}
		
}
