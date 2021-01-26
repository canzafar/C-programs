#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
int sum_odd(int *ptra,int num)
{   int sum=0,i;
    for(i=1;i<num ; i+=2)
    {
        sum+=*(ptra+i);
    }
    return sum;
}
int sum_even(int *ptra,int num)
{   int sum=0,i;
    for(i=0;i<num ; i+=2)
    {
        sum+=*(ptra+i);
    }
    return sum;
}
int* sort(int *ptr,int num)
{
    int i,j,temp;
    for(i=0 ; i<num-1;i++)
    {
        for(j=0;j<num-1-i;j++)
        {
            if(ptr[j]>ptr[j+1])
            {
                temp=ptr[j];
                ptr[j]=ptr[j+1];
                ptr[j+1]=temp;
            }
        }
    }
    return ptr;
}
int main()
{
    int n=5,even,odd,i;
    int array[n];
    int* deptr;
    printf("**ENTER ELEMENTS OF ARRAY**\n");
    for(i=0 ; i<n;i++)
    {
        printf("Enter the %d element of array \n",i+1);
        scanf("%d",&array[i]);
    }
    even=sum_even(array,n);
    odd=sum_odd(array,n);
    deptr=sort(array,n);
    printf("**In ascending order**\n");
    for(i=0;i<n;i++)
    {
        printf(" %d ",deptr[i]);
    }
    printf("\nThe sum of numbers which are on odd indexes is %d \nThe sum of numbers which are on even indexes are %d\n",odd,even);
    return 0;
}
