#include<bits/stdc++.h>

using namespace std;

int main(){

    int a[3],k;

    int kase = 0;

    cin >> k;

    while(k--){

        cin >> a[0] >> a[1] >> a[2];

        sort(a,a+3);

        cout<<"Case "<< ++kase << ": " << a[1] <<endl;

    }

    return 0;

}
