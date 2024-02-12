#include <stdio.h>
int visited[100],adj[100][100];
int dfs(int i,int n,int m)
{
	int j,c;
	printf("%d-->",i);
	visited[i]=1;
	for(j=0;j<m;j++)
	{
		if(adj[i][j]==1 && visited[j]==0)
		{
			dfs(j,n,m);
		}
	}
}
int main()
{
	int i,j,a,b,r,n,m;
	printf("Enter the number of edges:");
	scanf("%d",&n);
	printf("Enter the number of vertices:");
	scanf("%d",&m);
	printf("Enter the vertices in i-->j format:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d %d",&a,&b);	
		adj[a][b]=1;
	}
	for(i=0;i<m;i++)
	{
		visited[i]=0;
	}
	printf("Enter the root element:");
	scanf("%d",&r);
	printf("The result is: ");
	dfs(r,n,m);
}

