
//https://www.geeksforgeeks.org/dijkstras-shortest-path-algorithm-greedy-algo-7/

// A C++ program for Dijkstra's single source shortest path algorithm for Undirected graph.
// The program is for adjacency matrix representation of the grap


#include<stdio.h>
#include<limits.h>		/* this header file deals with sizes of datatypes */
#include<stdbool.h>
//#define V 9   /* for static input mentioned in main() */
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
	 		if(i==j) { graph[i][j]=0; continue; } /* self */
	 		printf("enter weight for edge(%d,%d) :",i,j);
	 		scanf("%d",&graph[i][j]);
	 		graph[j][i]=graph[i][j];
		 }
	 }
	 
	 //  or 
	 /*  int graph[V][V]={{0, 4, 0, 0, 0, 0, 0, 8, 0},{4, 0, 8, 0, 0, 0, 0, 11, 0},{0, 8, 0, 7, 0, 4, 0, 0, 2},{0, 0, 7, 0, 9, 14, 0, 0, 0},
	 						{0, 0, 0, 9, 0, 10, 0, 0, 0},{0, 0, 4, 14, 10, 0, 2, 0, 0},{0, 0, 0, 0, 0, 2, 0, 1, 6},
	 					 {8, 11, 0, 0, 0, 0, 1, 0, 7},{0, 0, 2, 0, 0, 0, 6, 7, 0}};
     */  
     printf("select a source node(0-%d)",V-1);
     scanf("%d",&n);
     dijkstra(graph,n);
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
		int u=minDistance(sptSet,dist); /* finding adjacent vertex with minimum distance which is not in sptSet */
		sptSet[u]=true;      /* mark the u vertex as processed */
		
      /* updating the distances of adjacent vertices of processed vertex */		
		for(j=0;j<V;j++)
		{
			/* sptSet[j]==false --> the vertex should not be part of finalised distance of vertex from source (sptSet)
			   graph[u][j]!=0   --> the vertex j should be connected with vertex u
			   dist[u]!=INT_MAX --> for the source vertex as all its adjacent vertices is infinity at first
			   dist[u]+graph[u][j]<dist[v] ---> checking  least distance of vertex j from source as of now   
			*/ 
			if(sptSet[j]==false && graph[u][j]!=0 && dist[u]!=INT_MAX && dist[u]+graph[u][j]< dist[j])
			{
				dist[j]=dist[u]+graph[u][j];  /* assigning least distance from source as of now */
			}

		}
	  			 //printSolution(dist);
			 /*if you want to see step by step procedure uncomment above line*/
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
	printf("distances from source vertex :\n");
	printf("vertex  |  distance \n");
	for(i=0;i<V;i++)
	  printf("%d\t\t%d\n",i,dist[i]);
}
