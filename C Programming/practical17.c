#include<stdio.h>

int main()
{
	int n1,n2,n3;
	printf("Enter the size of first array:");
	scanf("%d",&n1);
	printf("Enter the size of second array:");
	scanf("%d",&n2);
	n3=n1+n2;
	printf("\nEnter the sorted array elements:");
	int a[n1],b[n2],c[n3],i;
	for(i=0;i<n1;i++)
	{
		scanf("%d",&a[i]);
		c[i]=a[i];
	}
	int k=n1;
	printf("\nEnter the sorted array elements:");
	for(i=0;i<n2;i++)
	{
		scanf("%d",&b[i]);
		c[k]=b[i];
		k++;
	}
	printf("\nThe merged array..\n");
	for(i=0;i<n3;i++)
	{
		printf("%2d",c[i]);
	}
	printf("\nAfter sorting...\n");
	for(i=0;i<n3;i++)
	{
		int temp,j;
		for(j=i+1;j<n3;j++)
		{
			if(c[i]<c[j])
			{
				temp=c[i];
				c[i]=c[j];
				c[j]=temp;
			}
		}
	}
	for(i=0;i<n3;i++)
	{
		printf("%2d",c[i]);
	}
	return 0;
}
