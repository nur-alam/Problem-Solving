#include<stdio.h>
int main()
{
    int i,n,r;
    unsigned long long combi;
    while(scanf("%d%d",&n,&r))
    {
        combi=1;
        if(r>n/2)
            r=n-r;
        if(n==0 && r==0)
            break;
        for(i=0;i<r;i++)
        {
            combi=combi*(n-i);
            combi=combi/(i+1);
        }
        printf("%llu\n",combi);
    }

    return 0;
}
