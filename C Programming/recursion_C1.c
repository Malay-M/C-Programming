//function calling itself is called recursion
#include<stdio.h>
int sum(int);
void main()
{
	int k;
	k=sum(3);
	printf("%d",k);
}
int sum(int a)
{
	int s;         //sum(3)=3+sum(2)
	if(a==1)	   //sum(2)=2+sum(1)	
	  return a;	   //sum(1)=1
	else
	  s=a+sum(a-1);
	  return s;
}
