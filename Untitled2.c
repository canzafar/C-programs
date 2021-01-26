#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void greater(float *ptr, int n)
{
	int i;
	float a[n];
	for(i=0; i<n; i++)
	{
		if(*(ptr+i) > 100.00)
		{
			printf("%f\n",*(ptr+i));
		}
	}
}
int main()
{
	int n;
	printf("Enter size of array: ");
	scanf("%d",&n);
	fflush(stdin);
	float array[n];
	printf("Enter elements of array:\n");
	int i;
	for(i=0; i<n; i++)
	{
		scanf("%f",&array[i]);
		fflush(stdin);
	}
	float *ptr;
	ptr= &array[0];
	greater(ptr,n);
}
