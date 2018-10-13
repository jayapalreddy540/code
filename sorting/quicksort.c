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
    p=f; i=f; j=l;
    while(i<j)
    {
        while(A[i]<=A[p]&&i<l) i++;
        while(A[j]>A[p]) j--;
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
