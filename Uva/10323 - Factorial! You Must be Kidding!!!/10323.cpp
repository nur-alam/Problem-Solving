#include<iostream>

using namespace std;

int main(){

    int n,i;

    while((cin >> n)){
        double fact = 1;
        for(i=2;i<=n;i++){
            fact = fact * i;
        }
        if(fact<10000){
            cout << "Underflow!" << endl;
        }
        else if(fact > 6227020800){
            cout << "Overflow!" << endl;
        }
        else{
            cout << fact << endl;
        }
    }
    return 0;
}
