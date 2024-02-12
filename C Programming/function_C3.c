/*takes something return nothing*/
#include<stdio.h>
void add(int,int);  //function takes someting
void main()
{
	int x,y;
	printf("Enter two number:");
	scanf("%d %d",&x,&y);
	add(x,y);  //x,y are actual argument || call by value
}   // function call by passing value its call call by value
void add(int a,int b)  //a,b are formal argument 
{
	int c;
	c=a+b;
	printf("Sum is %d",c);
}  // funtion return nothing 
