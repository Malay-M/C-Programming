#include<stdio.h>

int main()
{
	int arr[50],n,i,j,fact=1;
	printf("Enter number of element:");
	scanf("%d",&n);
	printf("Enter array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Factoiral of array elements are\n");
	for(i=0;i<n;i++)
	{
		for(j=1;j<=arr[i];j++)
		{
			fact=fact*j;
		}
		printf("%d!=%d\n",arr[i],fact);
		fact=1;
	}
	return 0;
}
