#include<bits/stdc++.h>
#include<string.h>

using namespace std;

// checking prime or not
int isPrime(int n)
{
    if(n==2)
        return 1;
    else{
        bool chk = true;
        for(int i=2; i<n; i++)
        {
            if(n%i==0)
            {
                chk = false;
                break;
            }
        }
        if(chk)
            return 1;
        else
            return 0;
    }
}

int main()
{

    int t,n,k,i,count;
    cin>>t;

    while(t--)
    {
        cin>>n>>k;
        count = 0;
        for(i=2; i<=n; i++)
        {
            if(n%i==0 && isPrime(i))
            {
                n /= i;
                if(++count==k)
                {
                    break;
                }
                i--;
            }
        }

        if(count==k)
            cout << i << endl;
        else
            cout << -1 << endl;

    }

    return 0;

}
