/*  C++ code to generate all possible subsequences.
    Time Complexity O(n * 2^n) */
#include<bits/stdc++.h>
using namespace std;

void printSubsequences(int arr[], int n)
{
    /* Number of subsequences is (2**n -1)*/
    unsigned int opsize = pow(2, n);

    /* Run from counter 000..1 to 111..1*/
    for (int counter = 1; counter < opsize; counter++)
    {
        for (int j = 0; j < n; j++)
        {
            /* Check if jth bit in the counter is set
                If set then print jth element from arr[] */
            if (counter & (1<<j))
                cout << arr[j] << " ";
        }
        cout << endl;
    }
}

// Driver program
int main()
{
    int arr[] = {1, 2, 3, 4};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "All Non-empty Subsequences\n";
    printSubsequences(arr, n);
    return 0;
}
