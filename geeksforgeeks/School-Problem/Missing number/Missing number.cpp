#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,i,k,sum,inputSum;
    cin>>t;

    while(t--)
    {
        cin>>n;
        sum=0,inputSum=0;

        for(i=0; i<=n; i++)
            sum+=i;

        for(i=0; i<n-1; i++)
        {
            cin>>k;
            inputSum+=k;
        }

        cout << abs(sum-inputSum) << endl;

    }

    return 0;

}
