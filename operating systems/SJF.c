#include<stdio.h>
main()
{
int p[10],bt[10],i,ct[10],tat[10],at[10],wt[10],temp,j,n,avgt,avgw,sumt=0,sumw=0,ptemp;ct[0]=0,pt[10];
printf("enter the number of process");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
p[i]=i;
}
printf("enter the burst time");
for(i=1;i<=n;i++)
{
scanf("%d",&bt[i]);
}
printf("enter the arrival time");
for(i=1;i<=n;i++)
{
scanf("%d",&at[i]);
}
printf("enter the priority time");
{
for(i=1;i<=n;i++)
{
scanf("%d",&pt[i]);
}
for(i=1;i<=(n-1);i++)
{
for(j=1;j<=(n-1);j++)
{
if(bt[j]>bt[j+1])
{
temp=bt[j+1];
bt[j+1]=bt[j];
bt[j]=temp;
ptemp=p[j+1];
p[j+1]=p[j];
p[j]=ptemp;
}
}
}
for(i=1;i<=n;i++)
{
ct[i]=ct[i-1]+bt[i];
tat[i]=ct[i]-at[i];
wt[i]=tat[i]-bt[i];
sumt=(sumt+tat[i]);
sumw=(sumw+wt[i]);
}
avgt=(sumt/n);
avgw=(sumw/n);
printf("process \t \t burst time \t tat \t \t  wt");
for(i=1;i<=n;i++)
{
printf("\n p%d \t\t%d \t\t%d \t\t%d",p[i],bt[i],tat[i],wt[i]);
}
printf(" \n \t \t \t avgtat=%d \t avgwt=%d",avgt,avgw);
}
