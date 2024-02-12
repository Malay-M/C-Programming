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
				arr[j+1][0]=t2; t3=arr[j][1];
				arr[j][1]=arr[j+1][1];
				arr[j+1][1]=t3;
			}
		}
	}
}

int findPresence(int edge[100][3],int f,int m)
{
	int c=-1,i=0,j=0;
	for(i=0;i<m;i++)
	{ 
		for(j=0;j<2;j++)
		{
			if(edge[i][j]==f) c=i;
		}
	}
	if(c==-1)
	return 1; else
	return 0;
}

int main()
{	
	int iedge[100][3],oedge[100][3], i,j,n,m,c=0, sum=0, sv=0,dv=0; 
	printf("Enter the number of edges: "); scanf("%d",&n);
	printf("Enter the number of vertices: "); scanf("%d",&m);
	printf("Enter the edges with source--destination--weight:\n" ); 
	for(i=0;i<n;i++)
	{
		scanf("%d--%d--%d",&iedge[i][0],&iedge[i][1], &iedge[i][2]);
	}
	sort(iedge,n); 
	oedge[0][0]=iedge[0][0]; 
	oedge[0][1]=iedge[0][1]; 
	oedge[0][2]=iedge[0][2]; 
	sum=oedge[0][2]; 
	c=i=1; 
	while(c<m-1)
	{
		sv=dv=0;
		for(i=0;i<n;i++)
		{ 
			sv=findPresence(oedge,iedge[i][0],c); 
			dv=findPresence(oedge,iedge[i][1],c); 
			if((sv==1 && dv==0)||(sv==0 && dv==1))
			{ 
				oedge[c][0]=iedge[i][0]; 
				oedge[c][1]=iedge[i][1]; 
				oedge[c][2]=iedge[i][2];
				sum+=oedge[c][2];
				++c; 
				break;
			}
		}
	}
	printf("The path followed is: \n");
	for(i=0;i<m-1;i++)
	{
		printf("%d--%d--%d\n" ,oedge[i][0],oedge[i][1], oedge[i][2]);
	}
	printf("The sum of the mst is: %d",sum);
}


