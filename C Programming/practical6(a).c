#include<stdio.h>

int checkPrime(int number)
{
	int count=0,i;
	for(i=2;i<=number/2;i++)
	{
		if(number%i==0)
		{
			count=1;
			break;
		}
	}
	if(number==1) 
	  count=1;
    return count;	  
}
int main()
{
	int number,n,i,count;
	printf("Enter a number:");
	scanf("%d",&number);
	if(checkPrime(number)==0)
	  printf("%d is a prime number\n",number);
	else
	  printf("%d is not a prime number\n",number);
	for(n=2;n<=100;n++)
	{
		count=0;
		for(i=2;i<=n/2;i++)
		{
			if(n%i==0)
			{
				count++;
				break;
			}
		}
	
		if(count==0&&n!=1)
		{
			printf("%d ",n);
		}
	}
	return 0;
}
