#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int t , i , n;
    char str[101];
    cin >> t;

    for(i=0; i<t; i++)
    {
        cin>>str;
        int last_char = str[strlen(str)-1];
        int last_digit = last_char - 48;

        if(last_digit%2==0)
            cout << "even" << endl;
        else
            cout << "odd" << endl;
    }

    return 0;

}
