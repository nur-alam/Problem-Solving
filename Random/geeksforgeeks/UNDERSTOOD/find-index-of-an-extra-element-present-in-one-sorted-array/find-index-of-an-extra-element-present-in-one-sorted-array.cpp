#include <iostream>

using namespace std;

int findExtra(int arr1[], int arr2[], int n)
{
    for(int i=0; i<n; i++)
        if(arr1[i] != arr2[i])
            return i;
    return n;
}

// main function
int main(){

    int arr1[] = {2, 4, 6, 8, 10, 12, 13};
    int arr2[] = {2, 4, 6, 8, 10, 12};
    int n = sizeof(arr2)/sizeof(arr2[0]);
    cout << findExtra(arr1,arr2,n);

    return 0;
}
