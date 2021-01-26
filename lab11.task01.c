#include<stdio.h>
#include<stdlib.h>
void main()
{
	void *ptr;
	ptr = (void*)malloc(sizeof(ptr));
	printf("Enter a value: ");
	scanf("%d",ptr);
	printf("%d\n",*(int *)ptr);
	printf("%f\n",*(float *)ptr);
	printf("%c\n",*(char *)ptr);
	free(ptr);
}
