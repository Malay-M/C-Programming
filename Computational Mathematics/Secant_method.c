//Secand Method

#include<stdio.h>
#include<math.h>
#define e 0.001
#define f(x) pow(x,3)-4*x+1

int main()
{
	float x0,x1,x2,f0,f1,f2;
	int i=0;
	printf("Enter the value of x0 and x1:");
	scanf("%f%f",&x0,&x1);
	do
	{
		f0=f(x0);
		f1=f(x1);
		x2=((x0*f1)-(x1*f0))/(f1-f0);
		f2=f(x2);
		f0=f1;
		f1=f2;
		x0=x1;
		x1=x2;
		i++;
		printf("No of iteration=%d\t",i);
		printf("Root=%f\t",x2);
		printf("Value of function=%f\n",f2);
	}while(fabs(f2)>e);
	return 0;	
}
