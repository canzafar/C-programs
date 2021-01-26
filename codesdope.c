#include<stdio.h>
int* even(int *x, int n);
int main()
{
	int n,i;
	int *k;
	printf("Enter size of array\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter %d numbers\n");
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	k = even(a,n);
	printf("address of first even number of the array is %u\n",k);
	printf("the first even number is %d",*k);
}
int* even(int *x, int n)
{
    int i;
	for(i=0; i<n; i++)
	{
		if(x[i]%2==0)
		return(x);
		
	}
}
