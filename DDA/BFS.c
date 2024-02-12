#include <stdio.h>
int adj[100][100],v[100],q[100],f=-1,r=-1,m,n,size;
void nqueue(int e)
{
	if(r+1==size)
	{
		printf("Overflow");
	}
	else 
	if(f==r && r==-1)
	f=r=0;
	else
	++r;
	q[r]=e;
}
int dqueue()
{
	int y;
	if(f==-1 || f>r)
	printf("Underflow");
	else
	{
		y=q[f];
		if(f==r)
		f=r=-1;
		else
		++f;
	}
	return y; 
}
int isEmpty()
{
	if(f==-1 && r==-1)
	return 1;
	else
	return 0;
}
void bfs()
{
	int j,r;
	if(isEmpty())
	return;
	r=dqueue();
	printf("%d-> ",r);	
	for(j=0;j<m;j++)
	{
		if(adj[r][j]==1 && !v[j])
		{
			nqueue(j);	
			v[j]=1;
		}
	}
	bfs();
}
int main()
{
	int a,b,i,j,e;
	printf("Enter the number of edges: ");
	scanf("%d",&n);
	printf("Enter the number of vertices: ");
	scanf("%d",&m);
	size=m;
	printf("Enter the edges in i-->j format:\n");	
	for(i=0;i<n;i++)
	{
		scanf("%d %d",&a,&b);
		adj[a][b]=1;	
	}
	for(i=0;i<m;i++)
	{
		v[i]=0;
	}
	printf("Enter the root element: ");
	scanf("%d",&e);
	printf("The result of bfs is: ");
	v[e]=1;
	nqueue(e);
	bfs();
}

