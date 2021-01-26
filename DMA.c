#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
int main()
{
	int n;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	int i, *ptr, sum=0;
	ptr = (int *)calloc(n,sizeof(int));
	if(ptr==NULL)
	{
		printf("\nERROR!!\nMemory not allocated!!");
		exit(0);
	}
	for(i=0; i<n; i++)
	{
		printf("Enter element %d: ",i+1);
		scanf("%d",(ptr+i));
		//sum=sum+ *(ptr+i);
	}
	//printf("\nThe sum is %d",sum);
	printf("Enter new size of array: ");
	int newsize;
	scanf("%d",&newsize);
	ptr = (int *)realloc(ptr, (newsize * sizeof(int)));
	for(i=n; i<newsize; i++)
	{
		scanf("%d",(ptr+i));
	}
	printf("\nArray elements are: \n");
	for(i=0; i<newsize; i++)
	{
		printf(" %d ",*(ptr+i));
	}
	free(ptr);
}
