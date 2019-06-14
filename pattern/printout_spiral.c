#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
        int j,k=1,a[t][t];
	int m=0,n=0,r=t,c=t,i;
	while(m<r&&n<c)
	{
		for(i=n;i<c;i++)	a[m][i]=k++;
		m++;
		for(i=m;i<r;i++)	a[i][c-1]=k++;
		c--;
		for(i=c-1;i>n;i--)	a[r-1][i]=k++;
		r--;
		for(i=r;i>=m;i--)       a[i][n]=k++;     
		n++;
	}
	for(i=0;i<t;i++)
	{
		for(j=0;j<t;j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}
    return 0;
}
