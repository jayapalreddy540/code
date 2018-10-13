#include<stdio.h>
main()

{
int i,j,k,pf=0,count[10],rs[25],m[10],flag[25],next=1,n,f,min;
printf("\n enter the length of reference string--");
scanf("%d",&n);
printf("enter the reference string");
for(i=0;i<n;i++)
{
scanf("%d",&rs[i]);
flag[i]=0;
}
printf("\n enter no of frames--");
scanf("%d",&f);
for(i=0;i<f;i++)
{
count[i]=0;
m[i]=-1;
}
printf("\n the page replacment process is");
for(i=0;i<n;i++)
{
for(j=0;j<f;j++)
{
if(m[j]==rs[i])
{
flag[i]=1;
count[j]=next;
next++;
}
}
if(flag[i]==0)
{
if(i<f)
{
m[i]=rs[i];
count[i]=next;
next++;
}
else
{
min=0;
for(j=1;j<f;j++)
if(count[min]>count[j])
min=j;
m[min]=rs[i];
count[min]=next;
next++;
}
pf++;
}
for(j=0;j<f;j++)
printf("\t%d",m[j]);
if(flag[i]==0)
printf("\tpf np:%d",pf);
printf("\n");
}
printf("\n the numberof page faults using lru are%d",pf);
}

