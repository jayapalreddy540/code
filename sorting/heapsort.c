/* 		Min Heap Sort using Array
	Time Complexity : O(nlogn) 
	space           : constant
	
	unstable sorting algorithm
*/

  
#include<stdio.h>
void heapify(int [],int,int);
int main()
{
	int i;
	 int A[] = {12, 11, 13, 5, 6, 7,1,56,3,10};
	 int n=sizeof(A)/sizeof(int);
	 //call max heapify on the heap 
	 for(i=n/2-1;i>=0;i--)
	    heapify(A,n,i);
	//extract one by one from heap
	 for(i=n-1;i>=0;i--)
	 {
	 	//move current node to end
	 	int temp=A[0];
	 	A[0]=A[i];
	 	A[i]=temp;
	 	//call max heapify on the reduced heap
	 	heapify(A,i,0);
	 }
	 for(i=0;i<n;i++)
	  printf("%d ",A[i]);
	return 0;
}

void heapify(int A[],int n,int i)
{
	int largest=i;
	int l=2*i+1;
	int r=2*i+2;
	if(l<n&&A[largest]<A[l]) largest=l;
	if(r<n&&A[largest]<A[r]) largest=r;
	if(largest!=i)
	{
		int temp=A[i];
		A[i]=A[largest];
		A[largest]=temp;
		//recursively heapify the affected sub-tree
		heapify(A,n,largest);
	}
}
