/*
    finding Combination 
    nCr=n!/((n-r)!r!)
*/

#include<stdio.h>
long long fact(int);
int main()
{
	int n=20,r=10;
	long long c;
	c=fact(n)/(fact(n-r)*fact(r));
	printf("%lld",c);
}

long long fact(int n)
{
	long long i,f=1;
	for( i=n;i>1;i--)
		f=f*i;
	return f;
}
