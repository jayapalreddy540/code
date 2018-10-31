#include<stdio.h>
main()
{
int m,n,i,a[100],s,x=0;
printf("enter no of numbers ");
scanf("%d",&n);
printf("enter elements ");
for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
printf("enter a value to be searched ");
scanf("%d",&s);
n=n-1;
while(x<=n)
{
	m=(x+n)/2;
		if(s>a[m])
		{
			x=m+1;
		}
		else if(s<a[m])
		{
			n=m-1;
		}else {printf("found\n");break;}
}
if(x>n)
printf("not found");
 }
