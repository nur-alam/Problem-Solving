// C++ program to find pair whose sum already
// exists in array
#include<bits/stdc++.h>
using namespace std;

// Function to find pair whose sum exists in arr[]
void findPair(int arr[], int n)
{
    // Hash to store all element of array
     unordered_set <int> s;
    for (int i=0; i<n; i++)
        s.insert(arr[i]);
    for(i=0;i<s.size();i++)
        cout<<s[i]<<" ";
}

// Driven code
int main()
{
    int arr[] = {10, 4, 8, 13, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    findPair(arr,n);
    return 0;
}
