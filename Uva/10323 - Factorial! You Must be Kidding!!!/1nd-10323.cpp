#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;

int main(){
    int i,n;
    while(cin>>n){
        double fact = 1;
        if(n<8){
            cout << "Underflow!" << endl;
        }
        else if(n>13){
            cout << "Overflow!" << endl;
        }
        else{
            for(i=2;i<=n;i++){
                fact = fact * i;
            }
            cout << fact << endl;
        }
    }
    return 0;
}
