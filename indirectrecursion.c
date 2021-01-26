#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void even(int a);
void odd(int a);
void odd(int a)
{
	if(a<=10)
	{
		int b;
		b=a+1;
		printf(" %d ",b);
		a++;
		even(a);
	}
	else
	return;
}

void even(int a)
{
	if(a<=10)
	{
		int c;
		c=a-1;
		printf(" %d ",c);
		a++;
		odd(a);
	}
	else
	return;
	
}
int main()
{
	int a=1;
	if(a%2==0)
	{
		even(a);
	}
	else
	{
		odd(a);
	}
}
