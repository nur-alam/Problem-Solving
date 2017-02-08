#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,k,i;
    int arr[100];
    cin>>t;
    while(t--)
    {
        cin>>n;
        int sum = 0;
        for(i=0; i<n; i++)
        {
            cin>>k;
            sum+=k;
        }
        cout << sum << endl;
    }
    return 0;
}
