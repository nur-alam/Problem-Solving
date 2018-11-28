#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[5] = {0};
        int k = n;
        int p;

        while(n--)
        {
            cin>>p;
            arr[p-1]++;
            for(int i=0; i<k; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }

        for(int i=0; i<k; i++)
        {
            cout << arr[i] << " ";
        }

        cout << endl;
    }

    return 0;

}
