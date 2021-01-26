#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
int* KALEIDOSCOPE(int SEED, int GRID, int N);
int main()
{
	int N,SEED,i,j, *k;
	printf("Enter the value of N: ");
	scanf("%d",&N);
	fflush(stdin);
	if(N%2==0)
	{
		printf("\nEnter an odd value of N");
	}
	int GRID[N][N];
	printf("Enter SEED value: ");
	scanf("%d",&SEED);
	fflush(stdin);
	GRID[N/2][N/2]=SEED;
	k=KALEIDOSCOPE(SEED, GRID, N);
	for(i=0; i<N; i++)
	{
		for(j=0; j<N; j++)
		{
			printf("  %d  ",GRID[i][j]);
		}
		printf("\n");
	}
	
}

int* KALEIDOSCOPE(int SEED, int GRID, int N)
{
	int i,j;
	for(i=0; i<N; i++)
	{
		for(j=0; j<N; j++)
		{
			if(i==(N/2) &&j==(N/2))
			{
				GRID[i][j]=SEED;
			}
			else
			{
				GRID[i][j]=SEED*SEED;
			}
		}
		
	}
	return(GRID);
}
