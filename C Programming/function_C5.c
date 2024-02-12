/*takes someting return someting*/
#include<stdio.h>
int add();
void main()
{
	int x,y,s;
	printf("Enter two number:");
	scanf("%d%d",&x,&y);
	s=add(x,y);  //function takes someting
}
int add(int a,int b)
{
	int c;
	c=a+b;
	return c;  //function return someting
}
