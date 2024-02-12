#include<stdio.h>

int main()
{
	int n,i,prime;
	printf("Enter a number:");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
		prime=0;
		break;
		}
		else
		prime=1;
	}
	if(prime==0)
	printf("not prime");
	else
	printf("Prime");
	
	return 0;
}
