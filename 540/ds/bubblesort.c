#include<stdio.h>
main()
{
	int n,a[100],i,j,t=0;
printf("enter no of elements=");
scanf("%d",&n);
printf("enter elements=");
	for(i=0;i<n;i++)
		{
		scanf("%d",&a[i]);
		}
	for(i=0;i<n;i++)
	{
	 for(j=0;j<n-1;j++)
	  {
	   if(a[j]>a[j+1])
           {
		t=a[j];
		a[j]=a[j+1];
		a[j+1]=t;
	    }
	  }
	}
printf("after sorting\n");
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
}
