#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){

    ll n,m;

        while(scanf("%lld%lld",&n,&m)==2){
            ll num = 1;
            for(int i=0;i<m;i++){
                num = num*(n-i);
            }
            while(num!=0){
                int last_digit = num % 10;
                if(last_digit>0){
                        printf("%d\n",last_digit);
                    break;
                }
                num = num / 10;
            }
        }


    return 0;

}
