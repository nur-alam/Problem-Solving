#include<bits/stdc++.h>

using namespace std;

bool check(int mid, int n)
{
    int trailingZero = 0;
    for(int i=5; i<=mid; i*=5)
    {
        trailingZero += mid/i;
    }
    return (trailingZero>=n);
}

int findNum(int n)
{
    if(n==1) return 5;
    int low = 0, high = 5*n;
    while(low<high)
    {
        int mid = (low+high) >> 1;
        if(check(mid,n))
            high = mid;
        else
            low = mid + 1;
    }
    return low;
}

int main(){

    int t, i, n, trailingZero;
    cin >> t;

    while(t--)
    {
        cin >> n;
        cout << findNum(n) << endl;
    }

    return 0;

}
