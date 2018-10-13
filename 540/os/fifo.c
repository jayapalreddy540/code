#include<stdio.h>
main()

{
int i,j,k,pf=0,count=0,rs[25],m[10],n,f;
printf("\n enter the length of reference string--");
scanf("%d",&n);
printf("enter the reference string");
for(i=0;i<n;i++)
scanf("%d",&rs[i]);
printf("\n enter no of frames--");
scanf("%d",&f);
for(i=0;i<f;i++)
m[i]=-1;
printf("\n the page replacment process is");
for(i=0;i<n;i++)
{
for(k=0;k<f;k++)
{
if(m[k]==rs[i])
break;
}
if(k==f)
{
m[count++]=rs[i];
pf++;
}
for(j=0;j<f;j++)
printf("\t%d",m[j]);
if(k==f)
printf("\tpf np:%d",pf);
printf("\n");
if(count==f)
count=0;
}
printf("\n the numberof page faults using fifo are%d",pf);
}

