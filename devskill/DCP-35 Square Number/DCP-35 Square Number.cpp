#include<bits/stdc++.h>

using namespace std;

int main(){

    int i, j , t , n , c = 0;
    cin >> t;

    while(t--)
    {
        i = 0 , j = 0 , ++c;
        bool ch = true;
        cin >> n;
        j = sqrt(n);
        if( (j*j) == n )
            cout << "Case "<< c << ": YES" << endl;
        else
            cout << "Case "<< c << ": NO" << endl;
    }

    return 0;
}
