#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;


long long int gcd(long long int a, long long int b)
{

    long long temp;

    if(a==0)
        return a;

    else if(b==0)
        return b;

    else if(a<b)
        swap(a,b);

    while( a%b != 0 ){

        temp = a;
        a = b;
        b = temp % b;

    }

    return b;

}

long long int lcm(long long int a, long long int b)
{
    long long int m = abs(a*b);
    return m / gcd(a,b);
}

int main(){

    freopen("in.txt","r",stdin);

    long long int a, b;
    int k;

    scanf("%d",&k);

    while(k--){

        scanf("%lld%lld",&a,&b);

        if(gcd(a,b)==a && lcm(a,b)==b){

            printf("%d %d\n",a,b);

        }

        else{

            printf("-1\n");

        }

    }


    return 0;

}
