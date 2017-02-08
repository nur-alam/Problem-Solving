#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    int i,t,n;
    ll fact;
    cin>>t;
    while(t--)
    {
        cin>>n;
        fact = 1;
        for(i=1; i<=n; i++)
        {
            fact*=i;
        }
        cout << fact << endl;
    }
}
