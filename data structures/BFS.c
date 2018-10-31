#include<stdio.h>
#include<stdlib.h>
//#include<conio.h>
int cost[10][10],qu[10],visited[10],printed[10],i,j,k,n,v,front=0,rear=0;

main()
{
   int m;
   printf("\n enter no of vertices :");
   scanf("%d",&n);
   printf("\n enter no of edges :");
   scanf("%d",&m);
   printf("\n enter the adjacent vertices of each EDGE \n");
   for(k=1;k<=m;k++)
   {
     printf("\n enter the adjacency vertices of EDGE %d\n",k);
      scanf("%d%d",&i,&j);
    cost[i][j]=cost[j][i]=1;
   }
    printf("\n enter initial vertex ");
    scanf("%d",&v);
    printf("\n the BFS ORDER OF VISITED VERTICES ARE :");
     printf("%5d",v);
    printed[v]=1;
    k=1;
     while(k<n)
     {
      for(j=1;j<=n;j++)
        if(cost[v][j]!=0&&printed[j]!=1&&visited[j]!=1)
         {
           visited[j]=1;
            qu[rear++]=j;
         }
      v=qu[front++];
      printf("%5d",v);
       k++;
      printed[v]=1;
     }
    return 0;
 }
