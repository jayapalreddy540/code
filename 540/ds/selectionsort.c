#include<stdio.h>
main()
{
	int n,min,a[100],i,j,t=0;
printf("enter no of elements=");
scanf("%d",&n);
printf("enter elements=");
	for(i=0;i<n;i++)
		{
		scanf("%d",&a[i]);
		}
	for(i=0;i<n;i++)
	{
	 min=i;
	 for(j=i+1;j<n;j++)
	  {
	   if(a[j]<a[min])
	     min=j;
   	  }
		t=a[i];
		a[i]=a[min];
		a[min]=t;
	}
printf("after sorting\n");
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
}
