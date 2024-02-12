#include<stdio.h>
int main()
{
	int num,rev,a;
	printf("Enter a number:");
	scanf("%d",&num);
	while(num!=0)
	{
		a=num%10;
		num=num/10;
		rev=rev*10+a;
	}
	printf("Reverse number is %d",rev);
	return 0;
}
