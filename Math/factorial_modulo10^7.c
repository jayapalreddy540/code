#include<stdio.h>
unsigned long long factorial(int );
main()
{
 printf("%llu",factorial(1000111));
}
unsigned long long factorial(int n)
{
    const unsigned int M = 1000000007;
   int i;
    unsigned long long f = 1;
    for (i = 1; i <= n; i++)
        f = (f*i) % M;  // Now f never can
                        // exceed 10^9+7
    return f;
}
