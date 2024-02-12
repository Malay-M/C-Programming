#include<stdio.h>

float area(float);
float circumference(float);

int main()
{
	float r;
	printf("Enter the radius of a circle is:");
	scanf("%f",&r);
	printf("Area =%.3f\nCircumference =%.3f",area(r),circumference(r));
}

float area(float x)
{
	float area;
	area=3.14*x*x;
	return area;
}

float circumference(float y)
{
	float cir;
	cir=2*3.14*y;
	return cir;
}
