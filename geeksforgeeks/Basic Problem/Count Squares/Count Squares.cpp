#include<bits/stdc++.h>

using namespace std;

int floorSqrt(long long int x)
{
    if(x==0 || x==1) return 0;
    int i=1; long long int result = 1;
    while(result<=x)
    {
        i++;
        result = i*i;
    }
    if((i-1)*(i-1) == x) return i-2;
    return i-1;
}

int main(){

    int t;cin>>t;
    long long int x;
    while(t--){
        cin>>x;
        cout << floorSqrt(x) << endl;
    }

    return 0;

}
