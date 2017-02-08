#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int i;
        string s;
        cin>>s;
        int alpha[27] = {0};

        for(i=0; s[i]; i++)
        {
            alpha[s[i]-97]++;
        }

        int max=0,repeatChar;
        for(i=0; i<25; i++)
        {
            if(alpha[i]>max)
            {
               max = alpha[i];
               repeatChar = i;
            }
        }

        cout << char(repeatChar+97) << endl;

    }
}
