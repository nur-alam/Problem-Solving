#include<stdio.h>
int main()
{
    int Total,n,k;
    while(scanf("%d %d",&n,&k)==2 && k>1)
    {
        Total=n;
        while(n>=k)
        {
            Total=Total+(n/k);
            n=(n/k)+(n%k);
        }
        printf("%d\n",Total);
    }

    return 0;
}
