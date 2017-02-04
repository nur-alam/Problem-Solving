#include<bits/stdc++.h>

using namespace std;

// define long long int
#define ll long long int

ll small_factorial(int n){
    if(n==1 || n==0){
        return 1;
    }else{
        return n*small_factorial(n-1);
    }
}

int main(){

    ll n,t;
    cin>>t;
    while(t--){
        cin>>n;
        cout<<small_factorial(n)<<endl;
    }

    return 0;
}
