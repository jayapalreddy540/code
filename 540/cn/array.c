#include<stdio.h>
int * append(int);
int n,i,a[100],b[100],ct=0;
main()
{
  int *p;
 printf("enter size of array");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
   scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++)
 {
   if(a[i]==1)
   {
      ct++;
     if(ct==5)
      {
        p=append(i);
        for(i=0;i<100;i++)
            a[i]=*(p+i);
        ct=0;
      }
   }
 }
  printf("\nbits:");
  for(i=0;i<100;i++)
    printf("%d ",a[i]);
}

int *  append(int j)
{
  int k;
   for(i=0;i<100;i++)
      b[i]=a[i];
  b[j+1]=0;
  for(k=j+1;k<n;k++)
  {
    b[k+1]=a[k];
  }
     return b;

}
  
 
