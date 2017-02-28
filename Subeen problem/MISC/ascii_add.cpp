#include<iostream>

using namespace std;

int main()
{
    int t , i , n;

    string str;
    cin>>t;

    for(i=0; i<t; i++)
    {
        cin>>str;
        int add = 0;
        for(int j=0; j<str.size(); j++)
        {
            add = add + str[j];
        }
        cout << add << endl;
    }

    return 0;
}
