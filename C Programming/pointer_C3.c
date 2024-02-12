//Write a funtion to swap two integers
#include<stdio.h>

void swap(int *,int *);
void main()
{
	int a,b;
	printf("Enter two numbers:");
	scanf("%d %d",&a,&b);
	swap(&a,&b);
	printf("a=%d b=%d",a,b);
}
void swap(int *x,int *y)
{
	int t;
	t=*x;
	*x=*y;
	*y=t;
}
/*Call by reference*/
// call by reference is same as call by address
// when formal arguments are pointer variable,its call by reference
// reference means address
