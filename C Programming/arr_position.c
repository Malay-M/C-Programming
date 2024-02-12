#include<stdio.h>

int main()
{
	int arr[10],i;
	printf("Enter 10 array elemets\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=1;i<10;i+=2)
	{
		printf("%d is in %d position in array\n",arr[i],i);
	}
	return 0;
}
