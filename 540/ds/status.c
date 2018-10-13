#include<stdio.h>
main()
{
int a[100],n,i,s,t;
printf("enter no of elements=");
scanf("%d",&n);
			for(i=0;i<n;i++)
			{
			 scanf("%d",&a[i]);
			}

for(i=0;i<n;i++)
{
	while(a[i]==a[i+1])
	{
		i++;
	if(i==n-1)
{	printf("equal") exit(0) ;
	}
			 if(a[i+1]>a[i])
			 {
  				   i++;
	        		s:
  				if(i==n-1){printf("ascending order");exit (0);}
				else  if(a[i+1]>a[i])
				 {	i++;
					goto s;}
				
				else  {printf("random order");exit (0);}
			 }	
			else
			{
				  i++;
				t:
  				if(i==n-1){printf("descending order");exit (0); }
				else if(a[i+1]<a[i])
 				 {	i++;
					goto t;}
				else
				{printf("random order");exit (0);}	


			 }
}}
