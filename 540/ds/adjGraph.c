#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 20
int adj[MAX][MAX];
int nv,ne;
void Read_Edge(void);
void Display(void);

void Read_Edge(void)
{
 int i,j,src,dst,ch,wt;
 printf("\n(I) for unlabelled graphs give 1(as weight) for adjacent vertices\n");
 printf("\n for labelled graphs give weight of adjacency vertices\n");
 printf("\n(II) for undirected graphs i-j adjacency treated as j-i adjacency");
 printf("\n Enter number of vertices");
 scanf("%d",&nv);
 printf("Enter no of edges");
 scanf("%d",&ne);
 for(i=1;i<=nv;i++)
  for(j=i;j<=nv;j++)
    {
       adj[i][j]=adj[j][i]=0;
    }
  printf("\n is this adjacency matrix for direc

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
     printf("%d ",i);
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
