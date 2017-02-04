#include<bits/stdc++.h>

using namespace std;

#define max 1001


// This function for factorial
int factorial(int arr[],int n){
    int i,j,carry=0,arr_size = 0,prod = 0;
    for(i=1; i<=n; i++){
        for(j=0; j<=arr_size; j++){
            arr[j] = (arr[j]*i)+carry;
            carry  =  arr[j]/10; // put rest of digit
            arr[j] =  arr[j]%10; // keeping last digit
        }
        while(carry){
            arr_size++;
            arr[arr_size] = carry%10;
            carry /= 10;
        }
    }
    return arr_size;
}

int main(){
    int i,j,n,arr_size,t;
    cin>>t;
    while(t--){
        cin>>n;
        int arr[max]={1};
        arr_size = factorial(arr,n);
        for(i=arr_size;i>=0;i--)
            cout<<arr[i];
        cout<<endl;
    }
    return 0;
}
