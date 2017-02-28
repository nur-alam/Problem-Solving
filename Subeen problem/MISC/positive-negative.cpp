#include<iostream>

using namespace std;

int main()
{
    int t , i;

    cin>>t;
    int n[t];

    int posivitve = 0;
    int negative = 0;

    for(i=0; i<t; i++)
    {
        cin>>n[i];
        if(n[i]>0)
            posivitve++;
        else
            negative++;
    }

    cout << posivitve << " " << negative << endl;

    return 0;
}
