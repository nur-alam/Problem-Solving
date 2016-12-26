#include<stdio.h>
int main()
{
    int n,r,i,j,k,npr,fact_r;
    while(scanf("%d%d",&n,&r))
    {
        npr=1,fact_r=1;
        for(i=n;i>r;i--)
        {
            npr=npr*i;
        }
        for(i=1;i<=r;i++)
        {
            fact_r=fact_r*i;
        }
        printf("%d\n",npr);
        printf("%d\n",fact_r);
        printf("%d\n",npr/fact_r);
    }
    return 0;
}
