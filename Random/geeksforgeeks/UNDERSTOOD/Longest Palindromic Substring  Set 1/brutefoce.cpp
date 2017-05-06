
#include <bits/stdc++.h>
using namespace std;

int print(string a,int n)
{
    int Lim = pow(2.0,n);
    for(int i=1; i < Lim; i++)
    {
        for(int j=0; j < n; j++)
        {
            if(i&(1<<j))
            {
                printf("%c", a[j]);
            }
        }
        printf("\n");
    }
    cout << endl;
    return Lim;
}

int main()
{
    string s = "abcd";
    cout << print(s, s.length());
}
