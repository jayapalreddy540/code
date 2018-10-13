#include<stdio.h>
main()
{
int i,a[10],s=0,j;
printf("enter elements=");
for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
for(i=0;i<10;i++)
	{
	for(j=0;j<9-i;i++)
	{
	if(a[+1]>>a[j])
		a[j]=a[j+1];
	}
	}
for(i=0;i<10;i++)
printf("%d\n",a[i]);
}
