#include<stdio.h>

int main()
{
	int n;
	int dig,sum=0,pro=1;
	printf("\nEnter an integer number:");
	scanf("%d",&n);
	while(n>0)
	{
		dig=n%10;
		sum+=dig;
		pro*=dig;
		n=n/10;
	}
	printf("\nSum of all digits is: %d",sum);
	printf("\nProduct of all digits: %d",pro);
	return 0;
}
