#include<stdio.h>
void fun(void *p);
int main()
{
	char y;
	printf("Enter a value:\n");
	scanf("%c",&y);
	fun(&y);
	return(0);
}
void fun(void *p)
{
	printf("The value is %d\n",*(int*)p);
	printf("The value is %.2f\n",*(float*)p);
	printf("The value is %c\n",*(char*)p);
}

