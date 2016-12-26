#include<stdio.h>
using namespace std;
int main()
{
    long long i,n,a,b,dif;
    scanf("%lld",&n);
    for(i=0;i<n;i++){
            scanf("%lld%lld",&a,&b);
            dif=a-b;
            if(dif<0){
                dif=dif*-1;
            }
            printf("%lld\n",dif);
    }

    return 0;
}

