#include<iostream>

using namespace std;

int main(){

    int fact=1,n,i,k,t;

    while((cin >> n)!=EOF){

        for(i=1;i<=n;i++){
            fact = fact * i;
        }

        cout << fact << endl;

    }

    return 0;

}
