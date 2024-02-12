#include<stdio.h>
#include<math.h>
#define f(x) x*x*x-3*x-5
#define df(x) 3*x*x-3
#define e 0.001

int main()
{
	float x0,x1,f0,f1,df0;
	int i=0;
	printf("Enter the value of x0:");
	scanf("%f",&x0);
	do{
		f0=f(x0);
		df0=df(x0);
		x1=x0-(f0/df0);
		f1=f(x1);
		x0=x1;
		i++;
		printf("No of iteration=%d\t",i);
		printf("Root=%f\t",x1);
		printf("Value of functions=%f\n",f1);
	}while(fabs(f1)>e);
	return 0;
}
