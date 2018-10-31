#include<stdio.h>
int main()
{
 int i,j,sum=0,n,d[20],disk,temp,max,dloc;
 printf("enter no of locations:");
 scanf("%d",&n);
 printf("\nenter the position of head : ");
 scanf("%d",&disk);
 printf("enter the elements of disk queue : ");
 for(i=0;i<n;i++)
 {
  scanf("%d",&d[i]);
 }
 d[n]=disk;
 n=n+1;
 for(i=0;i<n;i++)
 {
  for(j=i;j<n;j++)
  {
   if(d[i]>d[j])
    {
     temp=d[i];
     d[i]=d[j];
     d[j]=temp;
    }
  }
 }
 max=d[n];
 for(i=0;i<n;i++)
 {
  if(disk==d[i])
   {
     dloc=i;
     break;
   }
  }
   for(i=dloc;i>=0;i--)
   {
     printf("%d-->",d[i]);
   }
  
  printf("\n0-->");
 for(i=dloc+1;i<n;i++)
 {
   printf("%d-->",d[i]);
 }
 sum=disk+max;
 printf("sum:%d disk:%d max:%d\n",sum,disk,max);
 printf("movement of total cylinders %d",sum);
return 0;
}
