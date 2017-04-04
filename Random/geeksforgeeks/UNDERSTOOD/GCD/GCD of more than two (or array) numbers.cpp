// C++ program to find gcd
#include <iostream>
using namespace std;

// Function to return gcd of a and b
int gcd(int a, int b)
{
    if(a==0)
        return b;
    return gcd(b%a,a);
}

//Function to find gcd of array of numbers
int findGCD(int arr[], int n)
{
    int result = arr[0];

    for(int i=1; i<n; i++)
        result = gcd(result,arr[i]);

    return result;
}

int main()
{
    int arr[] = {2,4,6,8,16};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << findGCD(arr, n) << endl;

    return 0;
}
