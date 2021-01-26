#include<stdio.h>
#include<stdlib.h>
void main()
{
	void *ptr, *ptr2, *ptr3;
	ptr=(void *)malloc(sizeof(ptr));
	ptr2=(void *)malloc(sizeof(ptr2));
	ptr3=(void *)malloc(sizeof(ptr3));
	printf("Enter an integer: ");
	scanf("%d",ptr);
	fflush(stdin);
	printf("\nEnter a float: ");
	scanf("%f",ptr2);
	fflush(stdin);
	printf("\nEnter a character: ");
	scanf("%c",ptr3);
	fflush(stdin);
	printf("\nint is %d having address %d",*(int *)ptr, (int *)ptr);
	printf("\nfloat is %f having address %d",*(float *)ptr2, (float*)ptr2);
	printf("\nchar is %c having address %d",*(char *)ptr3, (char *)ptr3);
	free(ptr);
	free(ptr2);
	free(ptr3);
}
