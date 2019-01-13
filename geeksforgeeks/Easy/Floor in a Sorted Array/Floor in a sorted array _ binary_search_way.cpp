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
            int low = 0, high = arr_size-1;
            while(low<=high){
                int mid = (low+high) >> 1;
                if(arr[mid]==search_number) { index = mid;break; }
                else if(search_number<arr[mid]) {
                    if(arr[mid-1]<search_number){
                        index = mid-1;break;
                    }
                    high = mid-1;
                }
                else {
                    if(arr[mid+1]>search_number){
                        index = mid;
                    }
                    low = mid+1;
                }
            } cout << index;
        }

        cout << endl;

    }

    return 0;

}
