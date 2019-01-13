#include<bits/stdc++.h>

using namespace std;

int main(){

    int t; cin>>t;
    while(t--)
    {
        int arr_size, search_number, index;
        cin>>arr_size>>search_number;
        int arr[arr_size];

        for(auto i=0; i<arr_size; i++){
            cin>>arr[i];
        }

        if(arr[0]>search_number){
            cout<<"-1" << endl;continue;
        }else if(arr[arr_size-1]<search_number){
            cout<<arr_size-1<< endl;continue;
        }else{
            for(auto i=1; i<arr_size; i++){
                if(arr[i]<=search_number){
                    index = i;
                }
                if(arr[i]>search_number) break;
            }
            cout<<index;
        }

        cout << endl;

    }

    return 0;

}
