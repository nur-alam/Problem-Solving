#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n , i;
        cin>>n;
        int arr[n] , k;
        for( i=0; i<n; i++)
        {
            cin>>k;
            arr[i] = k;
        }
        for(i=i-1;i>0;i--)
            cout << arr[i] << " ";
        cout << arr[i] << endl;
    }
    return 0;
}
