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
	printf("Enter length of side of square: ");
	scanf("%f",&S.a);
	S.b=S.a*S.a;
	printf("Area of square is %.2f",S.b);
}

void Vol_cube()
{
	Cube C;
	printf("\nEnter length of a side of cube: ");
	scanf("%f",&C.s);
	C.v=C.s * C.s * C.s;
	printf("Volume of cube is %.2f",C.v);
}

void Circumference()
{
	Circle O;
	printf("\nEnter radius of circle: ");
	scanf("%f",&O.r);
	O.c=2*3.14*O.r;
	printf("Circumference of circle is %.3f",O.c);
}

void Hyp_tri()
{
	Triangle T;
	printf("\nEnter base length of triangle: ");
	scanf("%f",&T.B);
	printf("Enter perpendicular length of triangle: ");
	scanf("%f",&T.P);
	T.H= T.B*T.B + T.P*T.P;
	float i = sqrt(T.H);
	printf("The Hypotnuse of the triangle is %.3f",i);
}

int main()
{
	printf("Enter values of at least 1 decimal place\nExample 5.5 or 5.0\n");
	Area_sq();
	Vol_cube();
	Circumference();
	Hyp_tri();
}

