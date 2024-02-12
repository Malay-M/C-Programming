#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,prime;
	printf("Enter a number:");
	scanf("%d",&n);
	for(i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			prime=0;
			break;
		}
	}
	if(prime==0)
	 printf("Not Prime");
	else
	 printf("Prime");
	return 0;  
}
