#include<stdio.h>
#include<stdlib.h>
#define MAX 999

main()
{
  int n,m,v,u,wt,pred[10],op[10],i,j,ct=0,sum=0,min,cost[10][10],dist[10];
  int known[10],mi;
  printf("\n enter number of vertices:");
  scanf("%d",&n);
 for(i=1;i<=n;i++)
  {
    known[i]=0;
    pred[i]=0;
    dist[i]=MAX;
    for(j=1;j<=n;j++)
      cost[i][j]=0;
   }

 printf("\n enter no of edges:");
 scanf("%d",&m);
 printf("\n enter the adjacency details of each edge");
 for(i=1;i<=m;i++)
  {
    printf("\n enter %d edge adjacency and its cost",i);
    scanf("%d%d%d",&u,&v,&wt);
    cost[u][v]=cost[v][u]=wt;
  }
    printf("enter initial vertex=");
    scanf("%d",&v);
    dist[v]=0;
    known[v]=1;
    ct=1;
    pred[v]=0;
    op[ct]=v;
    min=MAX;
    for(i=1;i<=n;i++)
    {
       if(cost[i][v]!=0)
        {
           pred[i]=v;
           dist[i]=cost[i][v];
            if(min>cost[i][v])
             {
               min=cost[i][v];
               mi=i;
             }
        }
    }
   known[mi]=1;
   ct++;
   v=mi;
   op[ct]=v;
   while(1)
   {
     min=MAX;
     for(i=1;i<=n;i++)
     {
       if(cost[v][i]!=0&&known[i]!=1&&dist[i]>cost[v][i])
         {
           dist[i]=cost[v][i];
           pred[i]=v;
         }
     }
     for(i=1;i<=n;i++)
     {
       if(known[i]!=1&&min>dist[i])
         {
           min=dist[i];
           v=i;
         }
     }
    known[v]=1;
     ct++;
     op[ct]=v;
    if(ct==n)
       break;
  }
 printf("\n the visited edges as per PRIM'S algorithm:");
 printf("\n vertex-vertex:cost");
 for(i=2;i<=n;i++)
  {
   printf("\n V%d-V%d :%d",pred[op[i]],op[i],cost[op[i]][pred[op[i]]]);
   sum+=cost[op[i]][pred[op[i]]];
  }
 printf("\n minimal spanning tree of a given graph is :%d",sum);
}
    

