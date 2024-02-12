#include<stdio.h>
#include<math.h>
#define f1(x,y,z) (85-6*y+z)/27
#define f2(x,y,z) (72-6*x-2*z)/15
#define f3(x,y,z) (110-x-y)/54
#define e 0.001

int main()
{
	float x0,y0,z0,x1,y1,z1,e1,e2,e3;
	int i=1;
	printf("Itreation\tx\t\ty\t\tz\n");
	do{
		x1=f1(x0,y0,z0);
		y1=f2(x1,y0,z0);
		z1=f3(x1,y1,z0);
		printf("%d\t\t%f\t%f\t%f\n",i,x1,y1,z1);
		e1=fabs(x0-x1);
		e2=fabs(y0-y1);
		e3=fabs(z0-z1);
		x0=x1;
		y0=y1;
		z0=z1;
		i++;
	}while(e1>e&&e2>e&&e3>e);
	return 0;
}
