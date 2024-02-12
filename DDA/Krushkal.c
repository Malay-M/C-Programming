#include<stdio.h>
#include<math.h>

void sort(int arr[][3],int c)
{
	int i,j; int t1,t2,t3;
	for(i=0;i<c-1;i++)
	{
		for(j=0;j<c-i-1;j++)
		{
			if(arr[j][2]>arr[j+1][2])
			{
				t1=arr[j][2];
				arr[j][2]=arr[j+1][2];
				arr[j+1][2]=t1;
				t2=arr[j][0];
				arr[j][0]=arr[j+1][0];
				arr[j+1][0]=t2;
				t3=arr[j][1];
				arr[j][1]=arr[j+1][1];
				arr[j+1][1]=t3;
			}
		}
	}
}
int findParent(int f,int arr[],int m)
{
	if(arr[f]==f)
		return f;
	return findParent(arr[f],arr,m);
}
int main()
{
	int iedge[100][3],oedge[100][3],parent[100],m,n,i,j,count=0,sum=0; printf("Enter the number of edges: "); scanf("%d",&n);
	printf("Enter the number of vertices: ");
	scanf("%d",&m);
	printf("Enter the edges with source--destination--weight:\n" ); 
	for(i=0;i<n;i++)
	{
		scanf("%d--%d--%d",&iedge[i][0],&iedge[i][1],&iedge[i][2]);
	}
	sort(iedge,n);
	for(i=0;i<m;i++)
	{
		parent[i]=i;
	}
	i=0;
	count=0;
	while(count!= m-1)
	{ 
		int sP=findParent(iedge[i][0],parent,m);
		int dP=findParent(iedge[i][1],parent,m);
		if(sP!=dP)
		{
			oedge[count][0]=iedge[i][0];
			oedge[count][1]=iedge[i][1];
			oedge[count][2]=iedge[i][2];
			sum+=iedge[i][2];
			count++;
			parent[sP]=dP;
		}
		i++;
	}
	printf("The path followed is:\n");
	for(i=0;i<m-1;i++)
	{
		printf("%d--%d--%d\n",oedge[i][0],oedge[i][1],oedge[i][2]);
	}
	printf("The sum of the mst is: %d",sum);
} 

