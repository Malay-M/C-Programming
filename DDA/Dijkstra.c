#include <stdio.h>
int adj[100][100],d[100],v[100],u[100],pi[100],m,n,i;
int unvisited()
{
	int c=0;
	for(i=0;i<m;i++)
	{
		if(u[i]==1)
		c++;
	}
	return c;
}
int nextNode(int e)
{
	int c=0;
	for(i=0;i<m;i++)
	{
		if(adj[e][i]!=0 && u[i]==1)
		c++;
	}
	return c;
}
void dijkstra(int e)
{
	int min=9999,mini=-1;
	int temp=0;
	v[e]=1;
	printf("%d, ",e);
	u[e]=0;
	if(unvisited()==0)
	return;
	if(nextNode(e)==0)
	{
		for(i=0;i<m;i++)
		{
			if(u[i]==1 && min>d[i])
			{	
				min=d[i];
				mini=i;
			}
		}
	}
	else
	{
		for(i=0;i<m;i++)
		{
			if(adj[e][i]!=0 && v[i]==0)
			{
				temp=d[e]+adj[e][i];
				if(temp<d[i])
				{
					d[i]=temp;
					pi[i]=e;
				}
				if(d[i]<min)
				{
					min=d[i];
					mini=i;	
				}
			}
		}
	}
	dijkstra(mini);
}
int main()
{
	int a,b,c,e;
	printf("Enter the number of edges: ");
	scanf("%d",&n);
	printf("Enter the number of vertices: ");
	scanf("%d",&m);
	printf("Enter the edges to and from as well as the edge value: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d %d %d",&a,&b,&c);
		adj[a][b]=c;
	}
	printf("Enter the starting vertex: ");
	scanf("%d",&e);
	for(i=0;i<m;i++)
	{
		d[i]=999;
	}
	d[e]=0;
	for(i=0;i<m;i++)
	{
		u[i]=1;		
		pi[i]=-1;
		v[i]=0;
	}
		dijkstra(e);
}

