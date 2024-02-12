#include<stdio.h>

int main()
{
	int n;
	int dig,revNumber=0;
	printf("\nEnter an integer number:");
	scanf("%d",&n);
	while(n>0)
	{
		dig=n%10;
		revNumber=(revNumber*10)+dig;
		n=n/10;
	}
	printf("\nReverse Number is: %d\n",revNumber);
	return 0;
}
