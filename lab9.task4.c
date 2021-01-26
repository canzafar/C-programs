#include<stdio.h>
#include<stdlib.h>
void minimum(int arr[], int len, int *min)
{
	*min=arr[0];
	int i;
	for(i=0; i<len; i++)
	{
		if(arr[i] < *min)
		{
			*min=arr[i];
		}
	}
}
void minimum(int arr[], int len, int *min);
int main()
{
	int i,n;
	printf("Enter size of array: ");
	scanf("%d",&n);
	int a[n];
	int min;
	printf("Enter %d numbers in the array:\n",n);
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	int len= sizeof(a)/sizeof(a[0]);
	minimum(a, len, &min);
	printf("smallest value of the array is %d", min);
	return(0);
	
}
