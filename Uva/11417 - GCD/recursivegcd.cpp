#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

int gcd(int a, int b)
{

    if(b==0)
        return a;

    if(a<b)
        swap(a,b);

    int r = a % b;

    return gcd( b , r );

}

int main(){

    int a, b;

    scanf("%d%d",&a,&b);

    printf("%d",gcd(a,b));

    return 0;

}
