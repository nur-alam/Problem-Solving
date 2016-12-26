#include<stdio.h>

int main()
{
    int i,n,sum;
    while(scanf("%d",&n))
    {
        sum = 0;
        if(n==0)
            return 0;
        for(i=1; i<=n; i++)
        {
            sum = sum + (i*i);
        }
        printf("%d\n",sum);
    }
    return 0;
}
