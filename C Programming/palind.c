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
	if(num==rev)
	  printf("Its a palindrome ");
	else
	  printf("Its not a palindrome ");  
	return 0; 	
}
