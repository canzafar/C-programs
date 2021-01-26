#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int n,a,b,i,j,total;
	printf("\t\t\t\t\tPIE IN THE SKY BAKERS\n");
	printf("\t\t\t\t\t\tWELCOME");
	printf("\nPLEASE SELECT FROM THE FOLLOWING MENU:\nC = CAKE\nB = BISCUITS");
	a:
	printf("\nHOW MANY TYPES OF BAKERY ITEMS YOU WANT TO ORDER = ");
	scanf("%d",&n);
	fflush(stdin);
	if(n>2)
	{
		printf("Sorry we only have 2 items available.\nPlease Select from them.");
		goto a;
	}
	char x,y;
	switch(n)
	{
		case(1):
			printf("\nEnter item you want to order =  ");
			scanf("%c",&x);
			fflush(stdin);
			printf("Enter quantity =  ");
			scanf("%d",&a);
			fflush(stdin);
			if(x=='C')
			{
				i=a*500;
			}
			else
			{
				j = a*200;
			}
			printf("\nYou have ordered:");
			if(x == 'C' || x=='c')
			{
				printf("\n%d Cakes = %d",a,i);
				printf("\n\t\t\tTOTAL = %d ",i);
			}
			else
			{
				printf("%d Biscuits = %d",a,j);
				printf("\n\t\t\tTOTAL = %d ",j);
			}
			break;
			
		case(2):
			printf("\nEnter first item you want to order: ");
			scanf("%c",&x);
			fflush(stdin);
			printf("Enter Quantity: ");
			scanf("%d",&a);
			fflush(stdin);
			printf("Enter second item you want to order: ");
			scanf("%c",&y);
			fflush(stdin);
			printf("Enter Quantity: ");
			scanf("%d",&b);
			fflush(stdin);
			if(x=='C'|| x=='c')
			{
				i=a*500;
				j=b*200;
				printf("\n%d Cake = %d",a,i);
				printf("\n%d Biscuits = %d",b,j);
				printf("\n\t\t\tTOTAL = %d",i+j);
			}
			else
			{
				i=a*200;
				j=b*500;
				printf("\n%d Biscuits = %d",a,i);
				printf("\n%d Cake = %d",b,j);
				printf("\n\t\t\tTOTAL = %d",i+j);
			}
			 break;
	}
	
	printf("\n\t\t\t\t\t\tThank you, have a nice day.");
	
	
	
		
}
