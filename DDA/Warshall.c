#include <stdio.h>
int adj[100][100],c,col[100],row[100],cl=0,rl=0,m,n,i,j;
void warshal(int q)
{
	cl=rl=0;
	int u=0;
	if(q==m)
	return;
	for(i=0;i<m;i++)
	{
		if(adj[i][q]==1)
		col[cl++]=i;
		if(adj[q][i]==1)
		row[rl++]=i;
	}
	if(cl!=0 && rl!=0)
	{
		for(i=0;i<cl;i++)
		{
			u=col[i];
			for(j=0;j<rl;j++)
			{
				adj[u][row[j]]=1;
			}
		}
	}
	warshal(q+1);
}
int main()
{
	int a,b;
	printf("Enter the number of edges: ");
	scanf("%d",&n);
	printf("Enter the number of vertices: ");
	scanf("%d",&m);
	printf("Enter the edges to and from as well as the edge value: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d %d",&a,&b);
		adj[a][b]=1;
	}
	warshal(0);
	printf("The transative closure of the graph is: ");
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			if(adj[i][j]==1)	
			printf("(%d,%d), ",i,j);
		}
	}
}


