#include<stdio.h>
main()
{
int n,a[n],*p,i;
printf("number of elements=");
scanf("%d",&n);
printf("enter elements=");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
p=a;
while(n--)
{printf(" %d",*p);
p=p+1;
}
}
