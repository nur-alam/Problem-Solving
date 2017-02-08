#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,t,n,k,max,min;
    int arr[100];
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0; i<n; i++)
        {
          cin>>k;
          arr[i] = k;
        }
        max = arr[0], min = arr[0];
        for(i=0; i<n; i++)
        {
            if(max<arr[i]){
                max = arr[i];
            }
            if(min>arr[i]){
                min = arr[i];
            }
        }
        cout << max << " " << min << endl;
    }

    return 0;
}
