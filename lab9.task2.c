#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	int a[n], *p;
	printf("Enter %d elements in the array:\n");
	for(p=a; p<=a+n-1; p++)
	   scanf("%d", p);
	   
	printf("Elements in reverse order:\n");
	for(p=a+n-1; p>=a; p--)
	   printf(" %d ", *p);
	   
	return(0);
}
