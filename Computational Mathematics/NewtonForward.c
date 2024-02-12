#include<stdio.h>
#include<math.h>

int main()
{
	float x[20],y[20],h,f,u;
	int n,i;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	printf("Enter the value of x:");
	for(i=0;i<n;i++)
	{
		scanf("%f",&x[i]);
	}
	printf("Enter the value of y:");
	for(i=0;i<n;i++)
	{
		scanf("%f",&y[i]);
	}
	h=x[1]-x[0];
	printf("Enter the value you want to search:");
	scanf("%f",&f);
	u=(f-x[0])/h;
	
	return 0;
}
