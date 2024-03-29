//Trapezoidal Rule

#include<stdio.h>
#include<math.h>
#define f(x) 1/(1+x*x)

int main()
{
	float lower,upper,integration=0.0,stepSize,k;
	int i,subInterval;
	printf("Enter lower limit of integration:");
	scanf("%f",&lower);
	printf("Enter upper limit of integration:");
	scanf("%f",&upper);
	printf("Enter number of sub intervals:");
	scanf("%d",&subInterval);
	stepSize=(upper-lower)/subInterval;
	integration=f(lower)+f(upper);
	for(i=1;i<=subInterval-1;i++)
	{
		k=lower+i*stepSize;
		integration=integration+2*f(k);
	}
	integration=integration*stepSize/2;
	printf("\nRequied value of integration is: %.3f",integration);
	return 0;
}
