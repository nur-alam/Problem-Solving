#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;


long long int gcd(long long int a, long long int b)
{

    long long int temp;

    while( b != 0 && a>0){

        temp = b;
        b = a % b;
        a = temp;

    }

    return a;

}

long long int lcm(long long int a, long long int b)
{
    long long m = a*b;
    return m / gcd(a,b);
}

int main(){

    freopen("in.txt","r",stdin);

    long long int a, b, G, L;
    int k;

    scanf("%d",&k);

    while(k--){

        scanf("%lld%lld",&a,&b);

        if(gcd(a,b)==a && lcm(a,b)==b){

            printf("%lld %lld\n",a,b);

        }

        else{

            printf("-1\n");

        }

    }

    return 0;

}
