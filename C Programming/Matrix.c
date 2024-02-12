#include<stdio.h>

void main()
{
	int n,i,j,k;
		int a[10][10],b[10][10],m[10][10];
	printf("Enter matrix size NxN:");
	scanf("%d",&n);

	printf("Enter matrix A:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("A[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter matrix B:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("B[%d][%d]=",i,j);
			scanf("%d",&b[i][j]);
		}
	}

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			m[i][j]=0;
			for(k=0;k<n;k++)
			{
				m[i][j]=m[i][j]+a[i][k]*b[k][j];
			}
		}
	}

	printf("Multiplication result is:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d   ",m[i][j]);
		}
		printf("\n");
	}
}
