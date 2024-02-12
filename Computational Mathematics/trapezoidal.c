#include<stdio.h>
#include<math.h>
#define f(x) 1/(1+x*x)

int main()
{
	float a,b,n=6;
	float h,in;
	float x[10],y[10];
	int i;
	printf("Enter the value of upper limit:");
	scanf("%f",&b);
	printf("Enter the value of lower limit:");
	scanf("%f",&a);
	x[0]=0;
	h=((b-a)/n);
	for(i=1;i<=n;i++)
	{
		x[i]=x[i-1]+h;	
	}
	for(i=0;i<=n;i++)
	{
		y[i]=f(x[i]);
	}
	in=h*((y[0]+y[6]/2)+y[1]+y[2]+y[3]+y[4]+y[5]);
	printf("\nvalue of inrigration %f",in);
	return 0;
}
