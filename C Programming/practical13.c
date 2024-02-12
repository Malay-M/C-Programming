#include<stdio.h>

void swap(int *x,int *y)
{
	int t;
	t=*x;
	*x=*y;
	*y=t;
}

int main()
{
	int num1,num2;
	printf("Enter value of num1: ");
	scanf("%d",&num1);
	printf("Enter value of num2: ");
	scanf("%d",&num2);
	printf("Before swapping :\n num1= %d\n num2= %d\n",num1,num2);
	swap(&num1,&num2);
	printf("After swapping:\n num1= %d\n num2= %d",num1,num2);
	return 0;
}
