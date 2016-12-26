#include<cstdio>
using namespace std;
int main(){

    long long a,b,c;
    while(scanf("%lld %lld",&a,&b) == 2){
        c=a-b;
        if(c<0){
                c=c*(-1);
        }
        printf("%lld\n",c);
    }

    return 0;
}
