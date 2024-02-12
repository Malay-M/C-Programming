#include<stdio.h>

int main()
{
	int arr[5],i,max=0,n;
	printf("Number of elements:");
	scanf("%d",&n);
	printf("Enter 5 elements in array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		if(max<arr[i])
		{
			max=arr[i];
		}
	}
	printf("Max element is %d",max);
	return 0;
}
