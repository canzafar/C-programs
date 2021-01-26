#include<stdio.h>
int factorial(int m);
int main()
{
	int k,n;
	printf("Enter a number to find its factorial: ");
	scanf("%d",&n);
	k = factorial(n);
	printf("The factorial of %d is %d ",n,k);
}

int factorial(int m)
{
	int s;
	if(m==1 || m==0)
	return(1);
	s=m*factorial(m-1);
	return(s);
}


