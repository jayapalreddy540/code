/*   Merge Sort
     Time Complexity : O(nlogn) average,best,worst case
     Memory          : on arrays O(n) , on linked lists it has constant space
     
     It is stable (doesn't change the order of equal items)
     "merge to the temp array and copy to main array"
     
*/
#include<stdio.h>
int split(int [],int,int);
int merge(int [],int,int,int);
int temp[10];
int main()
{
	int i;
    int A[10]={9,4,1,0,3,4,6,2,8,9};
    split(A,0,9);
    for(i=0;i<10;i++)
        printf("%d ",A[i]);
	return 0;
}

int split(int A[],int f,int l)
{
  int m;
 if(f<l)
 {
   m=(f+l)/2;
  split(A,f,m);
  split(A,m+1,l); 
  merge(A,f,m,l);
 }
}

int merge(int A[],int f,int m,int l)
{
 int i,j,k;
 for(i=f,j=m+1,k=0;i<=m&&j<=l;k++)
 {
  if(A[i]<A[j])
   temp[k]=A[i++];
  else
   temp[k]=A[j++];
 }
 while(i<=m)
  temp[k++]=A[i++];
 while(j<=l)
  temp[k++]=A[j++];
 k=0;
 for(i=f;i<=l;i++)
  A[i]=temp[k++];
} 
