#include<stdio.h>
main()
{
int a[100],i,j,n,c=0;
printf("enter no of values=");
scanf("%d",&n);
printf("enter elements=");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
 for(j=0;j<n;j++)
 {
  if(i==j)
    continue;
  if(a[i]==a[j])
    {c++;break;}
 }
}
if((c/2)>=2)
{
 printf("YES\n");
 exit(0);
}

if((c/2)<2)
printf("NO\n");
}
  

