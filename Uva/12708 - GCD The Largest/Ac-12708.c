#include<stdio.h>

int main()
{

    long long int i;
    int n;

    scanf("%d",&n);

    while(n--)
    {
        scanf("%lld",&i);

        if(i%2!=0)
        {
            i--;
        }

        printf("%lld\n",i>>1);
    }

    return 0;

}
