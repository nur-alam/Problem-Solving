#include<iostream>

#include<cstdio>

using namespace std;

int main(){

    freopen("in.txt","r",stdin);

    int k,cases=1;

    cin >> k;

    while(k--){

        char str[11];

        int matches=0,i=0;

        cin >> matches;

        int B=0,W=0,T=0,A=0;

        cin >> str;

        for(i=0; i<matches; i++){

            if(str[i]=='B')
                B++;

            else if(str[i]=='W')
                W++;

            else if(str[i]=='T')
                T++;

            else if(str[i]=='A')
                A++;

        }

        if((B+A==matches)&& B!=0)
            cout << "Case " << cases << ": BANGLAWASH" << endl;

        else if((W+A==matches) && W!=0)
            cout << "Case " << cases << ": WHITEWASH" << endl;

        else if(A==matches)
            cout << "Case " << cases << ": ABANDONED" << endl;

        else if(B>W)
            cout << "Case " << cases << ": BANGLADESH " << B << " - " << W << endl;

        else if(B<W)
            cout << "Case " << cases << ": WWW " << W << " - " << B << endl;

        else if(B==W)
            cout << "Case " << cases << ": DRAW " << B << " " << T << endl;

        cases++;

    }

    return 0;

}
