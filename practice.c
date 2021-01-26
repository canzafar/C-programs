#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
struct book
{
	int bookid;
	char title;
	float price;
};

struct book input()
{
	struct book b;
	printf("Enter book id, title, price:\n ");
	scanf("%d", &b.bookid);
	fflush(stdin);
	scanf("%s",&b.title);
	scanf("%f",&b.price);
	return(b);
}

void display(struct book b)
{
	printf("\n %d %s %f", b.bookid, b.title, b.price);
}

int main()
{
	struct book b1;
	b1=input();
	display(b1);
	getch();
}


