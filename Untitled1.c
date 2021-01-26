#include<stdio.h>
int main()
{
	int x=5;
/*	printf("%d\n",x);
	printf("%d\n",&x);
	printf("%d",*&x);*/
	int *j;
	j=&x;
	printf("%d %u\n",x,j);
	printf("%d %u\n",*j,&x);
	printf("%u",&j);
}
