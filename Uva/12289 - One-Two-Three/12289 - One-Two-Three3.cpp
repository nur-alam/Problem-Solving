#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;

int main(){

    freopen("criticalinput.txt","r",stdin);

    int tc;

    cin>>tc;

    while(tc--)
    {
        char s[10];
        cin>>s;

        if( strlen(s)>3 )
            cout << 3 << endl;

        else{

            int count = 0;

            if( s[0]=='o' )
                count++;

            if( s[1]=='n' )
                count++;

            if( s[2]=='e' )
                count++;

            if( count>=2 )
                cout << 1 << endl;

            else
                cout << 2 << endl;

        }
    }

    return 0;

}
