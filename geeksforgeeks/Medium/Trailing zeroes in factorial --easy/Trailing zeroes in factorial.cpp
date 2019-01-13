#include<bits/stdc++.h>

using namespace std;

int findTrailingZeros(int n)
{
    int i, countZero = 0;
    for(i=5; i<=n; i=i*5)
    {
        countZero += n/i;
    }
    return countZero;
}

int main(){

    int t, n;
    cin >> t;

    while(t--){

        cin >> n;

        cout << findTrailingZeros(n) << endl;

    }

    return 0;

}
