#include<stdio.h>
int main()
{
	int n,fac=1;
	printf("Enter a number:");
	scanf("%d",&n);
	if(n=0)
	{
		printf("Factorial is 1");
	}
	while(n!=0)
	{
		fac=fac*n;
		n=n-1;
	}
	printf("Factorial is %d",fac);
	return 0;
}
