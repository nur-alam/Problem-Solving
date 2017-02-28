#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,tt=1;
    cin>>t;
    while(tt<=t)
    {
        long long n,a=0,b= 1,x= 0;
        cin >> n;
        n=n%300;cout << n << endl;
        if(n==0)
            {
                x=0;
            }
        if(n==1)
        {
            x=1;
        }
        for (int i=2;i<=n;i++)
        {
            cout << i << " " << a << " " << b << endl;
            x = (a+b)%100;
            a=b;
            b = x;
            cout << i << " " << a << " " << b << endl;
        }
        cout << endl;
        cout << endl;
        if((x/10)==0)
                cout<<0<<x<<endl;
        else{
                cout<<x<<endl;
            }
            tt++;
        }

    return 0;
}

