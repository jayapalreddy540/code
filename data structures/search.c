#include<stdio.h>
main()
{
int n,i,a[100],s,x=0;
printf("enter no of numbers ");
scanf("%d",&n);
printf("enter elements ");
for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
printf("enter a value to be searched ");
scanf("%d",&s);
for(i=0;i<n;i++)
	{
		if(a[i]==s)
		{
		printf("element found\n");x=1;
		break; 
		}
	}
if(x==0)
printf("not found\n");
}

