#include<stdio.h>
int max[100][100];
int alloc[100][100];
int need[100][100];
int avail[100];
int n,r;
void input();
void show();
void cal();
int main()
{
 int i,j;
 printf("algorithm begins ");
 input();
 show();
 cal();
 return 0;
}


void input()
{
 int i,j;
 printf("enter the no of process \n");
 scanf("%d",&n);
 printf("enter the no of process instance \t");
 scanf("%d",&r);
 printf("enter the max matrix \n");
for(i=0;i<n;i++)
{
 for(j=0;j<r;j++)
 {
  scanf("%d",&max[i][j]);
 }
}
printf("enter the alloc matrix");
for(i=0;i<n;i++)
 {
  for(j=0;j<r;j++)
  {
   scanf("%d",&alloc[i][j]);
  }
 }
 printf("enter the available resource  \n");
 for(i=0;j<r;j++)
 {
  scanf("%d",&avail[j]);
 }
}

void show()
{
 int i,j;
 printf("process \t allocation \t max \t availabLE \t");
 for(i=0;i<n;i++)
 {
  printf("\n p %d\t",i+1);
  for(j=0;j<r;j++)
   {
     printf("%d",alloc[i][j]);
   }
   printf("\t");
  for(j=0;j<r;j++)
  {
   printf("%d",max[i][j]);
  }
  if(i==0)
  {
   for(j=0;j<r;j++)
  printf("%d",avail[j]);
  }
 }
}


void cal()
{
 int finish[100],temp,flag=1,need[100][100],k,c1=0;
 int safe[100];
 int i,j;
 for(i=0;i<n;i++)
 {
  finish[i]=0;
 }
 for(i=0;i<n;i++)
 {
  for(j=0;j<r;j++)
  {
   need[i][j]=max[i][j]-alloc[i][j];
  }
 }
printf("\n");
while(flag)
{
 flag=0;
 for(i=0;i<n;i++)
  {
   int c=0;
   for(j=0;j<r;j++)
   {
    if((finish[i]==0) && (need[i][j]<=avail[j]))
    {
     c++;
     if(c==r)
     {
      for(k=0;k<r;k++)
      {
       avail[k]+=alloc[i][j];
        finish[i]=1;
        flag=1;
      }
      printf(" p%d->",i);
      if(finish[i]==1)
      {
       i=n;
      }
    }
   }
  }
 }
}
for(i=0;i<n;i++)
{
 if(finish[i]==1)
 {
  c1++;
  }
 else
 {
   printf("p %d-->",j);
 }
}
if(c1==n)
{
 printf(" \n safe state");
}
else
{
 printf("\n process is dead lock");
 printf("unsafe state");
}

}