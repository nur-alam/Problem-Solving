#include<bits/stdc++.h>

using namespace std;
#define size 100

int arr[size];

int appear_once(int arr[],int n){
    int new_arr[n];
    int k=0;
    for(int i=0;i<n;i++){
        bool repeat=false;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j] && i!=j){
                repeat = true;break;
            }
        }
        if(!repeat){
            new_arr[k++] = arr[i];
        }
    }
    for(int i=0;i<k;i++)
        cout << new_arr[i] << " ";
    cout<<endl;
    return new_arr[k--];
}

int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        appear_once(arr,n);
    }
}
