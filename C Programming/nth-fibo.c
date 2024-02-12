#include<stdio.h>

int main()
{
	int n,i=1,a=-1,b=1,c;
	printf("Enter a number:");
	scanf("%d",&n);
	while(i<n)
	{
		c=a+b;
		printf("%d ",c);
		a=b;
		b=c;
		n=c;
	}
	return 0;
}
