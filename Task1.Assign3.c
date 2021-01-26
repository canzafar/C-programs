#include<stdio.h>
int func(int a, int b);
int main()
{
	int x, y,z;
	printf("Enter the value of x: ");
	scanf("%d",&x);
	printf("Enter the value of y: ");
	scanf("%d",&y);
	if(x>y)
	{
		z=func(x,y);
		printf("%d can be halved %d times until it is less than or equal to %d",x,z,y);
	}
	else
	{
		printf("The value of x is less than y");
	}
}
int func(int a, int b)
{
	static int count=0;
	if(a<b || a==b)
	{
		return(count);
	}
	else
	{
		a=a/2;
		count++;
		func(a,b);
	}
}
