
#include<stdio.h>
#include<limits.h>		/* this header file deals with sizes of datatypes */
#include<stdbool.h>
int V;
void dijkstra(int [][V],int);
int minDistance(_Bool [],int[]);
void printSolution(int[]);


int main()
{
	int n,i,j;
	printf("enter no of vertices : ");
	scanf("%d",&V);
	int graph[V][V];
	for(i=0;i<V;i++)
	 {
	 	for(j=i;j<V;j++)
	 	{
	 		if(i==j) { graph[i][j]=0; continue; } 
	 		printf("enter weight for edge(%d,%d) :",i,j);
	 		scanf("%d",&graph[i][j]);
	 		graph[j][i]=graph[i][j];
		 }
	 }	 
	
     
           for(i=0;i<V;i++)
             {
             	printf("minimum distances of vertices from vertex %d\n",i);
			   dijkstra(graph,i);
		     }
   return 0;
}

void dijkstra(int graph[V][V],int src)
{
	
	int dist[V],i,j;     /* holds the distances from source to respective vertex */
	_Bool sptSet[V];  /* holds the vertices whose minimum  distances from source are finalized */
	
	for(i=0;i<V;i++)
	{
		dist[i]=INT_MAX; 	/*initilizing all distances to infinity */ 
		sptSet[i]=false;	/*initialising all vertices in set to false as distance from source to respective vertex is not finalized */
	}
	
	dist[src]=0;       /*  src distance(itself) is zero  */
	
	for(i=0;i<V;i++)
	{
		int u=minDistance(sptSet,dist);
		sptSet[u]=true;      
		for(j=0;j<V;j++)
		{
			if(sptSet[j]==false && graph[u][j]!=0 && dist[u]!=INT_MAX && dist[u]+graph[u][j]< dist[j])
			{
				dist[j]=dist[u]+graph[u][j];  /* assigning least distance from source as of now */
			}

		}
	}
	 printSolution(dist);
}

int minDistance(_Bool sptSet[],int dist[])
{
	int min=INT_MAX,min_index,i;   /* INT_MAX is highest value for integer according from <limits.h> */
	for(i=0;i<V;i++)
	{
		if(sptSet[i]==false && dist[i]<=min)
		   {
		   	min=dist[i]; min_index=i;
		   }
	}
	return min_index;   /* returning the index of adjacent vertex  which as least minimum distance */
}

void printSolution(int dist[])
{
	int i;
	printf("vertex  |  distance \n");
	for(i=0;i<V;i++)
	  printf("%d\t\t%d\n",i,dist[i]);
}
