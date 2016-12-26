#include<stdio.h>
int main()
{
    long long n,i,r,fact_n=1,fact_k=1,fact_r=1;
    scanf("%lld%lld",&n,&r);
    long long k=n-r;
    for(i=1;i<=n;i++)
    {
        fact_n=fact_n*i;
    }
     for(i=1;i<=k;i++)
    {
        fact_k=fact_k*i;
    }
    for(i=1;i<=r;i++)
    {
        fact_r=fact_r*i;
    }
    printf("%lld\n",fact_n);
    printf("%lld\n",fact_k);
    printf("%lld\n",fact_r);

    long long npr=fact_n/fact_k;
    long ncr=npr/fact_r;

    printf("%lld\n",npr);
    printf("%lld",ncr);

    return 0;
}
