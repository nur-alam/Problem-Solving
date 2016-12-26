#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;

int main(){

    int tCase,i,n,d,s,sum,mid;

    int a[3000];

    cin >> tCase;

    while(tCase--){

        cin >> n;

        for(i=1; i<=n; i++)
            cin >> a[i];

        sort(a,a+n+1);

        if(n%2==0){

            d = n/2;
            mid = a[d];

        }

        else{

            d = (n/2)+1;
            mid = a[d];

        }

        sum = 0;

        for(i=1; i<=n; i++){

            s = abs(mid - a[i]);
            sum = sum + s;

        }

        cout << sum << endl;

    }

    return 0;

}




