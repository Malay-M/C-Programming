#include<stdio.h>
#include<math.h>

int main()
{
	int a;
	float d;
	printf("Enter length of a square:");
	scanf("%d",&a);
	d=a*sqrt(2);
	printf("Square diagonal is %.1f",d);
	return 0;
}
