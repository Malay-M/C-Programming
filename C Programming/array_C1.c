//array is a linear collection of similar elements
//array is also known ad subscript variable
//array is grounp of variable
#include<stdio.h>

void main()
{
	int a[10],i,sum=0;
	float avg;
	printf("Enter 10 numbers:");
	for(i=0;i<10;i++)
	  scanf("%d",&a[i]);
	for(i=0;i<10;i++)
	  sum=sum+a[i];
	avg=sum/10.0;
    printf("Avg is %f",avg);
}
