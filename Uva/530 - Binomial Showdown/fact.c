#include<stdio.h>
int main()
{
    long long n,i,r,fact_n=1,fact_k=1,fact_r=1;
    scanf("%lld",&n);
    int k=n-r;
    for(i=1;i<=n;i++)
    {
        fact_n=fact_n*i;
    }
    printf("%lld\n",fact_n);

    return 0;
}
