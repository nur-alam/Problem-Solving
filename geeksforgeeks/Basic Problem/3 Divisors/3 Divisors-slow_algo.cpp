#include<bits/stdc++.h>

using namespace std;

int main(){

    int t;cin>>t;
    long long int n;
    int cnt,divisible;
    while(t--){
        cin>>n;
        cnt = 2,divisible=0;
        while(n!=0){
            for(int i=2; i<=n/2; i++){
                if(n>=1)
                    if(n%i==0) cnt++;
            }
            if(cnt==3) divisible++;
            //cout << n <<" " << cnt << " " << divisible << endl;
            cnt = 2;
            n--;
        }
        cout << divisible<<endl;
    }

    return 0;

}
