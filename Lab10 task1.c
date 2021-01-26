#include<stdio.h>
typedef struct 
{
	int h; //hours
	int m; //minutes
	int s; //seconds
}Time;

int main()
{
	Time ST,ET,T;
	printf("Enter starting time of race: ");
	scanf("%d:%d:%d",&ST.h,&ST.m,&ST.s);
	printf("Enter ending time of race: ");
	scanf("%d:%d:%d",&ET.h,&ET.m,&ET.s);
	T.h= ET.h - ST.h;
	T.m= ET.m - ST.m;
	T.s= ET.s - ST.s;
	printf("Time elapsed is %d:%d:%d (HRS:MINS:SEC)",T.h,T.m,T.s);
}
