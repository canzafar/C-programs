#include<stdio.h>
#include<stdio.h>
#include<math.h>
typedef struct
{
	float a,b;
}Square; //area of square

typedef struct
{
	 float s,v;
}Cube; //volume of cube

typedef struct
{
	float r;
	float c;
}Circle; //circumference of circle

typedef struct
{
	float H,B,P;
}Triangle; //Hypotenuse of triangle

void Area_sq()
{
	Square S;
	Square *ps = &S;
	printf("Enter length of side of square: ");
	scanf("%f",&ps->a);
	ps->b = (ps->a) * (ps->a);
	printf("\n---Area of square is %.2f---\n",ps->b);
}

void Vol_cube()
{
	Cube C;
	Cube *pc = &C;
	printf("\nEnter length of a side of cube: ");
	scanf("%f",&pc->s);
	pc->v = (pc->s) * (pc->s) * (pc->s);
	printf("\n---Volume of cube is %.2f---\n",pc->v);
}

void Circumference()
{
	Circle O;
	Circle *po = &O;
	printf("\nEnter radius of circle: ");
	scanf("%f",& po->r);
	po->c=2*3.14* (po->r);
	printf("\n--Circumference of circle is %.3f--\n",po->c);
}

void Hyp_tri()
{
	Triangle T;
	Triangle *pt = &T;
	printf("\nEnter base length of triangle: ");
	scanf("%f",&pt->B);
	printf("Enter perpendicular length of triangle: ");
	scanf("%f",&pt->P);
	pt->H= (pt->B)*(pt->B) + (pt->P)*(pt->P);
	float i = sqrt(pt->H);
	printf("\n---The Hypotnuse of the triangle is %.3f---\n",i);
}

int main()
{
	Area_sq();
	Vol_cube();
	Circumference();
	Hyp_tri();
}

