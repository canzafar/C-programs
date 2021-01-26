#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
	float *ptr, area=0;
	ptr=(float*)calloc(1,sizeof(float));
	printf("Enter the approx. height of box (in cm) : ");
	scanf("%f",&ptr[0]);
	area=ptr[0];
	printf("Enter the approx. width of box (in cm) : ");
	scanf("%f",&ptr[0]);
	area=area*ptr[0];
	printf("Enter the approx. length of box (in cm) : ");
	scanf("%f",&ptr[0]);
	area=area*ptr[0];
	printf("\n\nApprox. area req is : %f cm\n",area);
	free(ptr);
	return(0);
}
