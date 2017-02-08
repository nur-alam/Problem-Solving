#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,t,n,sum;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        sum = 0;
        for(i=0; i<s.size(); i++)
        {
            sum += s[i]-'0';
            //cout << sum << " ";
        }
        cout << sum << endl;
    }
}
