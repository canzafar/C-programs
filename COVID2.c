#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void sort(int *index, int c[], int n);
void display(char name[][15],int c[],int *index,int n);
void replace(int *x, int *y);
int main()
{
	char name[][15]={"Hina", "Sara", "Ali", "Zain", "Bakhtawar", "Hashim", "Zeeshan", "Jameela", "Asfa", "Zahid"};
	int Covid[]={1,0,1,1,0,1,0,0,0,0};
	int n= sizeof(Covid)/ sizeof(Covid[0]);
	int index[n];
	int i;
	for(i=0; i<n; i++)
	{
		index[i]=i; //{1,2,3,4,5,6,7,8,9,10}
	}
	void (*bs)(int *index, int c[], int n) = sort;
	void (*dp)(char name[][15],int c[],int *index, int n) = display;
	printf("\nCovid test before sorting:\n");
	dp(name, Covid, &index[0], n);
	printf("\nCovid test after sorting:\n");
	bs(&index[0], Covid, n);
	dp(name, Covid, &index[0], n);
	
}
void sort(int *index, int c[], int n)
{
	void (*rp)(int *x, int *y)=replace;
	int i,j,temp;
	for(i=0; i<n-1; i++)
	{
		for(j=0; j<n-1-i; j++)
		{
			if(c[j]<c[j+1])
			{
				rp(&c[j],&c[j+1]);
				temp=index[j];
				index[j]=index[j+1];
				index[j+1]=temp;
			}
		}
	}
	
}
void display(char name[][15], int c[], int *index, int n)
{
	int i;
	for(i=0; i<n; i++)
	{
		printf("%-15s ",name[index[i]]);
		if(c[i]==1)
		{
			printf("Positive\n");
		}
		else
		{
			printf("Negative\n");
		}
	}
}

void replace(int *x, int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
