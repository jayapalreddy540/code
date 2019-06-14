#include<stdio.h>
#include<stdlib.h>
int main()
{
    int t;
    scanf("%d",&t);
    int i,j;
    int A[t][t];
    for(i=0;i<t;i++)
    {
        for(j=0;j<t;j++)
            scanf("%d",&A[i][j]);
    }
    int r=t,c=t;
    int m=0,n=0;
         
    while(m<r&&n<c)
    {
        for(i=n;i<c;i++)
            printf("%d ",A[m][i]);
        m++;
        for(i=m;i<r;i++)
            printf("%d ",A[i][c-1]);
        c--;
        for(i=c-1;i>n;i--)
            printf("%d ",A[r-1][i]);
        r--;
        for(i=r;i>=m;i--)
            printf("%d ",A[i][n]);
        n++;
    }
    return 0;
}