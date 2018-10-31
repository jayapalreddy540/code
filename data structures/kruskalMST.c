#include<stdio.h> 
#include<stdlib.h>
#define MAX 20 
void Read_Edge(void);
void kruskals(void);
struct edge 
{ 
 int src,dst,wt; 
}; 
struct edge e[MAX]; 
int nv,ne;

main() 
{ 
 Read_Edge(); 
 kruskals(); 
// getch(); 
 return 0;
} 

void Read_Edge(void) 
{ 
 int i; 
 printf("\nEnter number of vertices: "); 
 scanf("%d",&nv); 
 printf("\nEnter number of edges: "); 
 scanf("%d",&ne); 
 for(i=1;i<=ne;i++) 
 { 
  printf("\nEnter edge %d adacency vertices details and its weight: ",i); 
  scanf("%d%d%d",&e[i].src,&e[i].dst,&e[i].wt); 
 } 
} 

void kruskals(void)
{ 
 int i,j,vn[MAX],count=0,connected[MAX],dcc=0,total_cost=0;
 struct edge temp; 
 for(i=1;i<=nv;i++)
 { 
  vn[i]=0;
  connected[i]=0; 
 } 
 for(i=1;i<ne;i++)
  for(j=i+1;j<=ne;j++) 
   if(e[i].wt>e[j].wt) 
   { 
    temp=e[i];
    e[i]=e[j];
    e[j]=temp;
   } 
   for(i=1;i<=ne && count<nv-1;i++) 
   { 
    if((vn[e[i].src]==1&&vn[e[i].dst]==1&&connected[e[i].src]==connected[e[i].dst])||e[i].src==e[i].dst)
     continue; 
    total_cost+=e[i].wt; 
    vn[e[i].src]=vn[e[i].dst]=1; 
    printf("\n%d-%d::%d",e[i].src,e[i].dst,e[i].wt); 
    count++; 
    if(connected[e[i].src]==0&&connected[e[i].dst]==0) 
     connected[e[i].src]=connected[e[i].dst]=++dcc; 
    else if(connected[e[i].src]!=connected[e[i].dst])
    { 
     for(j=1;j<=nv;j++) 
     { 
      if(connected[e[i].dst]==connected[j]&&e[i].dst!=j) 
       connected[j]=connected[e[i].src];
     } 
     connected[e[i].dst]=connected[e[i].src];
    }
   }
    printf("\nThe minimum cost spanning Tree of a given graph is %d\n",total_cost); 
}
  
