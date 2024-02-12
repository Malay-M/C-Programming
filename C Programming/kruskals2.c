#include<stdio.h>

struct edge{
    int source;
    int weight;
    int destination;
};
typedef struct edge Edge;

void main()
{
    int i,j,k,m,no_of_edge=0;
    int graph[5][5]={
        {-1,2,1,-1,-1},
        {2,-1,2,4,-1},
        {1,2,-1,5,5},
        {-1,4,5,-1,2},
        {-1,-1,5,2,-1}
    };
    int vertices=5;
    Edge edges[100];
    for(i=0,k=0;i<vertices;i++)
    {
        for(j=0;j<vertices;j++)
        {
            if(graph[i][j]!=-1)
            {
                int flag=0;
                for(m=0;m<no_of_edge;m++)
                {
                    Edge e=edges[m];
                    if(e.source==j && e.destination==i)
                    {
                        flag=1;
                        break;
                    }
                }

                if(flag==0)
                {
                    Edge new_edge;
                    new_edge.source=i;
                    new_edge.destination=j;
                    new_edge.weight=graph[i][j];
                    edges[k++]=new_edge;
                    no_of_edge++;
                }
            }
        }
    }

    Edge temp;
    int n=no_of_edge;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(edges[j].weight>edges[j+1].weight)
            {
                temp=edges[j];
                edges[j]=edges[j+1];
                edges[j+1]=temp;
            }
        }
    }


    printf("Kruskals shortest path\n");
    for(i=0;i<vertices-1;i++)
    {
        printf("\n%d->%d",edges[i].source,edges[i].destination);
    }

    int path[100];
    for(i=0;i<vertices;i++)
    {
        path[i]=i;
    }
}