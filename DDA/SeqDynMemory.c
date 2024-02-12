#include <stdio.h>
#include <stdlib.h>
#define N 100

struct Graph
{
	struct Node* head[N];
};

struct Node
{
	int dest;
	struct Node* next;
};

struct Edge
{
	int src, dest;
};

struct Graph* createGraph(struct Edge edges[], int n)
{
	int i;
	struct Graph* graph = (struct Graph*)malloc(sizeof(struct Graph));
	for (i = 0; i < N; i++) 
	{
		graph->head[i] = NULL;
	}
	for (i = 0; i < n; i++) 
	{
		int src = edges[i].src;
		int dest = edges[i].dest;
		struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
		newNode->dest = dest;
		newNode->next = graph->head[src];
		graph->head[src] = newNode;
	}
	return graph;
}
int adj_mat()
{
	int m,n,a,b,c,i,j,adj[100][100];
	printf("Type of graph\n1.Directed\n2Undirected\nEnter:");
	scanf("%d",&c);
	if(c!=1 && c!=2)
	{
		printf("The choice is wrong");
		return 0;
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			adj[i][j]=0;
		}
	}
	printf("Enter the number of edges: ");
	scanf("%d",&n);
	printf("Enter the number of vertices: ");
	scanf("%d",&m);
	printf("Enter the edges in e-->e order\n");
	for(i=0;i<n;i++)
	{
		scanf("%d %d",&a,&b);
		adj[a][b]=1;
		if(c==2)
		adj[b][a]=1;
	}
	printf("The adjacency matrix is:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d ",adj[i][j]);
		}
		printf("\n");
	}
	return 0;
}
void printGraph(struct Graph* graph)
{
	int i;
	for (i = 0; i < N; i++)
	{
		struct Node* ptr = graph->head[i];
		while (ptr != NULL)
		{
			printf("(%d --> %d)\t", i, ptr->dest);
			ptr = ptr->next;
		}
		printf("\n");
	}
}
int main()
{
	int a,b,m,n,i,j;
	struct Edge edges[100];
	printf("Graph using sequential memory allocation:\n");
	adj_mat();
	printf("Graph using dynamic memory allocation:\n");printf("Enter the number of edges:");
	scanf("%d",&n);
	printf("Enter the number of vertices:");
	scanf("%d",&m);
	printf("Enter the edges in d-->d format:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d %d",&edges[i].src,&edges[i].dest);
	}
	struct Graph *graph = createGraph(edges, n);
	printf("The graph is:\n");
	printGraph(graph);
	return 0;
}

