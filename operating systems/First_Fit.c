#include<stdio.h>
int  main()
{
 int fragment[20],b[10],p[20],i,j,temp,nb,np;
 static int barray[20],parray[20];
 printf("\n\t\tmemory management scheme - first fit");
printf("\n enter the no of blocks");
scanf("%d",&nb);
printf("enter no.of processes:");
scanf("%d",&np);
printf("\n enter the size of the blocks: \n");
for(i=1;i<=nb;i++)
{
printf("block no: %d",i);
scanf("%d",&b[i]);
}
printf("\n enter the size of processes:\n");
for(i=1;i<=np;i++)
{
printf("process no %d",i);
scanf("%d",&p[i]);
}
for(i=1;i<=np;i++)
{
for(j=1;j<=nb;j++)
{
if(barray[j]!=1)
{
temp=b[j]-p[i];
if(temp >=0)
{
parray[i]=j;
break;
}
}
}
fragment[i]=temp;
barray[parray[i]]=1;
}
printf("\n process\tprocess size\t block no\t blocksize\t fragment");
for(i=1;i<=np && parray[i]!=0;i++)
{
printf("\n %d\t\t%d\t\t%d\t\t%d\t\t %d",i,p[i],parray[i],b[parray[i]],fragment[i]);
}
}
