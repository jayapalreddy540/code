#include<stdio.h>
int main()
{
	int v,e,i,j,v1,v2,k=-1,root;
	printf("enter no of (vertices,edges) : ");
	scanf("%d%d",&v,&e);
	printf("enter edges( , ) between (0-%d) : ",v-1);
	int visited[v]={0},queued[v],A[v][v];
	for(i=0;i<e;i++)
	{
		scanf("%d%d",&v1,&v2);
		A[v1][v2]=1;
	}
	printf("select root node :");
	scanf("%d",&root);
	visited[root]=1;
	queued[++k]=root;

	for(j=0;j<=k;j++)
	{
	 for(i=0;i<v;i++)
     {
       if(A[queued[j]][i]==1&&visited[i]==0)
	   {	
	       queued[++k]=i;
	       visited[i]=1;
	   }
	  
	 }	 
	  printf("%d ",queued[j]);
    }
   return 0;
}
