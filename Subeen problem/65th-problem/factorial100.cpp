#include<iostream>

using namespace std;

int trailing_zero(int n)
{
    int i,total_zero = 0;
    for(i=5;n/i>=1;i*=5)
    {
        total_zero += n/i;
    }
    return total_zero;
}

int main(){

    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout << trailing_zero(n) << endl;
    }

    return 0;

}
