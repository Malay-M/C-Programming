#include<stdio.h>
void add(); 
void isEven();

int main()
{
	add();  //function calling
	isEven();  //function calling
	add();  //function calling
	add();  //function calling
	return 0;
}
void add()  //function defination
{
	int a,b,c;
	printf("Enter two number:");
	scanf("%d %d",&a,&b);
	c=a+b;
	printf("Sum is %d",c);
}
void isEven()  //function defination
{
	int a;
	printf("Enter a number:");
	if(a%2==0)
	 printf("Even");
	else
	 printf("odd");
}
