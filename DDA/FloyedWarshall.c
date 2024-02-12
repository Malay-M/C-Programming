#include <stdio.h>
int adj[100][100],m,n,i,j;
void assign(int temp[][100])
{
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			adj[i][j]=temp[i][j];	
		}
	}
}
void floydWarshal(int q)
{
	int tmp[100][100];
	if(q==m)
	return;
	for(i=0;i<m;i++)
	{
		tmp[q][i]=adj[q][i];	
		tmp[i][q]=adj[i][q];	
	}
	for(i=0;i<m;i++)
	{
		if(i==q)
		continue;
		for(j=0;j<m;j++)
		{	
			if(j==q)
			continue;
			if(adj[i][j]>(adj[i][q]+adj[q][j]))
			tmp[i][j]=adj[i][q]+adj[q][j];
			else
			tmp[i][j]=adj[i][j];
		}	
	}
	assign(tmp);
	floydWarshal(q+1);
}	
int main()
{
	int a,b,c;
	printf("Enter the number of edges: ");
	scanf("%d",&n);
	printf("Enter the number of vertices: ");
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			adj[i][j]=9999;
			if(i==j)
			adj[i][j]=0;
		}
	}
	printf("Enter the edges along with edge weight: \n");
	for(i=0;i<n;i++)
	{	
		scanf("%d %d %d",&a,&b,&c);
		adj[a][b]=c;
	}
	floydWarshal(0);
	printf("The adjacency matrix is: \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d ",adj[i][j]);
		}
		printf("\n");
	}
}

