#include<stdio.h>
main()
{
	int n,max,a[100],i,j,t=0;
printf("enter no of elements=");
scanf("%d",&n);
printf("enter elements=");
	for(i=0;i<n;i++)
		{
		scanf("%d",&a[i]);
		}
	for(i=0;i<n;i++)
	{
	 max=i;
	 for(j=i+1;j<n;j++)
	  {
	   if(a[j]>a[max])
	     max=j;
   	  }
		t=a[i];
		a[i]=a[max];
		a[max]=t;
	}
printf("after sorting\n");
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
}

