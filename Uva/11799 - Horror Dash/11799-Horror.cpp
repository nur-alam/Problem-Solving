#include<bits/stdc++.h>

using namespace std;

int main(){

    int tCase,n,c,max,i,kase=0;

    cin >> tCase;

    while(tCase--){

        max = 0;

        cin >> n;

        for(i=1;i<=n;i++){

            cin >> c;

            if(max < c)
                max = c;

        }

        cout << "Case " << ++kase << ": " << max << endl;

    }

    return 0;

}
