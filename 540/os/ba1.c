#include<stdio.h>
struct file
{
  int all[10];
int max[10];
int need[10];
int flag;
};
main()
{
  struct file f[10];
   int fl;
    int i,j,k,p,b,n,r,g,cnt=0,id,newr;
    int avail[10],seq[10];
printf("Enter the number of Process ..");
scanf("%d",&n);
printf("Enter the numebr of resorces..");
scanf("%d",&r);
for(i=0;i<n;i++)
{
  printf("Enter details for P%d:",i);
  printf("\n Enter Alloccation \t ..\t");
  for(j=0;j<r;j++)
   scanf("%d",&f[i].all[j]);
  printf("Enter Max \t\t..\t");
  for(j=0;j<r;j++)
   scanf("%d",&f[i].max[j]);
  f[i].flag=0;
}
printf("Enter Available Resources\t..\t");
for(i=0;i<r;i++)
 scanf("%d",&avail[i]);
printf("\n Enter New Request Details...");
printf("Enter pid \t..\t");
scanf("%d",&id);
printf("Enter the REquest for REseources\t..\t");
for(i=0;i<r;i++)
{
  scanf("%d",&newr);
f[id].all[i]+=newr;
avail[i]=avail[i]-newr;
}
for(i=0;i<n;i++)
{
  for(j=0;j<r;j++)
{
  f[i].need[j]=f[i].max[j]-f[i].all[j];
if(f[i].need[j]<0)
  f[i].need[j]=0;
}
}
cnt=0;
fl=0;
while(cnt!=n)
{
  g=0;
for(j=0;j<n;j++)
{
  if(f[j].flag==0)
{
  b=0;
 for(p=0;p<r;p++)
{
  if (avail[p]>=f[j].need[p])
   b=b+1;
else
b=b-1;
}
if(b==r)
{
  printf("\n P%d is visited ",j);
seq[fl++]=j;
f[j].flag=1;
for(k=0;k<r;k++)
  avail[k]=avail[k]+f[j].all[k];
cnt=cnt+1;
printf("(");
for(k=0;k<r;k++)
  printf("%3d",avail[k]);
printf(")");
g=1;
}
}
}
if(g==0)
{
  printf("\nRequest not granted ...Dead Lock occurred");
printf("\n System in unsafe");
goto y;
}
}
printf("\n System inSAFE");
printf("\n The safe Sequence is ...");
for(i=0;i<fl;i++)
  printf("P%d ",seq[i]);
printf(")");
y: printf("\n Process \t\tAllocation MAx\t\tNeed\n");
for(i=0;i<n;i++)
{
   printf("P%d \t",i);
for(j=0;j<r;j++)
printf("%6d",f[i].all[j]);
for(j=0;j<r;j++)
  printf("%6d",f[i].max[j]);
for(j=0;j<r;j++)
  printf("%6d",f[i].need[j]);
printf("\n");
}
}


