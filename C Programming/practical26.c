#include<stdio.h>
struct complex
{
	float real;
	float imaginary;
};

int main()
{
	struct complex cnum1,cnum2,sum;
	printf("Enter real and imaginary part of first complex number:");
	scanf("%f %f",&cnum1.real,&cnum2.imaginary);
	printf("Enter real and imaginary of second complex number:");
	scanf("%f %f",&cnum2.real,&cnum2.imaginary);
	sum.real=cnum1.real+cnum2.real;
	sum.imaginary=cnum1.imaginary+cnum2.imaginary;
	printf("Sum = %0.2f+ i%0.2f",sum.real,sum.imaginary);
	return 0;
}
