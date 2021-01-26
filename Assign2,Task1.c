#include<stdio.h>
int even(int a[], int n, int count, int i);
int main()
{
	int j, n, k;
	printf("Enter size of array: ");
	scanf("%d",&n);
	int arr[n];
	for(j=0; j<n; j++)
	{
		printf("Enter element %d: ",j+1);
		scanf("%d",&arr[j]);
	}
	k=even(arr,n,0,0);
	printf("Number of even integers is %d",k);
	
}

int even(int a[], int n, int count, int i)
{
	if(i==n)
	{
		return(count);
	}
	else
	{
		if(a[i]%2==0)
		{
			count++;
			i++;
			even(a, n, count, i);
		}
		else
		{
			i++;
			even(a,n,count,i);
		}
	}
}
