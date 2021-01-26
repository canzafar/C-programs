#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,n, marks;
	float *ptr, hi=0.0, hi2=0.0, sum=0.0, avg;
	printf("How many students marks you want to enter?\n");
	scanf("%d",&n);
	ptr = (float *)calloc(n, sizeof(float));
	if(ptr==NULL)
	{
		printf("\n**MEMORY ALLOCATION FAILED**");
		exit(0);
	}
	for(i=0; i<n; i++)
	{
		printf("\nEnter marks of student %d: ",i+1);
		scanf("%f",ptr[i]);
	}
	for(i=0; i<n; i++)
	{
		sum = sum + *ptr[i];
	}
	avg = sum/n;
	
	for(i=0; i<n; i++)
	{
		if(hi< *ptr[i])
		{
			hi= *ptr[i];
		}
		
	}
	for(i=0; i<n; i++)
	{
		if(hi2< *ptr[i] && hi2<hi)
		{
			hi2= *ptr[i];
		}
	}
	
	
	printf("**2nd highest: %.2f**",hi2);
	printf("\n**Average: %.3f**",avg);
}
