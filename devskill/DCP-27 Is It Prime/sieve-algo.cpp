#include<bits/stdc++.h>

using namespace std;

#define max 100

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

    int count = 0 , i , j;

    for(i=2,j=1; j<max; i++,j++)
    {
        if(arr[j] == 1)
        {
            cout << j << " ";
            ++count;
        }
    }

    cout << endl << "Total prime count = " << count << endl;

    return 0;
}
