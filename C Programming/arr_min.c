#include<stdio.h>

int main()
{
	int arr[100],i,min,n;
	printf("Number of elements:");
	scanf("%d",&n);
	printf("Enter %d elements in array\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	min=arr[0];
	for(i=0;i<n;i++)
	{
		if(min>arr[i])
		{
			min=arr[i];
		}
	}
	printf("Min element is %d",min);
	return 0;
}
