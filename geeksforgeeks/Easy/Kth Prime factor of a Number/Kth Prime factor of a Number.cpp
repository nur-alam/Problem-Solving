#include<bits/stdc++.h>
#include<string.h>

using namespace std;

// initialize a global string
string s;

void prime_factor(int n)
{
    int i;
    // Print the number of 2s that divide n
    while(n%2 == 0)
    {
        s += 2 + '0';
        n = n / 2;
    }

    // n must be odd at this point. So we can skip one element (Note i = i+2)
    for(i = 3; i <= sqrt(n); i = i+2)
    {
        // while i divides n, print i and divide n = n/i
        while(n%i == 0)
        {
            s += i + '0';
            n = n/i;
        }
    }
    // This condition is to handle the case when n is
    // a prime number greater than 2
    if(n > 2)
    {
        s += n + '0';
    }
}

int main()
{

    int t,n,k;
    cin>>t;

    while(t--)
    {
        cin>>n>>k;
        s.clear();

        prime_factor(n);

        if(s[k-1])
            cout << s[k-1] - '0' << endl;
        else
            cout << -1 << endl;
    }

    return 0;

}
