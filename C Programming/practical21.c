#include<stdio.h>

int main()
{
	int a[10][10],b[10][10],c[10][10],ch;
	int i,j,k;
	int x,y,z;
	printf("****Menu****");
	printf("\n1. Sum\n2. Difference\n3. Product\n4. Transpose\n5. Exit");
	printf("\nEnter your choice:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: printf("\nEnter order of the matrices A and B:");
				scanf("%d %d",&x,&y);
				printf("Enter matrix A:");
				for(i=0;i<x;i++)
				{
					for(j=0;j<y;j++)
					{
						scanf("%d",&a[i][j]);
					}
				}
				printf("Enter matrix B:");
				for(i=0;i<x;i++)
				{
					for(j=0;j<y;j++)
					{
						scanf("%d",&b[i][j]);
					}
				}
				for(i=0;i<x;i++)
				{
					for(j=0;j<y;j++)
					{
						c[i][j]=a[i][j]+b[i][j];
					}
				}
				printf("Matrix A+B is:\n");
				for(i=0;i<x;i++)
				{
					for(j=0;j<y;j++)
					{
						printf("%3d",c[i][j]);
					}
					printf("\n");
				}
				break;
		case 2: printf("\nEnter order of the matrices A and B:");
				scanf("%d %d",&x,&y);
				printf("Enter matrix A:");
				for(i=0;i<x;i++)
				{
					for(j=0;j<y;j++)
					{
						scanf("%d",&a[i][j]);
					}
				}
				printf("Enter matrix B:");
				for(i=0;i<x;i++)
				{
					for(j=0;j<y;j++)
					{
						scanf("%d",&b[i][j]);
					}
				}
				for(i=0;i<x;i++)
				{
					for(j=0;j<y;j++)
					{
						c[i][j]=a[i][j]-b[i][j];
					}
				}
				printf("Matrix A-B is:\n");
				for(i=0;i<x;i++)
				{
					for(j=0;j<y;j++)
					{
						printf("%3d",c[i][j]);
					}
					printf("\n");
				}
				break;
		case 3: printf("\nEnter order of the matrices A and B:");
				scanf("%d %d",&x,&y);
				z=x;
				printf("Enter matrix A:");
				for(i=0;i<x;i++)
				{
					for(j=0;j<y;j++)
					{
						scanf("%d",&a[i][j]);
					}
				}
				printf("Enter matrix B:");
				for(i=0;i<x;i++)
				{
					for(j=0;j<y;j++)
					{
						scanf("%d",&b[i][j]);
					}
				}
				for(i=0;i<x;i++)
				{
					for(j=0;j<z;j++)
					{
						c[i][j]=0;
						for(k=0;k<y;k++)
						{
							c[i][j]+=a[i][k]*b[k][j];
						}
					}
				}
				printf("Matrix AxB is:\n");
				for(i=0;i<x;i++)
				{
					for(j=0;j<z;j++)
					{
						printf("%3d",c[i][j]);
					}
					printf("\n");
				}
				break;
		case 4: printf("Enter order of the matrix A:");
				scanf("%d %d",&x,&y);
				printf("Enter matrix A:");
				for(i=0;i<x;i++)
				{
					for(j=0;j<y;j++)
					{
						scanf("%d",&a[i][j]);
					}
				}
				printf("Transpose of A is:\n");
				for(i=0;i<x;i++)
				{
					for(j=0;j<y;j++)
					{
						printf("%3d",a[j][i]);
					}
					printf("\n");
				}
				break;
		case 5: break;
		default: printf("\nINVALID CHOICE");
				 break;
				
	}
	return 0;
}
