#include<stdio.h>
 main()
{
int fragment[20],b[20],p[20],i,j,temp,nb,np,highest=0;
static int barray[20],parray[20];
printf("\n\t\t\t memory management scheme worst fit \n");
printf("enter no of memory blocks:");
scanf("%d",&nb);
printf("enter the no of process \n");
scanf("%d",&np);
printf("\n enter the size of the blocks\n");
for(i=1;i<=nb;i++)
{
printf("block no %d:",i);
scanf("%d",&b[i]);
}
printf("\n enter the size of the process\n ");
for(i=1;i<=np;i++)
{
 printf("process no :%d:",i);
 scanf("%d",&p[i]);
}
for(i=1;i<=np;i++)
{
 for(j=1;j<=nb;j++)
 {
   if(barray[j]!=1)
    {
    temp=b[j]-p[i];
     if(temp>=0)
     {
      if(highest<temp)
     {
        parray[i]=j;
        highest=temp;
     }
    }
  }
 }
fragment[i]=highest;
barray[parray[i]]=1;
highest=0;
}
printf("\n process no \t process size\t block no\t block size\t fragment");
for(i=1;i<=np&&parray[i]!=0;i++)
{
 printf("\n%d\t\t%d\t\t%d\t\t%d\t\t%d",i,p[i],parray[i],b[parray[i]],fragment[i]);
}
}

