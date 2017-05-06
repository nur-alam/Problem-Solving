#include <iostream>
using namespace std;
// C++ program to find gcd
int gcd(int a, int b)
{
    int gcd , temp;

    if( a==0 ) gcd = b;
    else if( b==0 ) gcd = a;
    else{
        while( b!=0 )
        {
            temp = b;
            b = a % b;
            a = temp;
        }
        gcd = a;
    }

    return gcd;
}

int main()
{
    int a , b;
    cin>>a>>b;

    cout << gcd(a,b);

    return 0;
}
