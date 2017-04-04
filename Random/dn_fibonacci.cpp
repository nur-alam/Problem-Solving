#include<bits/stdc++.h>

using namespace std;

int arr[100];

int dn_fibonacci(int n)
{
    if(n==0 || n==1)
        return 1;
    else
    {
        if(arr[n]==0)
        {
            arr[n] = dn_fibonacci(n-1) + dn_fibonacci(n-2);
        }
    }
    return arr[n];
}

int main(){

    int n;
    cin>>n;
    cout << dn_fibonacci(n);

    return 0;
}
