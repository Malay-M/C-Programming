#include<stdio.h>

int main()
{
	int n,r,fact=1,sum=0,temp;
	printf("Enter a number:");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
	   r=n%10;
	   while(r!=0)
	{
		fact=fact*r;
		r--;
	}
		sum=sum+fact;  
		n=n/10;
	}
	printf("%d",sum); 
	if(temp==sum)
	   printf("Ok");
	else
	   printf("No");   
	 return 0;
}
