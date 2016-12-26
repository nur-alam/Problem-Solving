#include<iostream>

using namespace std;

int main()
{

    long long int i,k;
    int n;
    cin>>n;
    while(n--)
    {
        cin>>i;
        if(i%2!=0)
        {
            i--;
        }
        k = i>>1;   // k = i/2 is same here >> is
                    //left shift bitwise oparetor.

        cout << k <<endl;
    }

    return 0;

}
