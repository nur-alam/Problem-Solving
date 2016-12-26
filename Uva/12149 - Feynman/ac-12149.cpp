#include<iostream>

using namespace std;

int main()
{

    int i, n, sum;

    while(cin>>n)
    {
        sum = 0;

        if( n == 0)
            return 0;

        for(i=1; i<=n; i++)
        {
            sum = sum + (i*i);
        }
        cout << sum << endl;
    }

    return 0;

}
