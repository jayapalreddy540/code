#include<stdio.h>
//#include<conio.h>
#include<stdlib.h>
#define MAX 20
int adj[MAX][MAX];
int nv,ne;
void Read_Edge(void);
void Display(void);

void Read_Edge(void)
{
 int i,j,src,dst,ch,wt;
 printf("\n INput information for adjacency matrix :");
 printf("\n Enter number of vertices");
 scanf("%d",&nv);
 for(i=1;i<=nv;i++)
  for(j=1;j<=nv;j++)
    {
       printf("Enter adjacency details between vertex V%d to V%d :",i,j);
       scanf("%d",&wt);
       adj[i][j]=wt;
    }
}

void Display(void)
{
  int i,j;
   printf("\n adjacency matrix of a graph is :");
   for(i=1;i<=nv;i++)
      printf(" %d",i);
  printf("\n");
   for(i=1;i<=nv;i++)
      printf("------");
  for(i=1;i<=nv;i++)
   {
     printf("\n");
     printf("%d|.",i);
     for(j=1;j<=nv;j++)
      {
       printf("%d ",adj[i][j]);
      }
   }
}


int main()
{
  Read_Edge();
  Display();
//  getch();
  return 0;
}
