#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int fibonacci(int c, int a, int b);
int main()
{
	int a=0, b=1, c;
	printf("%d %d",a,b);
	fibonacci(c,a,b);
}
int fibonacci(int c, int a, int b)
{
	static int count =2;
	if(count==11)
	return;
	else
	{
		c=b+a;
		a=c+b;
		b=a+c;
		count=count+3;
		printf(" %d %d %d ",c,a,b);
		fibonacci(c,a,b);
	}
}
