#include<stdio.h>
main()
{
int n,a[n],i,j,t;
printf("enter no of elements=");
scanf("%d",&n);
printf("enter elements=");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n-1;i++)
{
j=i+1;
  while(j>0&&a[j]<a[j-1])
  {
    t=a[j-1];
    a[j-1]=a[j];
    a[j]=t;
   j--;
  }
}
for(i=0;i<n;i++)
printf(" %d",a[i]);
 }
