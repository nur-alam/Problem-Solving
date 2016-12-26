#include<bits/stdc++.h>

using namespace std;

int fact(int n){
    /*int fact = 1;
    for(int i=2;i<=n;i++){
        fact = fact * i;
    }
    return fact;*/
    if(n>1)
        return  n*fact(n-1);
    else
        return 1;
}

int main(){

    int n,m;

    while(true){
        cin >> n >> m;
        int num = fact(n)/fact(n-m);
        cout << num << " ";
        int i;
        while(num!=0){
            int last_digit = num % 10;
            if(last_digit>0){
                cout << last_digit << endl;
                break;
            }
            num = num / 10;
        }
    }

    return 0;

}
