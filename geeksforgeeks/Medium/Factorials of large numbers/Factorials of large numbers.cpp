#include<bits/stdc++.h>

using namespace std;

#define MAX 500

int multiply(int x, int res[], int res_size){
    int carry = 0;
    // one by one multiply n with individual digits
    for(int i=0; i<res_size; i++){
        int prod = res[i] * x + carry;
        // store last digit of prod in res[i]
        res[i] = prod % 10;
        // put res in carry
        carry = prod / 10;
    }
    // put carry in res and increase result size
    while(carry){
        res[res_size] = carry % 10;
        carry = carry / 10;
        res_size++;
    }

    return res_size;
}

void factorial(int n){
    int res[MAX];
    res[0] = 1;
    int res_size = 1;
    if(n==1) cout <<  "1" << endl;
    if(n==0 || n<0) cout << "0" << endl;
    // apply simple factorial formula n! = 1 * 2 * 3 * 4 * 5 ...
    for(int x=2; x<=n; x++)
        res_size = multiply(x, res, res_size);
    cout << "Factorial of given number is = ";
    for(int i=res_size-1; i>=0; i--)
        cout << res[i];
    cout << endl;
    //cout <<"number of digits is " << res_size << endl;
}

int main(){

    int t,n;

    cin >> t;

    while(t--){
        cin >> n;
        factorial(n);
    }

    return 0;

}
