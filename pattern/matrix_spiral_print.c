#include<stdio.h>
int main()
{
	int r=4,c=4;
	int A[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
	int m=0,n=0,i;
         
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
