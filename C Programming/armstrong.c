#include<stdio.h>
#include<math.h>

int main()
{
	int num,rem,sum=0,temp,c;
	printf("Enter a number:");
	scanf("%d",&num);
	num=temp;
	while(num>0)
	{
		rem=num%10;
		sum=sum+pow(rem,3);
		num=num/10;
    }
    printf("\n%d",sum);
	if(temp==sum)
		printf("Your number is a armstong number");
	else 
	    printf("Your number is not a armstong number");	
    return 0;
}
