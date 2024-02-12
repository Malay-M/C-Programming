#include<stdio.h>
#include<math.h>
#define f(x) (x*x*x)-2*x-5
#define e 0.001
int main()
{
	float x0,x1,x2,f0,f1,f2;
	int i=0;
	printf("Enter the value of x0:");
	scanf("%f",&x0);
	printf("Enter the value of x1:");
	scanf("%f",&x1);
	do{
		f0=f(x0);
		f1=f(x1);
		x2=(x0*f1-x1*f0)/(f1-f0);
		f2=f(x2);
		if(f0*f2<0)
		{
			x1=x2;
			f1=f2;
		}
		else
		{
			x0=x2;
			f0=f2;
		}
		i++;
		printf("Iteration %d\tRoot %f\tValue of function %f\n",i,x2,f2);
		
	}while(fabs(f2)>e);
	return 0;
}
