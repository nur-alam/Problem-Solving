#include<iostream>

using namespace std;

int findgcd(int a,int b)
{

    int t,gcd;
    if(a==0)
        gcd = a;
    else if(b==0)
        gcd = b;
    else{
        while(b!=0){
            t = b;
            b = a%b;
            a = t;
        }
        gcd = a;
    }
    return gcd;
}

int main()
{
    int a,b,c,g;
    char ch;
    cin>>g;
    while(g--)
    {
        cin>>a>>ch>>b;
        if(ch == '/')
            cout << a/b <<endl;
    }

    //g = findgcd(findgcd(a,b),c);
    //cout << findgcd(findgcd(a,b),c) << endl;
    return 0;
}
