#include<stdio.h>

int main()
{
	int arr[20],i,sum=0;
	float avg;
	printf("Enter 20 number\n");
	for(i=0;i<20;i++)
	{
		scanf("%d",&arr[i]);
		sum=sum+arr[i];
	}
	avg=(sum/20);
	printf("Avg=%.2f",avg);
	return 0;
}
