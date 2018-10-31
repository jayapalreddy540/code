#include<stdio.h>
main()
{
int i,n,x,y,a[100];
printf("enter no of elements=");
scanf("%d",&n);
printf("enter values=");
for(i=0;i<n;i++)
 {
 scanf("%d",&a[i]);
 } 
for(i=0;i<n-1;i++)
{
if(a[i]==a[i+1])
  continue;
if(a[i+1]>a[i])
x=1;
else if(a[i+1]<a[i])
y=1;
}
if(x==1&&y==1)
{
printf("random order");
exit(0);
}
else if(x==1&&y!=1)
printf("ascending order");
else if(x!=1&&y==1)
printf("descending order");
}
