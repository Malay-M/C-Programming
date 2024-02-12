#include<stdio.h>
#include<math.h>

void main()
{
	int num,sum=0,temp,dig,count=0;
	printf("Enter a number:");
	scanf("%d",&num);
	temp=num;
	while(num>0)
	{
		num=num/10;
		count++;
	}
	num=temp;
	while(num>0)
	{
		dig=num%10;
		sum=sum+pow(dig,count);
		num=num/10;
	}

	if(temp==sum)
	{
		printf("%d is a Armstrong Number",temp);
	}
	else
	{
		printf("%d is not a Armstrong Number",temp);
	}
	
}
