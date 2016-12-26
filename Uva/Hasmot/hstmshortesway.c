#include<cstdio>

using namespace std;

int main()
{
    long long a,b,dif;

    scanf("%lld%lld",&a,&b);

    dif=a-b;

    if(dif<0){

        dif=dif*-1;

    }

    printf("%lld\n",dif);

    return 0;

}
