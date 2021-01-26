#include<stdio.h>
#include<stdlib.h>
void sort(int *ptr, int n)
{
	int i,j,temp;
	for(i=1; i<=n; i++)
	{
		for(j=0; j<n-i; j++)
		{
			if(*(ptr + j)> *(ptr +j +1))
			{
				temp = *(ptr+j);
				*(ptr+j)=*(ptr+j+1);
				*(ptr+j+1)=temp;
			}
		}
	}
}
int main()
{
	printf("Enter size: ");
	int n,i;
	scanf("%d",&n);
	printf("\nEnter elements:\n");
	int a[n];
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	int *ptr;
	ptr = &a[0];
	sort(ptr, n);
	for(i=0; i<n; i++)
	{
		printf(" %d ",a[i]);
	}
}
