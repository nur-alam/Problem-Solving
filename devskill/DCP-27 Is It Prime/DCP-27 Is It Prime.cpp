#include<bits/stdc++.h>

using namespace std;

#define max 10000

int arr[max];

// prime indicator function
void sieve(){

    int i , j;

    // putting 1 as every index value of array
    for(i=2; i<max; i++)
        arr[i] = 1;

    // putting 0 to product of factor i & j
    for(i=2; i<sqrt(max); i++)
    {
        if(arr[i] == 1)
        {
            for(j=2; i*j<max; j++)
                arr[j*i] = 0;
        }
    }
}

// main function
int main(){

    sieve();

    int i , j , t , n;
    cin >> t;

    while(t--)
    {
        cin >> n;
        if( arr[n] == 1 )
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}
