#include<stdio.h>
int split(int [],int,int);
int merge(int [],int,int,int);
int n,a[10];
main()
{
int i;
 printf("enter no of elements=");
 scanf("%d",&n);
 printf("enter elements before sorting=");
 for(i=0;i<n;i++)
  scanf("%d",&a[i]);
split(a,0,n-1);
 printf("after sorting=");
 for(i=0;i<n;i++)
  printf(" %d",a[i]);
}

int split(int a[],int l,int h)
{
  int m;
 if(l<h)
 {
   m=(l+h)/2;
  split(a,l,m);
  split(a,m+1,h); 
  merge(a,l,m,h);
 }
}

int merge(int a[],int l,int m,int h)
{
 int i,j,k,temp[n];
 for(i=l,j=m+1,k=0;i<=m&&j<=h;k++)
 {
  if(a[i]<a[j])
   temp[k]=a[i++];
  else
   temp[k]=a[j++];
 }
 while(i<=m)
  temp[k++]=a[i++];
 while(j<=h)
  temp[k++]=a[j++];
k=0;
 for(i=l;i<=h;i++)
  a[i]=temp[k++];
} 
