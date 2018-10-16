/*
    finding Permutation 
    nPr=n!/(n-r)!
*/

#include<stdio.h>
long long fact(int);
int main()
{
	int n=10,r=2;
	long long p;
	p=fact(n)/fact(n-r);
	printf("%lld",p);
}

long long fact(int n)
{
	long long i,f=1;
	for( i=n;i>1;i--)
		f=f*i;
	return f;
}
