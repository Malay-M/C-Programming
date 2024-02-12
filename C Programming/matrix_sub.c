#include<stdio.h>

int main()
{
	int a[3][3],b[3][3],sum[3][3],i,j;
	printf("Enter 1st matrix elements:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter 2nd matrix elements:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("Subtraction of 2 matrix is:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			sum[i][j]=a[i][j]-b[i][j];
			printf("%3d",sum[i][j]);
		}
		printf("\n");
	}
	return 0;
}
