#include<bits/stdc++.h>

using namespace std;

// for printing array
void printArray(vector<int> arr(),int arr_size);

int main(){

    size_t size = 10;int i;
    vector<int> arr(size);
    for(i=0; i<size; ++i)
        arr[i] = i;

    for(i=0; i<10; ++i)
        cout<<arr[i]<<" ";
    cout<<endl;

    return 0;
}



