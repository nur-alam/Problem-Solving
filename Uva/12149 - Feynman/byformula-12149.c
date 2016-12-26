#include<stdio.h>

int main()
{

    int n,sum;
    while(scanf("%d",&n))
    {
        if(n==0)
            return 0;
        sum = 0;
        sum = (n*(n+1)*(2*n+1))/6;
        printf("%d\n",sum);
    }

    return 0;

}
