#include<stdio.h>
#include<math.h>
#define e 0.001
#define f(x) (x*x*x)-(5*x)+1

int main()
{
	float x0,x1,x2,f0,f1,f2;
	int i;
	printf("Enter the value of x0:");
	scanf("%f",&x0);
	printf("Enter the value of x1:");
	scanf("%f",&x1);
	do
	{
		f0=f(x0);
		f1=f(x1);
		x2=(((x0*f1)-(x1*f0))/(f1-f0));
		f2=f(x2);
		f0=f1;
		f1=f2;
		x0=x1;
		x1=x2;
		i++;
		printf("No of iteration:%d\t",i);
		printf("Root:%f\t",x2);
		printf("Function value:%f\n",f2);
	}while(fabs(f2)>e);
	return 0;
}
