#include<bits/stdc++.h>

using namespace std;

bool isPossibleTriangle(int arr[], int n)
{
    // if number of elements are less than 3,
    //then no triangle is possible
    if(n < 3)
        return false;

    //first sort the array
    sort(arr,arr+n);

    // loop for all 3 consecutive triplets
    for(int i=0; i<n-2; i++)
    {
        if(arr[i] + arr[i+1] > arr[i+2])
            return true;
    }

}

int main()
{
    int arr[] = {5,4,3,1,2};
    int n = sizeof(arr)/sizeof(int);

    isPossibleTriangle(arr,n) ? cout << "Yes" : cout << "No";

    return 0;
}
