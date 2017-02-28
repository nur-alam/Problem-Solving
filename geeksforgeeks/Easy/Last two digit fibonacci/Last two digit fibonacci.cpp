#include<iostream>

using namespace std;

#define ll long long int

ll fact(int n)
{
    ll i , fact , fact1 , fact2;
    if(n==0)
        return 0;
    else if(n==1 || n==2)
        return 1;
    else{
        fact = 0;
        fact1 = 0;
        fact2 = 1;
        for(i=1; i<n; i++)
        {
            fact = fact1 + fact2;
            fact1 = fact2;
            fact2 = fact;
        }
        return fact;
    }
}

int main()
{
    ll t , n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll output = fact(n);
        if(output<10)
            cout << 0 << output << endl;
        else
            cout << fact(n) << endl;
    }
    return 0;
}
