//palindrom

#include<stdio.h>

void main()
{
	int num,dig,sum=0,temp;
	printf("Enter a number:");
	scanf("%d",&num);
	temp=num;
	while(num>0)
	{
		dig=num%10;
		sum=(sum*10)+dig;
		num=num/10;
	}
	if(temp==sum)
		printf("%d is a Palindrom Number",temp);
	else
		printf("%d is not a Palindrom Number",temp);

}