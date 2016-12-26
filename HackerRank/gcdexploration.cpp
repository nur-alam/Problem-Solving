#include<bits/stdc++.h>

using namespace std;

long long int gcd(long long int a, long long int b){
    if(a==0)
        return b;
    else if(b==0)
        return a;
    else{
        while(b!=0){
            long long int t = b;
            b = a % b;
            a = t;
        }
        return a;
    }
}

int main(){

    string num;
    string fnum;
    string lnum;
    long long int a,b,i,c,d;
    cin >> num;
    cin >> a >> b;
    for(i=1;i<=a;i++){
         fnum = fnum + num;
    }
    for(i=1;i<=b;i++){
        lnum = lnum + num;
    }
    c = atoi(fnum.c_str());
    d = atoi(lnum.c_str());
    cout << gcd(c,d) << endl;

    return 0;

}
