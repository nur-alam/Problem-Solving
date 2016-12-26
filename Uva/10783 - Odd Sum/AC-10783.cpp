#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int testCases;
    int a,b,i=0;
    freopen("in.txt","r",stdin);
    cin>>testCases;
    while(testCases--)
    {
        int oddsum = 0;
        cin>>a>>b;
        for(int j=a; j<=b; j++)
        {
            if(j%2!=0)
            {
                oddsum+=j;
            }
            else
            {
                continue;
            }
        }
        cout<<"Case "<<i+1<<": "<<oddsum<<endl;
    }

    return 0;
}
