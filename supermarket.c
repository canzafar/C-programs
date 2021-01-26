#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
typedef struct
{
	char city[10];
	char state[10];
	char area[20];
	int stno;
}CustAD;

typedef struct
{
	int ID;
	char name[20];
	CustAD address;
}Customer;

typedef struct 
{
	int id, qty; char pn[20];
}Product;

int main()
{
	int n,i;
	printf("How many Customers Data you want to store?\n");
	scanf("%d",&n);
	fflush(stdin);
	FILE *fptr;
	char filename[50];
	printf("\nEnter filename: ");
	gets(filename);
	fflush(stdin);
	fptr = fopen(filename, "a");
	if(fptr==NULL)
	{
		puts("\n**FILE NOT FOUND**");
		exit(1);
	}
	Customer cdata;
	for(i=0; i<n; i++)
	{
		printf("\n--CUSTOMER %d--\n",i+1);
		printf("Enter Customer ID: ");
		scanf("%d",&cdata.ID);
		fflush(stdin);
		printf("Enter name: ");
		gets(cdata.name);
		fflush(stdin);
		printf("ADDRESS:\n");
		printf("Enter State or country: ");
		gets(cdata.address.state);
		fflush(stdin);
		printf("Enter city: ");
		gets(cdata.address.city);
		fflush(stdin);
		printf("Enter area: ");
		gets(cdata.address.area);
		fflush(stdin);
		printf("Enter street number: ");
		scanf("%d",&cdata.address.stno);
		fflush(stdin);
		printf("\n");
		fwrite(&cdata, sizeof(Customer), 1, fptr);
	}
	fclose(fptr); 
	
	FILE *fptr2;
	char pfname[50];
	Product pdata;
	char a[5]; 
	printf("\n\nInput Filename to enter product details: ");
	gets(pfname);
	fflush(stdin);
	fptr2=fopen(pfname, "a");
	if(fptr2==NULL)
	{
		printf("\n***Can not open product data file!!**");
		exit(1);
	}
	for(i=0;  ; i++)
	{
		printf("\n--PRODUCT %d--\n",i+1);
		printf("\nEnter product ID: ");
		scanf("%d",&pdata.id);
		fflush(stdin);
		printf("Enter product name: ");
		gets(pdata.pn);
		fflush(stdin);
		printf("Enter quantity: ");
		scanf("%d",&pdata.qty);
		fflush(stdin);
		fwrite(&pdata, sizeof(Product), 1, fptr2);
		printf("\nTo exit type 'EOF'\nTo continue type 'GO'\n");
		gets(a);
		if(strcmp(a,"EOF")==0)
		break;
	}
	fclose(fptr2); */
	
	int c;
	FILE *fptr3;
	fptr3 = fopen("C:\\SuperMarket\\product_details.txt", "r");
	if(fptr3==NULL)
	{
		printf("\n**PRODUCT FILE NOT FOUND**\n");
		exit(1);
	}
	printf("\n");
	printf("Press 1, 2 or 3 for:\n");
	printf("1. list out all the maintained items.\n2. list only those items whose quantity is zero.\n3. list only those items whose quantity is greater than fifty\n");
	scanf("%d",&c);
	fflush(stdin);
	Product e;
	switch(c)
	{
		case(1):
			while(fread(&e, sizeof(e),1, fptr3)>0)
			{
				printf("%d %s %d\n",e.id,e.pn,e.qty);
			}
			break;
			
		case(2):
			while(fread(&e, sizeof(e), 1, fptr3) > 0)
			{
				if(e.qty==0)
				{
					printf("%d %s %d\n",e.id,e.pn,e.qty);
				}
			}
			break;	
			
		case(3):
			while(fread(&e, sizeof(e), 1, fptr3) > 0)
			{
				if(e.qty>50)
				{
					printf("%d %s %d\n",e.id,e.pn,e.qty);
				}
			}
			
			break;
				
	}
	fclose(fptr3);
	getch();
}
