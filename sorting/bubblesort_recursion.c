#include<stdio.h>
#include<stdlib.h>

int comparator (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

void binarySearch(int *a,int l,int h,int key)
{
	if(l<h)
	{
		int low=l,high=h;
		int mid=(low+high)/2;
		if(a[mid]==key)
		    {
		    	printf("key found at %d position",mid+1);
		    	return;
			}
		else if(a[mid]>key) high=mid--;
		else low=mid++;
		return binarySearch(a,low,high,key);
   }
   else printf("key not found");	
}

int main()
{
	int n,key,i;
	printf("number of elements: ");
	scanf("%d",&n);
	int *a=(int *)malloc(n*sizeof(int));
	printf("\nenter %d elements : ",n);
	for(i=0;i<n;i++)
	  scanf("%d",&a[i]);
	printf("\nenter key to be searched : ");
	scanf("%d",&key); 
	  qsort(a, n, sizeof(int), comparator); 
	 
	binarySearch(a,0,n-1,key);
	return 0;
}



