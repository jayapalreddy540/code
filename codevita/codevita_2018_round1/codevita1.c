#include<stdio.h>
int main()
{

    const unsigned int M = 1000000007;
    int t,i,k;
    unsigned long long  p,n,j;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%llu%d",&n,&k);
        unsigned long long  A[k];
        for(i=0;i<k;i++)
            scanf("%llu",&A[i]);

        for(j=0;j<n-k;j++)
        {
            p=1;
            for(i=0;i<k;i++)
            {
              p=(p*A[i])%M;
              A[i]=A[i+1];
              //printf("%d ",A[i]);
            }
          A[i-1]=p;
          //printf("\n%lld \n",p);
        }
        printf("%llu\n",A[k-1]);
    }
    return 0;
}
