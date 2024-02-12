#include <stdio.h>
int adj[100][100],v[100],q[100],level[100],f=-1,r=-1,m,n,size;
void nqueue(int e)
{	
	if(r+1==size)
	{
		printf("Overflow");
	}
	else if(f==r && r==-1)
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
	for(j=0;j<m;j++)
	{
		if(adj[r][j]==1 && !v[j])
		{
			nqueue(j);
			level[j]=level[r]+1;
			v[j]=1;
		}	
	}
	bfs();
}
int findLevel()
{
	int l=0,i;
	for(i=0;i<m;i++)
	{
		if(level[i]>l)
		l=level[i];
	}	
	return l;
}
int main()
{
	int a,b,i,j,e,k,l;
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
	v[e]=1;
	level[e]=0;
	nqueue(e);
	bfs();
	l=findLevel()+1;
	if(l%2==0)
	{
		k=l/2;
	}
	else
	k=(l+1)/2;
	printf("l=%d\n",l);
	printf("k=%d\n",k);
	printf("The partition of graph with break level at %d:\n",k);
	printf("Group 1: ");
	for(i=0;i<k;i++)
	{
		for(j=0;j<m;j++)
		{
			if(level[j]==i)
			printf("%d ",j);
		}
	}
	printf("\nGroup 2: ");
	for(i=k;i<l;i++)
	{
		for(j=0;j<m;j++)
		{
			if(level[j]==i)
			printf("%d ",j);
		}
	}
}

