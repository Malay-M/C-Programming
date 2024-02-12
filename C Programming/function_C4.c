/*takes nothing return someting*/
#include<stdio.h>
int add();  //function takes nothing
void main()
{
	int s;
	s=add();//takes nothing
	printf("Sum is %d",s);
}
int add()
{
	int a,b,c;
	printf("Enter two number:");
	scanf("%d %d",&a,&b);
	c=a+b;
	return c; // return someting(c)
}
//return data type return only one value 

/*takes someting return someting*/
#include<stdio.h>
int add(int,int);
void main()
{
	int x,y;
	printf("Enter two numbers:");
	scanf("%d%d",&x,&y);
	s=add(x,y);  //function takes someting
	printf("Sum is %d",s);
}
int add(int a,int b) //function takes someting
{
	int c;
	c=a+b;
	return c;  //function return someting
} 
