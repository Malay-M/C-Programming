/* Takes nothing return nothing*/
#include<stdio.h>
void add();  //function declaration
void main()
{
	add();  
}
void add()  // ()  takes nothing function 
{
	int a,b,c;
	printf("Enter two number:");  //function that takes something
	scanf("%d",&a,&b);  //takes someting function
	c=a+b;
	printf("Sum is %d",c);
}    // return nothing
