/* Quick sort 
  Time Complexity : O(n^2) in Worst Case
                    O(nlogn) in best Case
			But we find more situations in worst case
		In case of sorted input it takes O(n^2) because it gets partitioned at the start or end of the list everytime.
		It increases the depth of the recursion
		
		To avoid these situtions little bit choose the pivot as middle element of list or a random element
		but still all cases aren't this way
		 
		So merge sort is better than quicksort in these cases as it maintain O(nlogn) as average case
*/  

#include<stdio.h>
int partition(int [],int,int);
void quicksort(int [],int,int);
int main()
{
    int i;
    int A[10]={9,4,1,0,3,4,6,2,8,9};
    quicksort(A,0,9);
    for(i=0;i<10;i++)
        printf("%d ",A[i]);

}

void quicksort(int A[],int f,int l)
{
    if(f<l)
    {
        int s= partition(A,f,l);
        quicksort(A,f,s-1);
        quicksort(A,s+1,l);
    }
}

int partition(int A[],int f,int l)
{
  int p,i,j,temp;
    p=f;   // pivot as first element
    // p=l; //pivot as last element
	 i=f; j=l;
    while(i<j)
    {
        while(A[i]<=A[p]&&i<l) i++;
        while(A[j]>A[p]&&j>f) j--;
        if(i<j)
        {
            temp=A[i];
            A[i]=A[j];
            A[j]=temp;
        }
    }
    temp=A[p];
    A[p]=A[j];
    A[j]=temp;
    return j;
}
