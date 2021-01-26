#include<stdio.h>
#include<stdlib.h>
void input(int *p)
{
	int i;
	for(i=0; i<5; i++)
	{
		scanf("%d",(p+i));
	}
}

void display(int *p)
{
	int i;
	for(i=0; i<5; i++)
	{
		printf(" %d ",*(p+i));
	}
}

void sort(int *p)
{
	for(round=1; round<=4; round++)
	{
	    for(i=0; i<=(4-round); i++)
	   {
		    if(*(p+i)>*(p+i+1))
		    {
		        t=*(p+i);
		        *(p+i)=*(p+i+1);
		        *(p+i+1)=t;
		    }
	   }
    }
}
int main()
{
	int a[5];
	printf("Enter 5 numbers:\n");     
}
