#include<stdio.h>

void main()
{
	int num,sq,flag=1,temp;
	printf("Enter a number:");
	scanf("%d",&num);
	sq=num*num;
	temp=num;
	while(num>0)
	{
		if(num%10!=sq%10)
		{
			flag=0;
		}
		num=num/10;
		sq=sq/10;
	}
	if(flag==1)
		printf("%d is a Automorphic Number",temp);
	else
		printf("%d is not a Automorphic Number",temp);
}