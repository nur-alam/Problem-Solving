#include<bits/stdc++.h>

using namespace std;

int recursion(int n)
{
    int fact;
    if(n==1)
        return true;
    else
        fact = n*recursion(n-1);
    //recursion(n-1);
    cout<<n<<endl;
    return fact;
}
int main(){
    int n = 019;
    printf("%d",n);
    cout<<recursion(5);
    return 0;

}
