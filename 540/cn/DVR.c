#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#define INF 999
int V;
void floydWarshall(int[V][V]);
void printSolution(int[V][V],int[V][V]);
void printpath(int[V][V],int,int);

void main()
{
	int i,j;
	printf("enter no of vertices = ");
	scanf("%d",&V);
	int dist[V][V];
	for(i=0;i<V;i++)
	{
		for(j=0;j<V;j++)
		{
			printf("\nenter distance from vetex %d to %d  (-1 for infinity) : ",i,j);
			scanf("%d",&dist[i][j]);
			if(dist[i][j]==-1)
			  dist[i][j]=INF;
			if(i==j&&dist[i][j]!=0) 
			{
				printf("NEGATIVE CYCLE..");
				exit(0);
			}
		}
    }
    floydWarshall(dist);
    return;
}

void floydWarshall(int dist[V][V])
{
	int temp[V][V],path[V][V],i,j,k;
	
	for(i=0;i<V;i++)
	 for(j=0;j<V;j++)
	   {
	     temp[i][j]=dist[i][j];
	     if(i==j) path[i][j]=0;
	     else if(temp[i][j]!=INF) path[i][j]=i;
	     else path[i][j]=-1;
	   }
	
	for(k=0;k<V;k++)
	{
		for(i=0;i<V;i++)
		{
			for(j=0;j<V;j++)
			{
				if(temp[i][k]!=INF&&temp[k][j]!=INF&&temp[i][k]+temp[k][j]<temp[i][j])
				 {
				 	temp[i][j]=temp[i][k]+temp[k][j];
				    path[i][j]=path[k][j];
				 }
			}
		}
	}
	printSolution(temp,path);
}

void printSolution(int op[V][V],int p[V][V])
{
	int i,j;
	for(i=0;i<V;i++)
	 {
	   for(j=0;j<V;j++)
	   {
          if(op[i][j]<INF)
		    {
			 printf("%7d",op[i][j]);
		    }
		  else printf("%7s","INF");
       }
    	printf("\n");
    }
    for(i=0;i<V;i++)
	 {
	   for(j=0;j<V;j++)
	   {
	   	if(i!=j&&p[i][j]!=-1)
	   	   {
			printf("path from %d to %d : ",i,j); 
			printf("%d->",i);
			printpath(p,i,j);
			printf("%d\n",j);
		   }
	   }
     }
    return;
}

void printpath(int p[V][V],int i,int j)
{
	if(p[i][j]==i) return;
	printpath(p,i,p[i][j]);
	printf("%d->",p[i][j]);
}
