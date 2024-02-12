#include<stdio.h>

int main()
{
	int num1,num2,*a,*b,temp;
	printf("Enter value of num1: ");
	scanf("%d",&num1);
	printf("Enter value of num2: ");
	scanf("%d",&num2);
	printf("Before swapping :\n num1= %d\n num2= %d\n",num1,num2);
	a=&num1;
	b=&num2;
	temp=*b;
	*b=*a;
	*a=temp;
	printf("After swapping:\n num1= %d\n num2= %d",num1,num2);
	return 0;
}
