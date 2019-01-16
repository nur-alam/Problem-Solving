#include<bits/stdc++.h>

using namespace std;

bool isPerfect(long long int n)
{
    long long int sum = 1;
    for(long long int i=2; i*i<=n; i++)
    {
        if(n%i==0)
        {
            if(i*i!=n)
                sum = sum + i + n/i;
            else
                sum+=i;
        }
    }
    if(sum==n && n!=1)
        return true;

    return false;

}

int main(){
    int t;cin>>t;long long int n;
    while(t--){
        cin>>n;
        if(isPerfect(n))
            cout << "1" << endl;
        else
            cout << "0" << endl;
    }

    return 0;

}
