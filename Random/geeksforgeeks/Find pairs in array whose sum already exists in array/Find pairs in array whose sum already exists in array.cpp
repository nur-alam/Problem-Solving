#include<bits/stdc++.h>

using namespace std;

// this function for find pair whose sum
// already exists in array
void findPair(int arr[], int n)
{
    bool found = false;
    int i,j,k;
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            for(k=0; k<n; k++)
            {
                if(arr[i] + arr[j] == arr[k])
                {
                    cout << arr[i] << " " << arr[j] << endl;
                    found = true;
                }
            }
        }
    }
    if(found == false)
        cout << "Not exists" << endl;
}

// main function
int main(){

    int arr[] = {10,4,8,13,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    findPair(arr,n);

    return 0;

}
