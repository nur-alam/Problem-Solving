#include<iostream>

using namespace std;

int main(){
    int i,n;
    while(cin>>n){
        double fact = 1;
        if( (n>=0 && n<8) || (n<0 && n%2==0) ) {
            cout << "Underflow!" << endl;
        }
        else if( n>13 || (n<0 && n%2==-1) ){
            cout << "Overflow!" << endl;
        }
        else{
            for(i=1;i<=n;i++){
                fact = fact * i;
            }
            cout << fact << endl;
        }
    }
    return 0;
}
