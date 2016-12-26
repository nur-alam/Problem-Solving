#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;


int gcd(int a, int b)
{

    int temp;

    if(a<b)
        swap(a,b);

    while( a%b != 0 ){

        temp = a;
        a = b;
        b = temp % b;

    }

    return b;

}

int lcm(int a, int b)
{
    int m = abs(a*b);
    return m / gcd(a,b);
}

int main(){

    int a, b;

    scanf("%d%d",&a,&b);

    printf("%d\n",gcd(a,b));

    printf("%d\n",lcm(a,b));

    return 0;

}
