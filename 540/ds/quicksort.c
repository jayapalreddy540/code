#include<stdio.h>
void qs(int [],int,int);
int n,a[10];
main()
{
 int i;
 printf("enter no of elements=");
 scanf("%d",&n);
 printf("enter elements=");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 qs(a,0,n-1);
 printf("sorted list =");
 for(i=0;i<n;i++)
  printf("%d ",a[i]);
}


void qs(int a[],int l,int h)
{
 int pivot,i,j,t;
  i=l;j=h;
  if(i<j)
  {
   pivot=i;
   while(i<j)
    {
     while(a[i]<=a[pivot]&&i<h)
     {
       i++;
     }
     while(a[j]>=a[pivot]&&j>l)
     {
       j--;
     }
    if(i<j)
     {
      t=a[i];
      a[i]=a[j];
      a[j]=t;
     }
    } 
   t=a[j];
   a[j]=a[pivot];
   a[pivot]=t;
  qs(a,l,j-1);
  qs(a,j+1,h);
 }
}
