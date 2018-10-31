#include<stdio.h>
main()
{
int i,a[10],s=0;
printf("enter elements=");
for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
for(i=0;i<10;i++)
	{
		if(a[i]>s)
		s=a[i];
	}
printf("maximum=%d",s);
}
