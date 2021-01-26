#include<stdio.h>
#include<stdlib.h>
typedef enum bool{false,true
}bool;
int Area(int x1,int y1, int x2, int y2, int x3, int y3)
{
	
	int A = (1/2) * (x1*(y2-y3)+ x2*(y3-y1)+ x3*(y1-y2));
	return(A);
}
bool boolean(int A, int A1, int A2, int A3)
{
	int sum;
	sum= A1+A2+A3;
	if(A==sum)
	{
		return(true);
	}
	else
	return(false);
}
int main()
{
	int x1,x2,x3,y1,y2,y3;
	printf("Enter vertices of triangle: ");
	printf("\nA(x1): ");
	scanf("%d",&x1);
	fflush(stdin);
	printf("\nA(y1): ");
	scanf("%d",&y1);
	fflush(stdin);
	printf("\nB(x2): ");
	scanf("%d",&x2);
	fflush(stdin);
	printf("\nB(y2): ");
	scanf("%d",&y2);
	fflush(stdin);
	printf("\nC(x3): ");
	scanf("%d",&x3);
	fflush(stdin);
	printf("\nC(y3): ");
	scanf("%d",&y3);
	fflush(stdin);
		
	int A,A1,A2,A3,x,y;
	A=Area(x1,y1,x2,y2,x3,y3);
	printf("\nArea of triangle is %d\n",A);
	printf("Enter a point to check if it lies in the triangle or not: ");
	printf("\nEnter value of x: ");
	scanf("%d",&x);
	printf("Enter value of y: ");
	scanf("%d",&y);
	A1=Area(x,y,x2,y2,x3,y3);
	A2=Area(x1,y1,x,y,x3,y3);
	A3=Area(x1,y1,x2,y2,x,y);
	if(boolean(A,A1,A2,A3)==1)
	{
		printf("\ninside");
	}
	else
	{
		printf("\noutside");
	}
	
	
}
