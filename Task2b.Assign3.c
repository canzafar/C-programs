#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
int func(int row,int col,int arr[5][5])
{
    static int counter=0 , m=0;
    if(m==5)
    {
        return counter;
    }
    else
    {
        if(arr[row][m]==arr[row][col])
        {
            counter++;
            m++;
            func(row, col,arr);
        }
        else
        {
            m++;
            func(row, col,arr);
        }
        

    }
    
}
int main()
{
    int n=5;
	int k,u,i,j, a[n][n];
    int *p=&a[0][0];
	for(u=0; u<n*n; u++)
	{   
		printf("Enter element %d : ",u+1);
		scanf("%d",p+u);
		
	}
	printf("YOUR ARRAY IS:\n");
	
    int counter=0;
    for(i =0 ; i<n ; i++)
    { printf("| ");
        for(j =0;j<n;j++)
        {
           printf("  %d    ",*(p+counter));
            counter++;
        }
        printf("    \t|\b\n");
    }

	printf("Enter row number: ");
	scanf("%d",&i);
	printf("Enter column number: ");
	scanf("%d",&j);
	k=func(i,j,a);
	printf("No. of occurances is %d",k);
        
return 0;
}
