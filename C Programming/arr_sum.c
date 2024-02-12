#include<stdio.h>

int main()
{
	int arr[10],sum=0,i;
	printf("Enter 10 number:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
		sum=sum+arr[i];
	}
	printf("Sum of 10 digits is %d",sum);
	return 0;
}
