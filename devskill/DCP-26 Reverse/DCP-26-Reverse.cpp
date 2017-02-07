#include<bits/stdc++.h>
#include<string.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    getchar();
    while(t--)
    {
        string s;
        getline(cin,s);
        reverse( s.begin() , s.end() );
        cout<< s << endl;
    }
    return 0;
}
