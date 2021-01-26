#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct date
{
	int d,m,y;
}d1,d2;

int main()
{
	printf("Enter first date: ");
	scanf("%d/%d/%d",&d1.d,&d1.m,&d1.y);
	printf("Enter second date:");
	scanf("%d/%d/%d",&d2.d,&d2.m,&d2.y);
	if(d1.d==d2.d && d1.m==d2.m && d1.y==d2.y)
	{
		printf(" Dates are equal dates");
	}
	else
	{
		printf("Dates are unequal dates");
	}
	
}
